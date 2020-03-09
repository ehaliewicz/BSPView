#include "genesis.h"
#include "draw.h"
#include "sector.h"
#include "map.h"
#include "player.h"
#include "common.h"
#include "palette.h"
#include "span_buf.h"

int walls_transformed, walls_projected;
int walls_frustum_culled_after_transform, walls_frustum_culled_after_projection;
int walls_clipped_after_transform;
int projected_backfacing_walls;
int walls_sent_to_screen_clipper, portals_sent_to_screen_clipper;
int max_pixel_height_for_wall = 0;

void clear_transform_stats() {
    walls_transformed = 0;
    walls_frustum_culled_after_transform = 0;
    walls_frustum_culled_after_projection = 0;
    walls_clipped_after_transform = 0;
    projected_backfacing_walls = 0;
    walls_sent_to_screen_clipper = 0;
    portals_sent_to_screen_clipper = 0;
    walls_projected = 0;
}

void translate_and_calc_distance(int vidx) {
    if(vertices_cache[vidx].info &= (CACHED_DIST | CACHED_TRANSFORMATION | CACHED_X_PROJECTION | CACHED_Y_PROJECTION)) {
        return;
    }
    const Vect2D_f16* vert = &vertices[vidx];
    Vect2D_f16* trans_vert = &vertices_cache[vidx].translated_vertex;
    fix16 tx = vert->x - ply.where.x;
    fix16 ty = vert->y - ply.where.y;

    vertices_cache[vidx].dist = getApproximatedDistance(fix16ToInt(tx), fix16ToInt(ty));
    trans_vert->x = tx;
    trans_vert->y = ty;
    vertices_cache[vidx].info |= CACHED_DIST;
}

void transform_vertex(int vidx, fix16 psin, fix16 pcos) {
    if(vertices_cache[vidx].info &= (CACHED_TRANSFORMATION | CACHED_X_PROJECTION | CACHED_Y_PROJECTION)) {
        return;
    }

    fix16 tx = vertices_cache[vidx].translated_vertex.x;
    fix16 ty = vertices_cache[vidx].translated_vertex.y;
    fix16 rx = fix16Mul(tx, psin) - fix16Mul(ty, pcos);
    fix16 rz = fix16Mul(tx, pcos) + fix16Mul(ty, psin);
    vertices_cache[vidx].transformed_vertex.x = rx;
    vertices_cache[vidx].transformed_vertex.y = rz;
    vertices_cache[vidx].info |= CACHED_TRANSFORMATION;
}

#define WFOV_SCALE_Q6 (W*HFOV) 
// 10.6
#define VFOV_SCALE_Q6 (H*VFOV) 
// 10.6



s16 project_vertex_x(int vidx) {
    if(vertices_cache[vidx].info &= (CACHED_X_PROJECTION | CACHED_Y_PROJECTION)) { 
        return vertices_cache[vidx].x;
    }

    fix16 rx = vertices_cache[vidx].transformed_vertex.x;
    fix16 rz = vertices_cache[vidx].transformed_vertex.y;
    fix16 xscale = (WFOV_SCALE_Q6<<FIX16_FRAC_BITS)/rz;

    s16 x = (W/2) - ((rx * xscale)>>(FIX16_FRAC_BITS*2));
    
    vertices_cache[vidx].x = x;
    vertices_cache[vidx].info |= CACHED_X_PROJECTION;
    return x;
}


fix32 project_vertex_y(int vidx) {
    if(vertices_cache[vidx].info &= CACHED_Y_PROJECTION) {
        return vertices_cache[vidx].yscale;
    }
    fix16 rz = vertices_cache[vidx].transformed_vertex.y;
    fix32 yscale = (VFOV_SCALE_Q6<<(FIX16_FRAC_BITS*2)) / rz; // 10.18 - 10.6 => 10.12
    vertices_cache[vidx].yscale = yscale;
    vertices_cache[vidx].info |= CACHED_Y_PROJECTION;
    return yscale;
}


int draw_sector(sector* sect) {
    fix16 sect_ceil = sect->ceil_height;
    fix16 sect_floor = sect->floor_height;

    u32 total_dist = 0;

    fix16 pcos = ply.anglecos;
    fix16 psin = ply.anglesin;

    // TODO: add a center point to each sector

    for(u16 i = 0; i < sect->num_walls; i++) {
        wall* w = sect->walls[i];

        translate_and_calc_distance(w->v1);
        translate_and_calc_distance(w->v2);
        u32 v1_dist = vertices_cache[w->v1].dist;
        u32 v2_dist = vertices_cache[w->v2].dist;
        
        u32 avg_dist = (v1_dist + v2_dist)/2;
        total_dist += avg_dist;
    }

    u32 real_avg_dist = total_dist / sect->num_walls;
    u8 sect_floor_col = calculate_color(sect->floor_color, real_avg_dist, sect->light_level);
    u8 sect_ceil_col = calculate_color(sect->ceil_color, real_avg_dist, sect->light_level);
    u8 dither_floor = needs_dither(real_avg_dist);

    for(u16 i = 0; i < sect->num_walls; i++) {
        wall* w = sect->walls[i];
        // we know that every vertex in this sector has already 
        // been translated and had the distance calculated
        u32 v1_dist = vertices_cache[w->v1].dist;
        u32 v2_dist = vertices_cache[w->v2].dist;
        u32 avg_dist = (v1_dist + v2_dist)/2;
        
        transform_vertex(w->v1, psin, pcos);
        transform_vertex(w->v2, psin, pcos);

        fix16 rx1 = vertices_cache[w->v1].transformed_vertex.x;
        fix16 rz1 = vertices_cache[w->v1].transformed_vertex.y;
        fix16 rx2 = vertices_cache[w->v2].transformed_vertex.x;
        fix16 rz2 = vertices_cache[w->v2].transformed_vertex.y;

        //if(rz1 <= 0 && rz2 <= 0) { 
        //    walls_frustum_culled_after_transform++; 
        //    continue;
        //}

        const fix16 minZ = FIX16(0.2);
        int left_clipped = rz1 <= minZ;  // <= 0
        int right_clipped = rz2 <= minZ; // <= 0
        // if it's partially behind the player, clip it against near z plane
        if(left_clipped && right_clipped) { 
            walls_frustum_culled_after_transform++; 
            continue;
        } else if (left_clipped || right_clipped) {
            walls_clipped_after_transform++;
            // find x-change over y-change
            fix16 dx = rx2-rx1; // 10.6
            fix16 dz = rz2-rz1; // 10.6
            if(abs(dz) < FIX16(0.1)) { 
                continue;
            }

            // dx/dz * amount_of_z_to_clip = amount_of_x_to_clip
            //fix16 dxOverDz = (dx<<6) / dz; // 4.12 / 10.6 => 10.6
            fix16 dxOverDz = fix16Div(dx, dz);
            if(left_clipped) {
                fix16 clippedZ = (minZ-rz1);
                fix16 clippedX = fix16Mul(clippedZ, dxOverDz);
                rx1 -= clippedX; // += clippedX;
                rz1 = minZ;
            } else if (right_clipped) {
                fix16 clippedZ = (minZ-rz2);
                fix16 clippedX = fix16Mul(clippedZ, dxOverDz);
                fix16 new_rx2 = rx2 + clippedX;
                fix16 new_rz2 = minZ;
                
                rx2 -= clippedX;
                //rx2 += clippedX;
                rz2 = minZ;
            }
        }
    

        s16 x1,x2;
        // do perspective projection

	
        if(left_clipped) {
            fix16 xscale1 = ((VFOV_SCALE_Q6)<<FIX16_FRAC_BITS) / rz1;
            x1 = W/2 - ((rx1 * xscale1)>>(FIX16_FRAC_BITS*2));
            if(x1 > W-1) { walls_frustum_culled_after_projection++; continue; }

            //x1 = 0;
            x2 = project_vertex_x(w->v2);
        } else if (right_clipped) {
            x1 = project_vertex_x(w->v1);
            if(x1 > W-1) { walls_frustum_culled_after_projection++; continue; }
            fix16 xscale2 = ((VFOV_SCALE_Q6)<<FIX16_FRAC_BITS) / rz2;
            x2 = W/2 - ((rx2 * xscale2)>>(FIX16_FRAC_BITS*2));
            //x2 = W-1;
        } else {
	        x1 = project_vertex_x(w->v1);
	        if(x1 > W-1) { walls_frustum_culled_after_projection++; continue; }
	        x2 = project_vertex_x(w->v2);
        }
	
        
        

        walls_projected++;

        if(x2 < 0) { 
            walls_frustum_culled_after_projection++; 
            continue; 
        }

        if(x1 >= x2) { 
            projected_backfacing_walls++; 
            continue; 
        }

        // x1 += fix16ToInt(ply.sway_offset);
        // x2 += fix16ToInt(ply.sway_offset);

        // acquire the floor and ceiling heights, relative to where the player's view is
        fix16 yceil = sect_ceil - (ply.where.z + ply.bob_offset);
        fix16 yfloor = sect_floor - (ply.where.z + ply.bob_offset);
        
           // project ceiling and floor heights into screen coordinates
        #define Yaw(y,z) (y+fix16Mul(z,ply.yaw))

        fix32 yscale1, yscale2;
        
        if(left_clipped) {
            yscale1 = ((VFOV_SCALE_Q6)<<(FIX16_FRAC_BITS*2)) / rz1; // 10.18 - 10.6 => 10.12
            yscale2 = project_vertex_y(w->v2);
            //yscale2 = vertices_cache[w->v2].yscale;
        } else if (right_clipped) {
            yscale1 = project_vertex_y(w->v1);
            yscale2 = ((VFOV_SCALE_Q6)<<(FIX16_FRAC_BITS*2)) / rz2; // 10.12 
        } else {
            yscale1 = project_vertex_y(w->v1);
            yscale2 = project_vertex_y(w->v2);
        }
        
        fix32 height_offset = ((H<<12)/2);
        fix32 fy1a = height_offset - ((yceil * yscale1)>>FIX16_FRAC_BITS); // 10.6 + 10.12 = 10.18 >> 6 = 10.12
        fix32 fy1b = height_offset - ((yfloor * yscale1)>>FIX16_FRAC_BITS);
        fix32 fy2a = height_offset - ((yceil * yscale2)>>FIX16_FRAC_BITS); 
        fix32 fy2b = height_offset - ((yfloor * yscale2)>>FIX16_FRAC_BITS);

        int dy1 = fix32ToInt(fy1b-fy1a);
        int dy2 = fix32ToInt(fy2b-fy2a);
        max_pixel_height_for_wall = max(max_pixel_height_for_wall, max(dy1, dy2));


        //if(fy1a > fy1b || fy2a > fy2b) { continue; }

        u8 wall_col = calculate_color(w->middle_color, avg_dist, sect->light_level);
        u8 low_col = calculate_color(w->lower_color, avg_dist, sect->light_level);
        u8 high_col = calculate_color(w->upper_color, avg_dist, sect->light_level);
        u8 dither_wall = needs_dither(avg_dist);

        if(w->back_sector == NULL) { //w->middle_color != TRANSPARENT_IDX) { 
            walls_sent_to_screen_clipper++;
            int full = insert_span(x1, x2, 1);
            for(int i = 0; i < num_render_spans; i++) {
                draw_one_sided_span(x1, x2, 
                                    fy1a, fy1b, 
                                    fy2a, fy2b, 
                                    render_spans_for_wall[i].clip_x1,
                                    render_spans_for_wall[i].clip_x2,
                                    sect_ceil_col, wall_col, sect_floor_col, 
                                    dither_wall, dither_floor);
            }
            if(full) { return full; }

            // for opaque walls
            //int full = clip_insert_and_draw_span(x1, x2, fy1a, fy1b, fy2a, fy2b, sect_ceil_col, high_col, wall_col, low_col, sect_floor_col, dither_wall, dither_floor);
            //if(full) { return full; }

        } else {
            fix16 nsceil = w->back_sector->ceil_height;
            fix16 nsfloor = w->back_sector->floor_height;
            u8 handle_upper_step = nsceil < sect_ceil;
            u8 handle_lower_step = nsfloor > sect_floor;

            if(nsceil < sect_floor) {
                // draw just top wall as opaque wall
                int full = insert_span(x1, x2, 1);
                for(int i = 0; i < num_render_spans; i++) {
                    draw_one_sided_span(x1, x2, 
                                        fy1a, fy1b, 
                                        fy2a, fy2b, 
                                        render_spans_for_wall[i].clip_x1,
                                        render_spans_for_wall[i].clip_x2,
                                        sect_ceil_col, high_col, sect_floor_col, 
                                        dither_wall, dither_floor);
                }
                if(full) { 
                    return full; 
                }

            } else if (nsfloor > sect_ceil) {
                // draw just bottom wall as opaque wall
                int full = insert_span(x1, x2, 1);
                for(int i = 0; i < num_render_spans; i++) {
                    draw_one_sided_span(x1, x2, 
                                        fy1a, fy1b, 
                                        fy2a, fy2b, 
                                        render_spans_for_wall[i].clip_x1,
                                        render_spans_for_wall[i].clip_x2,
                                        sect_ceil_col, low_col, sect_floor_col, 
                                        dither_wall, dither_floor);
                }
                if(full) { 
                    return full; 
                }
            } else {

                fix16 nyceil = nsceil - (ply.where.z + ply.bob_offset);
                fix16 nyfloor = nsfloor - (ply.where.z + ply.bob_offset);

                fix32 fny1a = height_offset - ((nyceil * yscale1)>>FIX16_FRAC_BITS); // 10.6 + 10.12 = 10.18 >> 6 = 10.12
                fix32 fny1b = height_offset - ((nyfloor * yscale1)>>FIX16_FRAC_BITS);
                fix32 fny2a = height_offset - ((nyceil * yscale2)>>FIX16_FRAC_BITS); 
                fix32 fny2b = height_offset - ((nyfloor * yscale2)>>FIX16_FRAC_BITS);
                
                
                portals_sent_to_screen_clipper++;
                insert_span(x1, x2, 0);
                for(int i = 0; i < num_render_spans; i++) {
                    draw_two_sided_span(x1, x2, 
                                        fy1a, fny1a,
                                        fy1b, fny1b, 
                                        fy2a, fny2a, 
                                        fy2b, fny2b,
                                        render_spans_for_wall[i].clip_x1,
                                        render_spans_for_wall[i].clip_x2,
                                        sect_ceil_col, high_col, low_col, sect_floor_col, 
                                        dither_wall, dither_floor);
                }
            }


        }
    }

    return 0;
}

