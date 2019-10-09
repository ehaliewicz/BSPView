#include "genesis.h"
#include "sector.h"
#include "map.h"
#include "player.h"
#include "common.h"
#include "palette.h"

int walls_transformed;
int walls_frustum_culled_after_transform;
int walls_clipped_after_transform;
int transformed_backfacing_walls;
int upside_down_walls;
int transformed_walls;
int transformed_portals;

int clear_sector_data() {
    walls_transformed = 0;
    walls_frustum_culled_after_transform = 0;
    walls_clipped_after_transform = 0;
    transformed_backfacing_walls = 0;
    upside_down_walls = 0;
    transformed_walls = 0;
    transformed_portals = 0;
}

int draw_sector(sector* sect) {
    
    fix32 sect_ceil = sect->ceil_height;
    fix32 sect_floor = sect->floor_height;

    u32 total_dist = 0;
    for(u16 i = 0; i < sect->num_walls; i++) {
        wall* w = sect->walls[i];
        
        Vect2D_f32 v1 = vertices[w->v1];
        Vect2D_f32 v2 = vertices[w->v2];
        fix32 vx1 = v1.x;
        fix32 vy1 = v1.y;
        fix32 vx2 = v2.x;
        fix32 vy2 = v2.y;
        fix32 tx1 = vx1 - ply.where.x;
        fix32 ty1 = vy1 - ply.where.y;
        fix32 tx2 = vx2 - ply.where.x;
        fix32 ty2 = vy2 - ply.where.y;

        vertices_cache[w->v1].x = tx1;
        vertices_cache[w->v1].y = ty1;
        vertices_cache[w->v2].x = tx2;
        vertices_cache[w->v2].y = ty2;


        u32 v1_dist = getApproximatedDistance(
            fix32ToInt(tx1),
            fix32ToInt(ty1));
        u32 v2_dist = getApproximatedDistance(
            fix32ToInt(tx2),
            fix32ToInt(ty2));


        u32 avg_dist = (v1_dist + v2_dist)/2;
        total_dist += avg_dist;

    }
    u32 real_avg_dist = total_dist / sect->num_walls;
    u8 sect_floor_col = calculate_color(sect->floor_color, real_avg_dist, sect->light_level);
    u8 sect_ceil_col = calculate_color(sect->ceil_color, real_avg_dist, sect->light_level);
    u8 dither_floor = needs_dither(real_avg_dist);

    for(u16 i = 0; i < sect->num_walls; i++) {
        wall* w = sect->walls[i];
        
        Vect2D_f32 v1 = vertices[w->v1];
        Vect2D_f32 v2 = vertices[w->v2];
        fix32 vx1 = v1.x;
        fix32 vy1 = v1.y;
        fix32 vx2 = v2.x;
        fix32 vy2 = v2.y;
        u32 v1_dist = getApproximatedDistance(
            abs(fix32ToInt(vx1 - ply.where.x)),
            abs(fix32ToInt(vy1 - ply.where.y)));
        u32 v2_dist = getApproximatedDistance(
            abs(fix32ToInt(vx2 - ply.where.x)),
            abs(fix32ToInt(vy2 - ply.where.x)));

        u32 avg_dist = (v1_dist + v2_dist)/2;

        fix32 tx1 = vertices_cache[w->v1].x; //vx1 - ply.where.x;
        fix32 ty1 = vertices_cache[w->v1].y; //vy1 - ply.where.y;
        fix32 tx2 = vertices_cache[w->v2].x; //vx2 - ply.where.x;
        fix32 ty2 = vertices_cache[w->v2].y; //vy2 - ply.where.y;
        
        fix32 pcos = ply.anglecos;
        fix32 psin = ply.anglesin;

        fix32 rx1 = SAFEMUL32(tx1, psin) - SAFEMUL32(ty1, pcos);
        fix32 rz1 = SAFEMUL32(tx1, pcos) + SAFEMUL32(ty1, psin);
        fix32 rx2 = SAFEMUL32(tx2, psin) - SAFEMUL32(ty2, pcos);
        fix32 rz2 = SAFEMUL32(tx2, pcos) + SAFEMUL32(ty2, psin);

        //char buf[32];
        
        
        if(rz1 <= 0 && rz2 <= 0) { 
            walls_frustum_culled_after_transform++; 
            continue;
        }
        

        // if it's partially behind the player, clip it against player's view frustum
        if(rz1 <= 0 || rz2 <= 0) {   
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
        

        // do perspective transformation

        fix32 xscale1 = fix32Div(SAFEMUL32(FIX32(W), HFOV), max(FIX32(0.1), rz1)); // 0.05  // SAFEMUL32 ? // div32?
        fix32 yscale1 = fix32Div(SAFEMUL32(FIX32(H), VFOV), max(FIX32(0.1), rz1)); // 0.05
        fix32 xscale2 = fix32Div(SAFEMUL32(FIX32(W), HFOV), max(FIX32(0.1), rz2)); // 0.05
        fix32 yscale2 = fix32Div(SAFEMUL32(FIX32(H), VFOV), max(FIX32(0.1), rz2)); // 0.05
        
        s16 x1 = W/2 - fix32ToInt(SAFEMUL32(rx1, xscale1));
        s16 x2 = W/2 - fix32ToInt(SAFEMUL32(rx2, xscale2));
        
        if(x1 >= x2 || x2 < 0 || x1 > W-1) {
            //projected_backfacing_walls++;
            //BMP_drawText("off-screen        ", 0, 1); 
            continue; 
        } else {
            //BMP_drawText("on-screen     ", 0, 1);
        }

        // x1 += fix32ToInt(ply.sway_offset);
        // x2 += fix32ToInt(ply.sway_offset);

        // acquire the floor and ceiling heights, relative to where the player's view is
        fix32 yceil = sect_ceil - (ply.where.z + ply.bob_offset);
        fix32 yfloor = sect_floor - (ply.where.z + ply.bob_offset);


        // project ceiling and floor heights into screen coordinates
        #define Yaw(y,z) (y+fix16Mul(z,ply.yaw))
        
        //s16 y1a = H/2 - (fix32ToInt(SAFEMUL32(yceil, yscale1)));
        //s16 y1b = H/2 - (fix32ToInt(SAFEMUL32(yfloor, yscale1)));

        //s16 y2a = H/2 - (fix32ToInt(SAFEMUL32(yceil, yscale2)));
        //s16 y2b = H/2 - (fix32ToInt(SAFEMUL32(yfloor, yscale2)));
        
        fix32 fy1a = (FIX32(H/2) - (SAFEMUL32(yceil, yscale1)))<<6; // 16.6
        fix32 fy1b = (FIX32(H/2) - (SAFEMUL32(yfloor, yscale1)))<<6; 

        fix32 fy2a = (FIX32(H/2) - (SAFEMUL32(yceil, yscale2)))<<6;
        fix32 fy2b = (FIX32(H/2) - (SAFEMUL32(yfloor, yscale2)))<<6;
        


        if(fy1a > fy1b) { upside_down_walls++; continue; }
        if(fy2a > fy2b) { upside_down_walls++; continue; }


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
            transformed_walls++;
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
            transformed_portals++;
            insert_span(x1, x2, fy1a, fny1a, fy2a, fny2a, fy1b, fny1b, fy2b, fny2b, sect_ceil_col, high_col, wall_col, low_col, sect_floor_col, 0, dither_wall, dither_floor);
        }
    }
    return 0;
}
