#include <genesis.h>
#include "bsp.h"

#include "player.h"
#include "common.h"
#include "sector.h"
#include "palette.h"
#include "span_buf.h"
#include "draw.h"

void draw_sector(sector* sect) {

    fix32 sect_ceil = sect->ceil_height;
    fix32 sect_floor = sect->floor_height;
    u8 sect_ceil_col = sect->ceil_color;
    u8 sect_floor_col = sect->floor_color;

    for(u16 i = 0; i < sect->num_walls; i++) {
        wall* w = sect->walls[i];

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

        fix32 rx1 = fix32Mul(tx1, psin) - fix32Mul(ty1, pcos);
        fix32 rz1 = fix32Mul(tx1, pcos) + fix32Mul(ty1, psin);
        fix32 rx2 = fix32Mul(tx2, psin) - fix32Mul(ty2, pcos);
        fix32 rz2 = fix32Mul(tx2, pcos) + fix32Mul(ty2, psin);
			
        if(rz1 <= 0 && rz2 <= 0) { continue; }

        // if it's partially behind the player, clip it against player's view frustum
        if(rz1 <= 0 || rz2 <= 0) {//rz1 <= FIX32(0.5) || rz2 <= FIX32(0.5)) { // rz1 <= 0 || rz2 <= 0
            continue;
            fix32 nearz = FIX32(0.1); //0.01); // 0.05);
            fix32 farz = FIX32(5);
            fix32 nearside = FIX32(0.01); //0.004);//0.01);
            fix32 farside = FIX32(20);

            // find an intersection between the wall and the approximate edges of the player's view
            fix32 rx1_32 = rx1;
            fix32 rz1_32 = rz1;
            fix32 rx2_32 = rx2;
            fix32 rz2_32 = rz2;


            Vect2D_f32 i1 = Intersect32(rx1_32, rz1_32, rx2_32, rz2_32, 
                        -nearside, nearz, -farside, farz);
            Vect2D_f32 i2 = Intersect32(rx1_32, rz1_32, rx2_32, rz2_32,  
                        nearside, nearz, farside, farz);

            if(rz1_32 < nearz) { 
                if(i1.y > 0) {
                //rx1 = fix32ToFix16(i1.x);
                //rz1 = fix32ToFix16(i1.y);
                rx1 = i1.x;
                rz1 = i1.y;
                } else {
                //rx1 = fix32ToFix16(i2.x);
                //rz1 = fix32ToFix16(i2.y);
                rx1 = i2.x;
                rz1 = i2.y;
                }
            }
            if(rz2_32 < nearz) {
                if(i1.y > 0) {
                //rx2 = fix32ToFix16(i1.x);
                //rz2 = fix32ToFix16(i1.y);
                rx2 = i1.x;
                rz2 = i1.y;
                } else {
                //rx2 = fix32ToFix16(i2.x);
                //rz2 = fix32ToFix16(i2.y);
                rx2 = i2.x;
                rz2 = i2.y;
                }
            }
        }

        // do perspective transformation
        //fix32 xscale1 = fix32Div(HFOV, max(FIX32(0.05), rz1)); // 0.05
        //fix32 yscale1 = fix32Div(VFOV, max(FIX32(0.05), rz1)); // 0.05
        //fix32 xscale2 = fix32Div(HFOV, max(FIX32(0.05), rz2)); // 0.05
        //fix32 yscale2 = fix32Div(VFOV, max(FIX32(0.05), rz2)); // 0.05

        fix32 xscale1 = fix32Div(fix32Mul(FIX32(W), HFOV), max(FIX32(0.01), rz1)); // 0.05
        fix32 yscale1 = fix32Div(fix32Mul(FIX32(H), VFOV), max(FIX32(0.01), rz1)); // 0.05
        fix32 xscale2 = fix32Div(fix32Mul(FIX32(W), HFOV), max(FIX32(0.01), rz2)); // 0.05
        fix32 yscale2 = fix32Div(fix32Mul(FIX32(H), VFOV), max(FIX32(0.01), rz2)); // 0.05
        
        int x1 = W/2 - (fix32ToInt(fix32Mul(rx1, xscale1)));
        int x2 = W/2 - (fix32ToInt(fix32Mul(rx2, xscale2)));

        // only render if it's visible
        if(x1 >= x2 || x2 < 0 || x1 > W-1) { continue; }

        // acquire the floor and ceiling heights, relative to where the player's view is
        fix32 yceil = sect_ceil - ply.where.z;
        fix32 yfloor = sect_floor - ply.where.z;

        // project ceiling and floor heights into screen coordinates
        #define Yaw(y,z) (y+fix16Mul(z,ply.yaw))
        int y1a = H/2 - (fix32ToInt(fix32Mul(yceil, yscale1)));
        int y1b = H/2 - (fix32ToInt(fix32Mul(yfloor,  yscale1)));


        int y2a = H/2 - (fix32ToInt(fix32Mul(yceil, yscale2)));  // yceil + rz2
        int y2b = H/2 - (fix32ToInt(fix32Mul(yfloor, yscale2))); // yfloor + rz2
        

        int dx = x2-x1;


        if(y1a > y1b) { continue; }
        if(y2a > y2b) { continue; }


        u8 wall_col = w->middle_color;
        u8 low_col = w->lower_color;
        u8 high_col = w->upper_color;

        if(avg_dist < 20) {
            wall_col = (wall_col << 4 | wall_col);
            sect_ceil_col = (sect_ceil_col << 4 | sect_ceil_col);
            sect_floor_col = (sect_floor_col << 4 | sect_floor_col);
            low_col = (low_col << 4 | low_col);
            high_col = (high_col << 4 | high_col);
        }
        
        /*
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
        */
        

        if(w->back_sector == NULL) { //w->middle_color != TRANSPARENT_IDX) { 
            /*
            Vect2D_s16 poly[4] = {
                {x2, y2a}, {x2, y2b},
                {x1, y1b}, {x1, y1a}
            };
            BMP_drawPolygon(poly, 4, col);
            */
           insert_span(x1, x2, y1a, y2a, y1b, y2b, sect_ceil_col, wall_col, sect_floor_col);
        } else {
            for(int x = max(0, x1); x < min(W-1, x2); x++) {
                ytop[x] = min(y1a, y2a);
                ybottom[x] = max(y1b, y2b);
            }
            /*
            fix32 nsceil = w->back_sector->ceil_height;
            if(nsceil < sect_ceil) {
                fix32 nyceil = nsceil - ply.where.z;
                int ny1a = H/2 - (fix32ToInt(fix32Mul(nyceil, yscale1)));
                int ny2a = H/2 - (fix32ToInt(fix32Mul(nyceil, yscale2)));
                
                Vect2D_s16 down_ceil[4] = {
                    {x2, y2a}, {x2, ny2a},
                    {x1+1, ny1a}, {x1+1, y1a}
                };
                BMP_drawPolygon(down_ceil, 4, high_col);
            }
            fix32 nsfloor = w->back_sector->floor_height;
            if(nsfloor > sect_floor) {
	      
                fix32 nyfloor = nsfloor - ply.where.z;
                int ny1b = H/2 - (fix32ToInt(fix32Mul(nyfloor, yscale1)));
                int ny2b = H/2 - (fix32ToInt(fix32Mul(nyfloor, yscale2)));
                Vect2D_s16 up_floor[4] = {
                    {x2, ny2b}, {x2, y2b},
                    {x1+1, y1b}, {x1+1, ny1b}
                };
                BMP_drawPolygon(up_floor, 4, low_col);
            }
            */
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
            if(in_front) {
                draw_bsp_node(node->inner.front);
                draw_bsp_node(node->inner.behind);
            } else {
                draw_bsp_node(node->inner.behind);
                draw_bsp_node(node->inner.front);
            }
            break;

    }
}
