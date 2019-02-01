#include <genesis.h>
#include "bsp.h"

#include "player.h"
#include "common.h"
#include "sector.h"
#include "palette.h"
#include "span_buf.h"
#include "draw.h"

#include "map.h"


fix32 div32(fix32 x, fix32 y) {
    return fix32Div(x, y);
    //return ((x<<FIX32_FRAC_BITS/2) / (y<<FIX32_FRAC_BITS/2));
}

#define safeFix32ToFix16(value)         (((value) >> (FIX32_FRAC_BITS-FIX16_FRAC_BITS)))

#define safeFix16ToFix32(value)         (((value) << (FIX32_FRAC_BITS - FIX16_FRAC_BITS)))


void draw_sector(sector* sect) {

    fix32 sect_ceil = sect->ceil_height;
    fix32 sect_floor = sect->floor_height;
    u8 sect_ceil_col = sect->ceil_color;
    u8 sect_floor_col = sect->floor_color;

    for(u16 i = 0; i < sect->num_walls; i++) {
        wall* w = sect->walls[i];
        
        //if(w != &wall5) { continue; }
        fix32 vx1 = w->v1.x;
        fix32 vy1 = w->v1.y;
        fix32 vx2 = w->v2.x;
        fix32 vy2 = w->v2.y;
        u32 v1_dist = getApproximatedDistance(
            abs(fix32ToInt(ply.where.x - w->v1.x)),
            abs(fix32ToInt(ply.where.y - w->v1.y)));
        u32 v2_dist = getApproximatedDistance(
            abs(fix32ToInt(ply.where.x - w->v2.x)),
            abs(fix32ToInt(ply.where.x - w->v2.y)));

        u32 avg_dist = (v1_dist + v2_dist)/2;

        fix32 tx1 = vx1 - ply.where.x;
        fix32 ty1 = vy1 - ply.where.y;
        fix32 tx2 = vx2 - ply.where.x;
        fix32 ty2 = vy2 - ply.where.y;

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

            fix32 nearz = FIX32(0.1); //0.01); // 0.05);
            fix32 farz = FIX32(5);
            fix32 nearside = FIX32(0.01); //0.004);//0.01);
            fix32 farside = FIX32(20);

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
        
        int x1 = W/2 - (fix32ToRoundedInt(SAFEMUL32(rx1, xscale1)));
        int x2 = W/2 - (fix32ToRoundedInt(SAFEMUL32(rx2, xscale2)));
        

        //sprintf(buf, "rz1 ");
        //fix32ToStr(rz1, buf+4, 3);
        //BMP_drawText(buf, 0, 2);
        //sprintf(buf, "rz2 ");
        //fix32ToStr(rz2, buf+4, 3);
        //BMP_drawText(buf, 0, 3);
        
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
        
        fix32 yfys2 = yfloor*(yscale2>>FIX32_FRAC_BITS);
        int y1a = H/2 - (fix32ToRoundedInt(SAFEMUL32(yceil, yscale1)));
        int y1b = H/2 - (fix32ToRoundedInt(SAFEMUL32(yfloor, yscale1)));

        int y2a = H/2 - (fix32ToRoundedInt(SAFEMUL32(yceil, yscale2)));  // yceil + rz2
        int y2b = H/2 - (fix32ToRoundedInt(SAFEMUL32(yfloor, yscale2))); // yfloor + rz2
        

        int dx = x2-x1;


        if(y1a > y1b) { continue; }
        if(y2a > y2b) { continue; }


        u8 wall_col = w->middle_color;
        u8 low_col = w->lower_color;
        u8 high_col = w->upper_color;
        sect_ceil_col = (sect_ceil_col << 4 | sect_ceil_col);
        sect_floor_col = (sect_floor_col << 4 | sect_floor_col);

        if(avg_dist < 20) {
            wall_col = (wall_col << 4 | wall_col);
            low_col = (low_col << 4 | low_col);
            high_col = (high_col << 4 | high_col);
        }
        
        
        Vect2D_s16 top[4] = {
            {x2, 0}, {x2, y2a},
            {x1, y1a}, {x1, 0}
        };
        BMP_drawPolygon(top, 4, sect_ceil_col);

        Vect2D_s16 bot[4] = {
            {x2, y2b}, {x2, H-1},
            {x1, H-1}, {x1, y1b}
        };
        BMP_drawPolygon(bot, 4, sect_floor_col);
        
        

        if(w->back_sector == NULL) { //w->middle_color != TRANSPARENT_IDX) { 
            
            Vect2D_s16 poly[4] = {
                {x2, y2a}, {x2, y2b},
                {x1, y1b}, {x1, y1a}
            };
            BMP_drawPolygon(poly, 4, wall_col);
            
           //insert_span(x1, x2, y1a, y2a, y1b, y2b, sect_ceil_col, wall_col, sect_floor_col);
        } else {
            //for(int x = max(0, x1); x < min(W-1, x2); x++) {
            //    ytop[x] = min(y1a, y2a);
            //    ybottom[x] = max(y1b, y2b);
            //}
            
            fix32 nsceil = w->back_sector->ceil_height;
            if(nsceil < sect_ceil) {
                fix32 nyceil = nsceil - ply.where.z;
                int ny1a = H/2 - (fix32ToRoundedInt(SAFEMUL32(nyceil, yscale1)));
                int ny2a = H/2 - (fix32ToRoundedInt(SAFEMUL32(nyceil, yscale2)));
                
                Vect2D_s16 down_ceil[4] = {
                    {x2, y2a}, {x2, ny2a},
                    {x1+1, ny1a}, {x1+1, y1a}
                };
                BMP_drawPolygon(down_ceil, 4, high_col);
            }
            fix32 nsfloor = w->back_sector->floor_height;
            if(nsfloor > sect_floor) {
	      
                fix32 nyfloor = nsfloor - ply.where.z;
                int ny1b = H/2 - (fix32ToRoundedInt(SAFEMUL32(nyfloor, yscale1)));
                int ny2b = H/2 - (fix32ToRoundedInt(SAFEMUL32(nyfloor, yscale2)));
                Vect2D_s16 up_floor[4] = {
                    {x2, ny2b}, {x2, y2b},
                    {x1+1, y1b}, {x1+1, ny1b}
                };
                BMP_drawPolygon(up_floor, 4, low_col);
            }
            
        }


    }
    
}

sector* find_player_sector(bsp_node* node) {
    int in_front = 0;
    switch(node->type) {
        case LEAF:
            return node->sect;
        case NODE:
            switch(node->inner.axis) {
                case HORIZONTAL:
                    in_front = (ply.where.x < node->inner.split_pos);
                    break;
                case VERTICAL:
                    in_front = (ply.where.y < node->inner.split_pos);
            }
            if(in_front) {
                return find_player_sector(node->inner.front);
            } else {
                return find_player_sector(node->inner.behind);
            }
        default:
            // corrupted
            while(1) {
                BMP_drawText("Corrupted BSP tree!", 1, 2);
            }
            break;
    }
}


void draw_bsp_node(bsp_node* node) {
    int in_front = 0;

    switch(node->type) {
        case LEAF:
            draw_sector(node->sect);
            break;
        case NODE:

            switch(node->inner.axis) {
                case HORIZONTAL:

                // lower x is in front
                    in_front = (ply.where.x < node->inner.split_pos);
                    break;
                case VERTICAL:
                // lower y is in front
                    in_front = (ply.where.y < node->inner.split_pos);
                    break;
            }
            if(!in_front) {
                draw_bsp_node(node->inner.front);
                draw_bsp_node(node->inner.behind);
            } else {
                draw_bsp_node(node->inner.behind);
                draw_bsp_node(node->inner.front);
            }
            break;

    }
}
