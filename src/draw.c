#include <genesis.h>
#include "common.h"
#include "draw.h"
#include "game.h"
#include "palette.h"

u16 yclip[W*2];

u8 fill = 1;
u8 subpixel = 0;

void clear_clipping_buffers() {
  for(int i = 0; i < W*2; i += 2) {
    yclip[i] = 4;
    yclip[i+1] = H-5; //H-1;
  }
}
#define PIXEL_RIGHT_STEP 1
#define PIXEL_DOWN_STEP 4
#define TILE_RIGHT_STEP 640

inline u8* getDMAWritePointer(u16 x, u16 y) {
    // const u16 off = (y * BMP_PITCH) + (x >> 1);
    // return write address
    // return bmp_buffer_write + off;
    u16 hor_tile_idx = x/4;
    u16 hor_pixel_idx = x%4; //0b11;
    //u16 vert_offset = y<<2; // y*4;
    // slow multiply
  
    // 128 + 512
    int hor_128 = hor_tile_idx << 7;
    int hor_512 = hor_128 << 2;

    return (bmp_buffer_write + 32 + (hor_tile_idx * TILE_RIGHT_STEP) +
            (hor_pixel_idx * PIXEL_RIGHT_STEP) + (y * PIXEL_DOWN_STEP));

}

void pix(s16 x, s16 y, u8 col) {
  u8* pix = getDMAWritePointer(x, y); //BMP_getWritePointer(x<<1, y);
  *pix = col;
}

void vline_dither(s16 x, s16 y1, s16 y2, u8 col1, u8 col2, u8 fill);

void vline_native_dither(u8* buf, s16 dy, u8 col, u8 col2);



inline void vline_dither(s16 x, s16 y1, s16 y2, u8 col1, u8 col2, u8 fill) {
    if (y2 > y1) {
        if(fill) {
          u8* pix = getDMAWritePointer(x, y1);
          //u8* pix = BMP_getWritePointer(x<<1, y1);

          vline_native_dither(pix, y2-y1, col1, col2);
        } else {
            pix(x, y1, col1);
            pix(x, y2, col1);
        }
    } 
}


u8 swap_nibbles(u8 x) {
  return (((x & 0xF0) >>4) | ((x & 0x0F) << 4));
}


s16 edge_list[W*6];

void draw_two_sided_span(s16 orig_x1, s16 orig_x2, 
                         fix32 y1a, fix32 ny1a, fix32 y1b, fix32 ny1b, fix32 y2a, fix32 ny2a, fix32 y2b, fix32 ny2b, 
                         s16 draw_x1, s16 draw_x2, u8 ceil_col, u8 upper_col, u8 lower_col, u8 floor_col,
                         u8 dither_wall, u8 dither_floor) {

    
    draw_x2 -= 1;
    s16 dx = orig_x2 - orig_x1;

    fix32 fix_y1a = y1a; //y1a<<16;
    fix32 fix_y1b = y1b; //y1b<<16;
    fix32 fix_y2a = y2a; //y2a<<16;
    fix32 fix_y2b = y2b; //y2b<<16;
    fix32 fix_ny1a = ny1a; //ny1a<<16;
    fix32 fix_ny1b = ny1b; //ny1b<<16;
    fix32 fix_ny2a = ny2a; //ny2a<<16;
    fix32 fix_ny2b = ny2b; //ny2b<<16;

    fix32 top_dy = fix_y2a - fix_y1a; 
    fix32 bot_dy = fix_y2b - fix_y1b;
    fix32 top_ndy = fix_ny2a - fix_ny1a;
    fix32 bot_ndy = fix_ny2b - fix_ny1b;

    
    fix32 top_slope = top_dy/dx;
    fix32 top_nslope = top_ndy/dx;
    fix32 bot_slope = bot_dy/dx;
    fix32 bot_nslope = bot_ndy/dx;

    s16 x1_diff = draw_x1 - orig_x1;
    fix32 top_slope_diff = top_slope * x1_diff; // 16.16
    fix32 bot_slope_diff = bot_slope * x1_diff;
    fix32 top_nslope_diff = top_nslope * x1_diff;
    fix32 bot_nslope_diff = bot_nslope * x1_diff;

    fix_y1a += top_slope_diff;
    fix_y1b += bot_slope_diff;
    fix_ny1a += top_nslope_diff;
    fix_ny1b += bot_nslope_diff;


    s16* edge_list_ptr = edge_list;
    u16* yclip_ptr = &(yclip[draw_x1<<1]);
    for(s16 x = draw_x1; x <= draw_x2; x++) {
        // u8 border = (x == draw_x1 || x == draw_x2 || x == 0 || x == W-1);
        s16 cytop = *yclip_ptr; // ytop[x];
        s16 cybottom = *(yclip_ptr+1); //ybottom[x];

        s16 ya = fix_y1a >> 16;
        s16 cya = clamp(ya, cytop, cybottom);
        s16 nya = fix_ny1a >> 16;
        s16 cnya = clamp(nya, cytop, cybottom);

        s16 yb = fix_y1b >> 16;
        s16 cyb = clamp(yb, cytop, cybottom);
        s16 nyb = fix_ny1b >> 16;
        s16 cnyb = clamp(nyb, cytop, cybottom);

        if(cnyb < cya) {
            cnyb = cya;
        }
        if(cnya > cyb) {
            cnya = cyb;
        }
        
        *yclip_ptr++ = clamp(max(cya, cnya), cytop, H-1);
        *yclip_ptr++ = clamp(min(cyb, cnyb), 0, cybottom);

        *edge_list_ptr++ = cytop;
        *edge_list_ptr++ = cya;
        *edge_list_ptr++ = cnya;
        *edge_list_ptr++ = cnyb;
        *edge_list_ptr++ = cyb;
        *edge_list_ptr++ = cybottom;

        fix_y1a += top_slope;
        fix_y1b += bot_slope;
        fix_ny1a += top_nslope;
        fix_ny1b += bot_nslope;
    }


    u8 lower_col2;
    u8 upper_col2;
    u8 floor_col2;
    u8 ceil_col2;
    if(dither_wall) {
        lower_col2 = swap_nibbles(lower_col);
        upper_col2 = swap_nibbles(upper_col);
    } else {
        lower_col2 = lower_col;
        upper_col2 = upper_col;
    }
    if(dither_floor) {
      floor_col2 = swap_nibbles(floor_col);
      ceil_col2 = swap_nibbles(ceil_col);
    } else {
      floor_col2 = floor_col;
      ceil_col2 = ceil_col;
    }
                         
    edge_list_ptr = edge_list;
    for(s16 x = draw_x1; x <= draw_x2; x++) {
        u8 border = (x == draw_x1 || x == draw_x2 || x == 0 || x == W-1);
        s16 cytop = *edge_list_ptr++;
        s16 cya = *edge_list_ptr++;
        // draw ceiling
        vline_dither(x, cytop, cya, ceil_col, ceil_col2, fill ? 1 : 0);
        s16 cnya = *edge_list_ptr++;
        // draw step from ceiling
        vline_dither(x, cya, cnya, upper_col, upper_col2, fill ? 1 : border);

        s16 cnyb = *edge_list_ptr++;
        s16 cyb = *edge_list_ptr++;
        // draw lower step
        vline_dither(x, cnyb, cyb, lower_col, lower_col2, fill ? 1 : border);
        s16 cybottom = *edge_list_ptr++;
        // draw floor
        vline_dither(x, cyb, cybottom, floor_col, floor_col2, fill ? 1 : 0);

    }
}

fix32 stash_fix_y1a, stash_fix_y1b, stash_top_slope, stash_bot_slope;
s16 stash_ddx;
s16* stash_edge_list_ptr;
u16* stash_yclip_ptr;


void draw_one_sided_span(s16 orig_x1, s16 orig_x2, 
                         fix32 y1a, fix32 y1b, fix32 y2a, fix32 y2b, 
                         s16 draw_x1, s16 draw_x2, 
                         u8 ceil_col, u8 wall_col, u8 floor_col, 
                         u8 dither_wall, u8 dither_floor) {
    u8 wall_col2;
    u8 floor_col2;
    u8 ceil_col2;
    if(dither_wall) {
        wall_col2 = swap_nibbles(wall_col);
    } else {
        wall_col2 = wall_col;
    }

    if(dither_floor) {
      floor_col2 = swap_nibbles(floor_col);
      ceil_col2 = swap_nibbles(ceil_col);
    } else {
      floor_col2 = floor_col;
      ceil_col2 = ceil_col;
    }

    draw_x2 -= 1;
    s16 dx = orig_x2 - orig_x1;
    
    fix32 fix_y1a = y1a; //y1a<<16;
    fix32 fix_y1b = y1b; //y1b<<16;
    fix32 fix_y2a = y2a; //y2a<<16;
    fix32 fix_y2b = y2b; //y2b<<16;

    fix32 top_dy = fix_y2a - fix_y1a;
    fix32 bot_dy = fix_y2b - fix_y1b;

    fix32 top_slope = top_dy/dx;
    fix32 bot_slope = bot_dy/dx;

    s16 x1_diff = draw_x1 - orig_x1;
    fix32 top_slope_diff = top_slope * x1_diff;
    fix32 bot_slope_diff = bot_slope * x1_diff;

    fix_y1a += top_slope_diff;
    fix_y1b += bot_slope_diff;


    s16* edge_list_ptr = edge_list;
    u16* yclip_ptr = &(yclip[draw_x1<<1]);

    for(s16 x = draw_x1; x <= draw_x2; x++) {
        //loop needs 
        // draw_x1, draw_x2
        // yclip_ptr, fix_y1a, fix_y1b
        // edge_list_ptr
        // top_slope, bot_slope
        
        s16 cytop = *yclip_ptr++;
        s16 cybottom = *yclip_ptr++; 

        s16 ya = fix_y1a >> 16;
        s16 cya = clamp(ya, cytop, cybottom);

        s16 yb = fix_y1b >> 16;
        s16 cyb = clamp(yb, cytop, cybottom);

        *edge_list_ptr++ = cytop;
        *edge_list_ptr++ = cya;
        *edge_list_ptr++ = cyb;
        *edge_list_ptr++ = cybottom;
        
        fix_y1a += top_slope;
        fix_y1b += bot_slope;
    }
    



    
    yclip_ptr = &(yclip[draw_x1<<1]);
    edge_list_ptr = edge_list;
    for(s16 x = draw_x1; x <= draw_x2; x++) {
        u8 border = (x == draw_x1 || x == draw_x2 || x == 0 || x == W-1);
        s16 cytop = *edge_list_ptr++;
        s16 cya = *edge_list_ptr++;
        s16 cyb = *edge_list_ptr++;
        s16 cybottom = *edge_list_ptr++;
        //s16 cytop = *yclip_ptr++;
        //s16 cybottom = *yclip_ptr++;

        //s16 cya = clamp(ya, cytop, cybottom);
        //s16 cyb = clamp(yb, cytop, cybottom);

        // draw ceiling
        vline_dither(x, cytop, cya-1, ceil_col, ceil_col2, fill ? 1 : 0);
        
        // draw floor
        vline_dither(x, cyb+1, cybottom, floor_col, floor_col2, fill ? 1 : 0);
        

        // draw wall
        vline_dither(x, cya, cyb, wall_col, wall_col2, fill ? 1 : border);
    }
    
    
}

#define CLEAR_SUBPIXELS(x) ((x) &= ~0xFFFF)

void draw_span(s16 orig_x1, s16 orig_x2, 
               fix32 y1a, fix32 ny1a, fix32 y1b, fix32 ny1b, fix32 y2a, fix32 ny2a, fix32 y2b, fix32 ny2b, 
               s16 draw_x1, s16 draw_x2, 
               u8 ceil_col, u8 upper_col, u8 wall_col, u8 lower_col, u8 floor_col, 
               u8 update_vertical_clipping, u8 dither_wall, u8 dither_floor) {
    if(!subpixel) {
      CLEAR_SUBPIXELS(y1a); CLEAR_SUBPIXELS(ny1a); 
      CLEAR_SUBPIXELS(y1b); CLEAR_SUBPIXELS(ny1a);
      CLEAR_SUBPIXELS(y2a); CLEAR_SUBPIXELS(ny2a); 
      CLEAR_SUBPIXELS(y2b); CLEAR_SUBPIXELS(ny2a);
    }
    if(update_vertical_clipping) {           
        draw_two_sided_span(orig_x1, orig_x2, y1a, ny1a, y1b, ny1b, y2a, ny2a, y2b, ny2b, draw_x1, draw_x2, ceil_col, upper_col, lower_col, floor_col, dither_wall, dither_floor);
    } else {        
        draw_one_sided_span(orig_x1, orig_x2, y1a, y1b, y2a, y2b, draw_x1, draw_x2, ceil_col, wall_col, floor_col, dither_wall, dither_floor);
    }
}