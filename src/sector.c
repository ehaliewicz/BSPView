#include "genesis.h"
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
    const Vect2D_f32* vert = &vertices[vidx];
    Vect2D_f32* trans_vert = &vertices_cache[vidx].translated_vertex;
    fix32 tx = vert->x - ply.where.x;
    fix32 ty = vert->y - ply.where.y;

    vertices_cache[vidx].dist = getApproximatedDistance(fix32ToInt(tx), fix32ToInt(ty));
    trans_vert->x = tx;
    trans_vert->y = ty;
    vertices_cache[vidx].info |= CACHED_DIST;
}

void transform_vertex(int vidx, fix32 psin, fix32 pcos) {
    if(vertices_cache[vidx].info &= (CACHED_TRANSFORMATION | CACHED_X_PROJECTION | CACHED_Y_PROJECTION)) {
        return;
    }

    fix32 tx = vertices_cache[vidx].translated_vertex.x;
    fix32 ty = vertices_cache[vidx].translated_vertex.y;
    fix32 rx = SAFEMUL32(tx, psin) - SAFEMUL32(ty, pcos);
    fix32 rz = SAFEMUL32(tx, pcos) + SAFEMUL32(ty, psin);
    vertices_cache[vidx].transformed_vertex.x = rx;
    vertices_cache[vidx].transformed_vertex.y = rz;
    vertices_cache[vidx].info |= CACHED_TRANSFORMATION;
}

void project_vertex_x(int vidx) {
    if(vertices_cache[vidx].info &= (CACHED_X_PROJECTION | CACHED_Y_PROJECTION)) {
        return;
    }
    fix32 rx = vertices_cache[vidx].transformed_vertex.x;
    fix32 rz = vertices_cache[vidx].transformed_vertex.y;
    fix32 xscale = fix32Div(SAFEMUL32(FIX32(W), HFOV), max(FIX32(0.1), rz));
    s16 x = W/2 - fix32ToInt(SAFEMUL32(rx, xscale));
    vertices_cache[vidx].x = x;
    vertices_cache[vidx].info |= CACHED_X_PROJECTION;
}

void project_vertex_y(int vidx) {
    if(vertices_cache[vidx].info &= CACHED_Y_PROJECTION) {
        return;
    }
    fix32 rz = vertices_cache[vidx].transformed_vertex.y;
    fix32 yscale = fix32Div(SAFEMUL32(FIX32(H), VFOV), max(FIX32(0.1), rz));
    vertices_cache[vidx].yscale = yscale;
    vertices_cache[vidx].info |= CACHED_Y_PROJECTION;
}

int draw_sector(sector* sect) {

    fix32 sect_ceil = sect->ceil_height;
    fix32 sect_floor = sect->floor_height;

    u32 total_dist = 0;

    fix32 pcos = ply.anglecos;
    fix32 psin = ply.anglesin;

    
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
        // been translated and had the distance calcualted
        u32 v1_dist = vertices_cache[w->v1].dist;
        u32 v2_dist = vertices_cache[w->v2].dist;
        u32 avg_dist = (v1_dist + v2_dist)/2;

        
        transform_vertex(w->v1, psin, pcos);
        transform_vertex(w->v2, psin, pcos);

        fix32 rx1 = vertices_cache[w->v1].transformed_vertex.x;
        fix32 rz1 = vertices_cache[w->v1].transformed_vertex.y;
        fix32 rx2 = vertices_cache[w->v2].transformed_vertex.x;
        fix32 rz2 = vertices_cache[w->v2].transformed_vertex.y;

        if(rz1 <= 0 && rz2 <= 0) { 
            walls_frustum_culled_after_transform++; 
            continue;
        }

        int clipped = 0;

        int left_clipped = rz1 <= 0;
        int right_clipped = rz2 <= 0;
        // if it's partially behind the player, clip it against player's view frustum
        if(left_clipped || right_clipped) {   
            clipped = 1;
            walls_clipped_after_transform++;

            fix32 nearz = FIX32(0.1);

            fix16 nearz_16 = FIX16(0.5);
            fix16 farz_16 = FIX16(5);
            fix16 nearside_16 = FIX16(0.2);
            fix16 farside_16 = FIX16(20);

            // find an intersection between the wall and the approximate edges of the player's view


            fix16 rx1_16 = safeFix32ToFix16(rx1);
            fix16 rz1_16 = safeFix32ToFix16(rz1);
            fix16 rx2_16 = safeFix32ToFix16(rx2);
            fix16 rz2_16 = safeFix32ToFix16(rz2);

            Vect2D_f16 i1 = Intersect16(rx1_16, rz1_16, rx2_16, rz2_16,
                                        -nearside_16, nearz_16, -farside_16, farz_16);
            Vect2D_f16 i2 = Intersect16(rx1_16, rz1_16, rx2_16, rz2_16,
                                        nearside_16, nearz_16, farside_16, farz_16);

            if(rz1 < nearz) { 
                if(i1.y > 0) {
                    rx1 = safeFix16ToFix32(i1.x);
                    rz1 = safeFix16ToFix32(i1.y);
                } else {
                    rx1 = safeFix16ToFix32(i2.x);
                    rz1 = safeFix16ToFix32(i2.y);
                }
            }
            if(rz2 < nearz) {
                if(i1.y > 0) {
                    //rx2 = i1.x;
                    //rz2 = i1.y;
                    rx2 = safeFix16ToFix32(i1.x);
                    rz2 = safeFix16ToFix32(i1.y);
                } else {
                    //rx2 = i2.x;
                    //rz2 = i2.y;
                    rx2 = safeFix16ToFix32(i2.x);
                    rz2 = safeFix16ToFix32(i2.y);
                }
            }
        }
        

        s16 x1,x2;
        // do perspective projection
        if(clipped) {
            fix32 xscale1 = fix32Div(SAFEMUL32(FIX32(W), HFOV), max(FIX32(0.1), rz1));
            x1 = W/2 - fix32ToInt(SAFEMUL32(rx1, xscale1));
            fix32 xscale2 = fix32Div(SAFEMUL32(FIX32(W), HFOV), max(FIX32(0.1), rz2));
            x2 = W/2 - fix32ToInt(SAFEMUL32(rx2, xscale2));
        } else {
          project_vertex_x(w->v1);
          project_vertex_x(w->v2);
          x1 = vertices_cache[w->v1].x;
          x2 = vertices_cache[w->v2].x;
        }

        walls_projected++;

        if(x1 > W-1) { walls_frustum_culled_after_projection++; continue; }
        if(x2 < 0) { walls_frustum_culled_after_projection++; continue; }
        if(x1 >= x2) { projected_backfacing_walls++; continue; }


        // x1 += fix32ToInt(ply.sway_offset);
        // x2 += fix32ToInt(ply.sway_offset);

        // acquire the floor and ceiling heights, relative to where the player's view is
        fix32 yceil = sect_ceil - (ply.where.z + ply.bob_offset);
        fix32 yfloor = sect_floor - (ply.where.z + ply.bob_offset);

        fix32 yscale1, yscale2;
        if(clipped) {
            yscale1 = fix32Div(SAFEMUL32(FIX32(H), VFOV), max(FIX32(0.1), rz1));
            yscale2 = fix32Div(SAFEMUL32(FIX32(H), VFOV), max(FIX32(0.1), rz2));
        } else {
            project_vertex_y(w->v1);
            project_vertex_y(w->v2);
            yscale1 = vertices_cache[w->v1].yscale;
            yscale2 = vertices_cache[w->v2].yscale;

        }
        // project ceiling and floor heights into screen coordinates
        #define Yaw(y,z) (y+fix16Mul(z,ply.yaw))
        
        fix32 fy1a = (FIX32(H/2) - (SAFEMUL32(yceil, yscale1)))<<6; // 16.6
        fix32 fy1b = (FIX32(H/2) - (SAFEMUL32(yfloor, yscale1)))<<6; 

        fix32 fy2a = (FIX32(H/2) - (SAFEMUL32(yceil, yscale2)))<<6;
        fix32 fy2b = (FIX32(H/2) - (SAFEMUL32(yfloor, yscale2)))<<6;
        

        u8 wall_col = calculate_color(w->middle_color, avg_dist, sect->light_level);
        u8 low_col = calculate_color(w->lower_color, avg_dist, sect->light_level);
        u8 high_col = calculate_color(w->upper_color, avg_dist, sect->light_level);
        u8 dither_wall = needs_dither(avg_dist);

        
        if(w->back_sector == NULL) { //w->middle_color != TRANSPARENT_IDX) { 
            
            //Vect2D_s16 wall_poly[4] = {
            //    {x2, y2a}, {x2, y2b},
            //    {x1, y1b}, {x1, y1a}
            //};
            //BMP_drawPolygon(wall_poly, 4, wall_col);
            walls_sent_to_screen_clipper++;
            int full = insert_span(x1, x2, fy1a, fy1a, fy2a, fy2a, fy1b, fy1b, fy2b, fy2b, sect_ceil_col, high_col, wall_col, low_col, sect_floor_col, 1, dither_wall, dither_floor);
            if(full) { return full; }
        } else {

            
            fix32 nsceil = w->back_sector->ceil_height;
            fix32 nsfloor = w->back_sector->floor_height;

            fix32 nyceil = nsceil - (ply.where.z + ply.bob_offset);
            //int ny1a = H/2 - (fix32ToInt(SAFEMUL32(nyceil, yscale1)));
            //int ny2a = H/2 - (fix32ToInt(SAFEMUL32(nyceil, yscale2)));
            fix32 nyfloor = nsfloor - (ply.where.z + ply.bob_offset);
            //int ny1b = H/2 - (fix32ToInt(SAFEMUL32(nyfloor, yscale1)));
            //int ny2b = H/2 - (fix32ToInt(SAFEMUL32(nyfloor, yscale2)));


            fix32 fny1a = (FIX32(H/2) - (SAFEMUL32(nyceil, yscale1))) << 6;
            fix32 fny2a = (FIX32(H/2) - (SAFEMUL32(nyceil, yscale2))) << 6;
            fix32 fny1b = (FIX32(H/2) - (SAFEMUL32(nyfloor, yscale1))) << 6;
            fix32 fny2b = (FIX32(H/2) - (SAFEMUL32(nyfloor, yscale2))) << 6;
            portals_sent_to_screen_clipper++;
            insert_span(x1, x2, fy1a, fny1a, fy2a, fny2a, fy1b, fny1b, fy2b, fny2b, sect_ceil_col, high_col, wall_col, low_col, sect_floor_col, 0, dither_wall, dither_floor);
        }
    }
    return 0;
}
