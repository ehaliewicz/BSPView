#include "sector.h"
#include "map.h"
#include "player.h"
#include "palette.h"
#include "draw.h"


void traverse_all_sectors(sector_callback cb) {
    for(int i = 0; i < num_sectors; i++) {
        cb(&(sectors[i]));
    }
}

u32* drawn_sectors;
void init_drawn_sectors() {
//    drawn_sectors = MEM_alloc(num_sectors * sizeof(u32));
}

void clear_drawn_sectors() {

    for(int i = 0; i < num_sectors; i++) {
        //drawn_sectors[i] = 0;
        sectors[i].transformed = 0;
    }

    //memsetU32(drawn_sectors, 0, num_sectors);
}


int queue_ptr = 0;
int queue_process_ptr = 0;
int neighbor_draw_queue[32];

void enqueue_sector(int snum) {
    if(queue_ptr < 32) { // && drawn_sectors[snum] == 0) {
        neighbor_draw_queue[queue_ptr++] = snum;
    }
}

int queue_has_more_sectors() {
    return queue_ptr > queue_process_ptr;
}

int get_next_sector() {
    return neighbor_draw_queue[queue_process_ptr++];
}

void transform_sector(sector* sect) {
    fix16 pcos = ply.anglecos;
    fix16 psin = ply.anglesin;
    for(int i = 0; i < sect->num_walls+1; i++) {
        Vect2D_f16 v1 = sect->vertices[i];

        fix16 vx1 = v1.x;
        fix16 vy1 = v1.y;
        
        fix16 tx1 = vx1 - ply.where.x;
        fix16 ty1 = vy1 - ply.where.y;
        

        fix16 rx1 = fix16Mul(tx1, psin) - fix16Mul(ty1, pcos);
        fix16 rz1 = fix16Mul(tx1, pcos) + fix16Mul(ty1, psin);
        sect->transformed_vertices[i].x = rx1;
        sect->transformed_vertices[i].y = rz1;
    }
    sect->transformed = 1;
}


int draw_sector(int sectnum, s16 left_frustum, s16 right_frustum) {
  // sector* sect = &(sectors[sectnum]);

  //queue_ptr = 0;
  //queue_process_ptr = 0;

  //enqueue_sector(start_sectnum);

  //while(queue_has_more_sectors()) {
      //int sectnum = get_next_sector();
      //if(drawn_sectors[sectnum]) { continue; }
    sector* sect = &(sectors[sectnum]);

    if(!sect->transformed) {
        transform_sector(sect);
    }
    u8 dither_floor = 0;
    u8 dark_floor = 0;


    fix16 sect_ceil = sect->ceil_height;
    fix16 sect_floor = sect->floor_height;
    u8 sect_ceil_col = sect->ceil_color;
    u8 sect_floor_col = sect->floor_color;
    
    if(dither_floor) {
        sect_floor_col = ((dark_col_lut[sect_floor_col]) << 4) | sect_floor_col;
        sect_ceil_col  = ((dark_col_lut[sect_ceil_col]) << 4)  | sect_ceil_col;
    } else if (dark_floor) {
        u8 dark_floor = dark_col_lut[sect_floor_col];
        u8 dark_ceil = dark_col_lut[sect_ceil_col];
        sect_floor_col = (dark_floor << 4) | dark_floor;
        sect_ceil_col  = (dark_ceil << 4)  | dark_ceil;
    } else {
        sect_floor_col = (sect_floor_col << 4) | sect_floor_col;
        sect_ceil_col = (sect_ceil_col << 4) | sect_ceil_col;
    }

    for(int i = 0; i < sect->num_walls; i++) {
        wall* w = &(sect->walls[i]);
        fix16 rx1 = sect->transformed_vertices[i].x;
        fix16 rz1 = sect->transformed_vertices[i].y;
        fix16 rx2 = sect->transformed_vertices[i+1].x;
        fix16 rz2 = sect->transformed_vertices[i+1].y;

        if(rz1 <= 0 && rz2 <= 0) { continue; }
        
        // if it's partially behind the player, clip it against player's view frustum
        if(rz1 <= 0 || rz2 <= 0) {   

            fix16 nearz = FIX16(0.1);

            fix16 nearz_16 = FIX16(1); // .5
            fix16 farz_16 = FIX16(5);
            fix16 nearside_16 = FIX16(0.2);
            fix16 farside_16 = FIX16(20);

            // find an intersection between the wall and the approximate edges of the player's view
            Vect2D_f16 i1 = Intersect16(rx1, rz1, rx2, rz2,
                                        -nearside_16, nearz_16, -farside_16, farz_16);
            Vect2D_f16 i2 = Intersect16(rx1, rz1, rx2, rz2,
                                        nearside_16, nearz_16, farside_16, farz_16);

            if(rz1 < nearz) { 
                if(i1.y > 0) {
                    rx1 = i1.x;
                    rz1 = i1.y;
                } else {
                    rx1 = i2.x;
                    rz1 = i2.y;
                }
            }
            if(rz2 < nearz) {
                if(i1.y > 0) {
                    rx2 = i1.x;
                    rz2 = i1.y;
                } else {
                    rx2 = i2.x;
                    rz2 = i2.y;
                }
            }
        }

        // do perspective transformation
        fix16 xscale1 = fix16Div(fix16Mul(FIX16(W),HFOV), max(FIX16(0.1), rz1)); // 0.05
        fix16 yscale1 = fix16Div(fix16Mul(FIX16(H),VFOV), max(FIX16(0.1), rz1)); // 0.05
        fix16 xscale2 = fix16Div(fix16Mul(FIX16(W),HFOV), max(FIX16(0.1), rz2)); // 0.05
        fix16 yscale2 = fix16Div(fix16Mul(FIX16(H),VFOV), max(FIX16(0.1), rz2)); // 0.05
        
        s16 x1 = W/2 - (fix16ToInt(fix16Mul(rx1, xscale1)));
        s16 x2 = W/2 - (fix16ToInt(fix16Mul(rx2, xscale2)));
        
        // only render if it's visible
        if(x1 >= x2 || x2 < 0 || x1 > W-1) {
            //BMP_drawText("off-screen        ", 0, 1); 
            continue; 
        } else {
            //BMP_drawText("on-screen     ", 0, 1);
        }

        // acquire the floor and ceiling heights, relative to where the player's view is
        fix16 yceil = sect_ceil - ply.where.z;
        fix16 yfloor = sect_floor - ply.where.z;


        // project ceiling and floor heights into screen coordinates
        #define Yaw(y,z) (y+fix16Mul(z,ply.yaw))
        
        s16 y1a = H/2 - (fix16ToInt(fix16Mul(yceil, yscale1)));
        s16 y1b = H/2 - (fix16ToInt(fix16Mul(yfloor, yscale1)));

        s16 y2a = H/2 - (fix16ToInt(fix16Mul(yceil, yscale2)));  // yceil + rz2
        s16 y2b = H/2 - (fix16ToInt(fix16Mul(yfloor, yscale2))); // yfloor + rz2
        
        

        if(y1a > y1b) { continue; }
        if(y2a > y2b) { continue; }


        u8 wall_col = w->middle_color;
        u8 low_col = w->lower_color;
        u8 high_col = w->upper_color;
        
        int dither_wall = 1;

        if(1) { // vg_dist < MID_DIST) {
            wall_col = (wall_col << 4 | wall_col);
            low_col = (low_col << 4 | low_col);
            high_col = (high_col << 4 | high_col);
            dither_wall = 0;
        }/* else if (avg_dist < DARK_DIST) {
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
        */


        if(w->adj_sector == -1) { //w->middle_color != TRANSPARENT_IDX) { 
            
            //Vect2D_s16 wall_poly[4] = {
            //    {x2, y2a}, {x2, y2b},
            //    {x1, y1b}, {x1, y1a}
            //};
            //BMP_drawPolygon(wall_poly, 4, wall_col);
            int clipped_x1 = max(x1, left_frustum+1);
            int clipped_x2 = min(x2, right_frustum-1);
            draw_span(x1, x2, y1a, y1a, y2a, y2a, y1b, y1b, y2b, y2b, 
                      clipped_x1, clipped_x2, 
                      sect_ceil_col, high_col, wall_col, low_col, sect_floor_col, 1, dither_wall, dither_floor);
            //insert_result res = insert_span(x1, x2, y1a, y1a, y2a, y2a, y1b, y1b, y2b, y2b, sect_ceil_col, high_col, wall_col, low_col, sect_floor_col, 1, dither_wall, dither_floor);
            //if(res == BUFFER_FULL) { return 1; }
        } else {
            
            fix16 nsceil = sectors[w->adj_sector].ceil_height;
            fix16 nsfloor = sectors[w->adj_sector].floor_height;

            fix16 nyceil = nsceil - ply.where.z;
            int ny1a = H/2 - (fix16ToInt(fix16Mul(nyceil, yscale1)));
            int ny2a = H/2 - (fix16ToInt(fix16Mul(nyceil, yscale2)));
            fix16 nyfloor = nsfloor - ply.where.z;
            int ny1b = H/2 - (fix16ToInt(fix16Mul(nyfloor, yscale1)));
            int ny2b = H/2 - (fix16ToInt(fix16Mul(nyfloor, yscale2)));
            
            int clipped_x1 = max(x1, left_frustum+1);
            int clipped_x2 = min(x2, right_frustum-1);
            draw_span(x1, x2, y1a, ny1a, y2a, ny2a, y1b, ny1b, y2b, ny2b, 
                      clipped_x1, clipped_x2,
                      sect_ceil_col, high_col, wall_col, low_col, sect_floor_col, 0, dither_wall, dither_floor);
            // insert_result res = insert_span(x1, x2, y1a, ny1a, y2a, ny2a, y1b, ny1b, y2b, ny2b, sect_ceil_col, high_col, wall_col, low_col, sect_floor_col, 0, dither_wall, dither_floor);
            
            //enqueue_sector(w->adj_sector);

            
        }
    }
    //drawn_sectors[sectnum] = 1;
  return 0;
}
