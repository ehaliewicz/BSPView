#include <genesis.h>
#include "bsp.h"

#include "player.h"
#include "common.h"
#include "sector.h"
#include "palette.h"
#include "span_buf.h"
#include "draw.h"

#include "map.h"

#define MID_DIST 10
#define DARK_DIST 15

fix32 div32(fix32 x, fix32 y) {
    return fix32Div(x, y);
}


typedef enum {
    LEFT_OF_PLANE,
    RIGHT_OF_PLANE,
    ON_PLANE
} plane_side;

plane_side point_side(Vect3D_f32* pos, bsp_node* nd) {
    if(nd->inner.dvec.x == 0) {
        // vertical splitting plane
        if(nd->inner.dvec.y < 0) {
            // plane goes up
            return (pos->x < nd->inner.pos.x) ? LEFT_OF_PLANE : RIGHT_OF_PLANE;
            
        } else {
            // plane goes down
            return (pos->x < nd->inner.pos.x) ? RIGHT_OF_PLANE : LEFT_OF_PLANE;
        }
    }


    if(nd->inner.dvec.y == 0) {
        // horizontal splitting plane
        if(nd->inner.dvec. x < 0) {
            // plane goes left
            return (pos->y < nd->inner.pos.y) ? RIGHT_OF_PLANE : LEFT_OF_PLANE;
        } else {
            return (pos->y < nd->inner.pos.y) ? LEFT_OF_PLANE : RIGHT_OF_PLANE;
        }
    }
    fix32 dx = pos->x - nd->inner.pos.x;
    fix32 dy = pos->y - nd->inner.pos.y;


    fix32 left = (nd->inner.dvec.x >> FIX32_FRAC_BITS) * dx; // 22 * 22.10 = 22.10 bits
    fix32 right = (nd->inner.dvec.y >> FIX32_FRAC_BITS) * dy;
    
  
    if(right > left) {
        return RIGHT_OF_PLANE;
    } else if (right < left) {
        return LEFT_OF_PLANE;
    } else {
        // 
        return LEFT_OF_PLANE; 

        while(1) {
            VDP_drawTextBG(PLAN_A, "exactly on plane wtf", 10, 8);
        }
    }

}

#define safeFix32ToFix16(value)         (((value) >> (FIX32_FRAC_BITS-FIX16_FRAC_BITS)))

#define safeFix16ToFix32(value)         (((value) << (FIX32_FRAC_BITS - FIX16_FRAC_BITS)))


// 24 bytes
typedef struct {
    fix32 tx1; 
    fix32 ty1;
    fix32 tx2;
    fix32 ty2;
    u32 dist;
} cache_entry;

//static cache_entry vertex_cache[64] = {0}; // 768 bytes

int draw_sector(sector* sect) {

    int dither_floor = 0;//1;
    int dark_floor = 0;//1;
    /*
    for(u16 i = 0; i < sect->num_walls; i++) {
        wall* w = sect->walls[i];
        
        fix32 vx1 = w->v1.x;
        fix32 vy1 = w->v1.y;
        fix32 vx2 = w->v2.x;
        fix32 vy2 = w->v2.y;
        fix32 tx1 = vx1 - ply.where.x;
        fix32 ty1 = vy1 - ply.where.y;
        fix32 tx2 = vx2 - ply.where.x;
        fix32 ty2 = vy2 - ply.where.y;
        //vertex_cache[i].tx1 = tx1;
        //vertex_cache[i].ty1 = ty1;
        //vertex_cache[i].tx2 = tx2;
        //vertex_cache[i].ty2 = ty2;

        u32 v1_dist = getApproximatedDistance(
            fix32ToInt(tx1),
            fix32ToInt(ty1));
        u32 v2_dist = getApproximatedDistance(
            fix32ToInt(tx2),
            fix32ToInt(ty2));

        //vertex_cache[i].v1_dist = v1_dist;
        //vertex_cache[i].v2_dist = v2_dist;

        u32 avg_dist = (v1_dist + v2_dist)/2;
        //vertex_cache[i].dist = avg_dist;

        if(avg_dist < MID_DIST) {
            dither_floor = 0;
            dark_floor = 0;
            break;
        } 
        if(avg_dist < DARK_DIST) {
            dark_floor = 0;
        }
    }
    */

    fix32 sect_ceil = sect->ceil_height;
    fix32 sect_floor = sect->floor_height;
    u8 sect_ceil_col = sect->ceil_color;
    u8 sect_floor_col = sect->floor_color;
    if(!dither_floor) {
        sect_floor_col = (sect_floor_col << 4) | sect_floor_col;
        sect_ceil_col = (sect_ceil_col << 4) | sect_ceil_col;
    } else if (dark_floor) {
        u8 dark_floor = dark_col_lut[sect_floor_col];
        u8 dark_ceil = dark_col_lut[sect_ceil_col];
        sect_floor_col = (dark_floor << 4) | dark_floor;
        sect_ceil_col  = (dark_ceil << 4)  | dark_ceil;
    } else {
        sect_floor_col = ((dark_col_lut[sect_floor_col]) << 4) | sect_floor_col;
        sect_ceil_col  = ((dark_col_lut[sect_ceil_col]) << 4)  | sect_ceil_col;
    }


    for(u16 i = 0; i < sect->num_walls; i++) {
        wall* w = sect->walls[i];
        
        Vect2D_f32 v1 = vertices[w->v1];
        Vect2D_f32 v2 = vertices[w->v2];
        fix32 vx1 = v1.x;
        fix32 vy1 = v1.y;
        fix32 vx2 = v2.x;
        fix32 vy2 = v2.y;
        u32 v1_dist = getApproximatedDistance(
            abs(fix32ToInt(ply.where.x - vx1)),
            abs(fix32ToInt(ply.where.y - vy1)));
        u32 v2_dist = getApproximatedDistance(
            abs(fix32ToInt(ply.where.x - vx2)),
            abs(fix32ToInt(ply.where.x - vy2)));

        //u32 v1_dist = vertex_cache[i].v1_dist;
        //u32 v2_dist = vertex_cache[i].v2_dist;
        //u32 avg_dist = vertex_cache[i].dist; 
        u32 avg_dist = (v1_dist + v2_dist)/2;

        fix32 tx1 = vx1 - ply.where.x;
        fix32 ty1 = vy1 - ply.where.y;
        fix32 tx2 = vx2 - ply.where.x;
        fix32 ty2 = vy2 - ply.where.y;
        //fix32 tx1 = vertex_cache[i].tx1;
        //fix32 ty1 = vertex_cache[i].ty1;
        //fix32 tx2 = vertex_cache[i].tx2;
        //fix32 ty2 = vertex_cache[i].ty2;
        
        fix32 pcos = ply.anglecos;
        fix32 psin = ply.anglesin;

        fix32 rx1 = SAFEMUL32(tx1, psin) - SAFEMUL32(ty1, pcos);
        fix32 rz1 = SAFEMUL32(tx1, pcos) + SAFEMUL32(ty1, psin);
        fix32 rx2 = SAFEMUL32(tx2, psin) - SAFEMUL32(ty2, pcos);
        fix32 rz2 = SAFEMUL32(tx2, pcos) + SAFEMUL32(ty2, psin);

        //char buf[32];
        
        
        if(rz1 <= 0 && rz2 <= 0) { continue; }
        

        // if it's partially behind the player, clip it against player's view frustum
        if(rz1 <= 0 || rz2 <= 0) {   

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
        //fix32 xscale1 = fix32Div(HFOV, max(FIX32(0.05), rz1)); // 0.05
        //fix32 yscale1 = fix32Div(VFOV, max(FIX32(0.05), rz1)); // 0.05
        //fix32 xscale2 = fix32Div(HFOV, max(FIX32(0.05), rz2)); // 0.05
        //fix32 yscale2 = fix32Div(VFOV, max(FIX32(0.05), rz2)); // 0.05

        fix32 xscale1 = div32(SAFEMUL32(FIX32(W), HFOV), max(FIX32(0.1), rz1)); // 0.05
        fix32 yscale1 = div32(SAFEMUL32(FIX32(H), VFOV), max(FIX32(0.1), rz1)); // 0.05
        fix32 xscale2 = div32(SAFEMUL32(FIX32(W), HFOV), max(FIX32(0.1), rz2)); // 0.05
        fix32 yscale2 = div32(SAFEMUL32(FIX32(H), VFOV), max(FIX32(0.1), rz2)); // 0.05
        
        s16 x1 = W/2 - (fix32ToInt(SAFEMUL32(rx1, xscale1)));
        s16 x2 = W/2 - (fix32ToInt(SAFEMUL32(rx2, xscale2)));
        
        // only render if it's visible
        if(x1 >= x2 || x2 < 0 || x1 > W-1) {
            //BMP_drawText("off-screen        ", 0, 1); 
            continue; 
        } else {
            //BMP_drawText("on-screen     ", 0, 1);
        }

        // acquire the floor and ceiling heights, relative to where the player's view is
        fix32 yceil = sect_ceil - ply.where.z;
        fix32 yfloor = sect_floor - ply.where.z;


        // project ceiling and floor heights into screen coordinates
        #define Yaw(y,z) (y+fix16Mul(z,ply.yaw))
        
        s16 y1a = H/2 - (fix32ToInt(SAFEMUL32(yceil, yscale1)));
        s16 y1b = H/2 - (fix32ToInt(SAFEMUL32(yfloor, yscale1)));

        s16 y2a = H/2 - (fix32ToInt(SAFEMUL32(yceil, yscale2)));  // yceil + rz2
        s16 y2b = H/2 - (fix32ToInt(SAFEMUL32(yfloor, yscale2))); // yfloor + rz2
        


        if(y1a > y1b) { continue; }
        if(y2a > y2b) { continue; }


        u8 wall_col = w->middle_color;
        u8 low_col = w->lower_color;
        u8 high_col = w->upper_color;
        
        int dither_wall = 1;

        if(avg_dist < MID_DIST) {
            wall_col = (wall_col << 4 | wall_col);
            low_col = (low_col << 4 | low_col);
            high_col = (high_col << 4 | high_col);
            dither_wall = 0;
        } else if (avg_dist < DARK_DIST) {
            wall_col = ((dark_col_lut[wall_col]) << 4) | wall_col;
            low_col  = ((dark_col_lut[low_col]) << 4)  | low_col;
            high_col = ((dark_col_lut[high_col]) << 4) | high_col;
        } else {
            u8 dark_wall = dark_col_lut[wall_col];
            u8 dark_low = dark_col_lut[low_col];
            u8 dark_high = dark_col_lut[high_col];
            wall_col = (dark_wall << 4) | dark_wall;
            low_col  = (dark_low << 4)  | dark_low;
            high_col = (dark_high << 4) | dark_high;

        }
        


        if(w->back_sector == NULL) { //w->middle_color != TRANSPARENT_IDX) { 
            
            //Vect2D_s16 wall_poly[4] = {
            //    {x2, y2a}, {x2, y2b},
            //    {x1, y1b}, {x1, y1a}
            //};
            //BMP_drawPolygon(wall_poly, 4, wall_col);
            int full = insert_span(x1, x2, y1a, y1a, y2a, y2a, y1b, y1b, y2b, y2b, sect_ceil_col, high_col, wall_col, low_col, sect_floor_col, 1, dither_wall, dither_floor);
            if(full) { return full; }
        } else {

            
            fix32 nsceil = w->back_sector->ceil_height;
            fix32 nsfloor = w->back_sector->floor_height;

            fix32 nyceil = nsceil - ply.where.z;
            int ny1a = H/2 - (fix32ToInt(SAFEMUL32(nyceil, yscale1)));
            int ny2a = H/2 - (fix32ToInt(SAFEMUL32(nyceil, yscale2)));
            fix32 nyfloor = nsfloor - ply.where.z;
            int ny1b = H/2 - (fix32ToInt(SAFEMUL32(nyfloor, yscale1)));
            int ny2b = H/2 - (fix32ToInt(SAFEMUL32(nyfloor, yscale2)));
            insert_span(x1, x2, y1a, ny1a, y2a, ny2a, y1b, ny1b, y2b, ny2b, sect_ceil_col, high_col, wall_col, low_col, sect_floor_col, 0, dither_wall, dither_floor);
            
            
        }
    }
}


sector* find_player_sector(bsp_node* node) {

    switch(node->type) {
        case LEAF:
            return node->sect;
        case NODE: do {
                plane_side side = point_side(&(ply.where), node);
                if(side == RIGHT_OF_PLANE) {
                    return find_player_sector(node->inner.right);
                } else {
                    return find_player_sector(node->inner.left);
                }
        } while(0);
            break;
        
        default:
            // corrupted
            while(1) {
                BMP_drawText("Corrupted BSP tree!", 1, 2);
            }
            break;
    }
}

void traverse_all_sectors(bsp_node* node, sector_callback cb) {
    switch(node->type) {
        case LEAF:
            cb(node->sect);
            break;
        case NODE:
            traverse_all_sectors(node->inner.left, cb);
            traverse_all_sectors(node->inner.right, cb);
            break;

    }
}


int draw_bsp_node(bsp_node* node) {

    switch(node->type) {
        case LEAF:
            return draw_sector(node->sect);
            break;
        case NODE: do {
                plane_side side = point_side(&(ply.where), node);
                if(side == RIGHT_OF_PLANE) {
                    return (draw_bsp_node(node->inner.right) ||
                            draw_bsp_node(node->inner.left));
                } else {
                    return (draw_bsp_node(node->inner.left) ||
                            draw_bsp_node(node->inner.right));
                }
        } while(0);
        break;
    }
}
