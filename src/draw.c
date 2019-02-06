#include <genesis.h>
#include "common.h"
#include "draw.h"
#include "game.h"

u16 ytop[W] = {0};
u16 ybottom[W] = {H-1};

u8 fill = 1;

void clear_clipping_buffers() {
  for(int i = 0; i < W; i++) {
    ytop[i] = 0;
    ybottom[i] = H-1;
  }
}

void pix(s16 x, s16 y, u8 col) {
  u8* pix = BMP_getWritePointer(x<<1, y);
  *pix = col;
}

void vline(s16 x, s16 y1, s16 y2, u8 col, u8 fill) {
    if (y2 > y1) {
        if(fill) {
          u8* pix = BMP_getWritePointer(x<<1, y1);
          vline_native(pix, y2-y1, col);
        } else {
          pix(x, y1, col);
          pix(x, y2, col);
        }
    } 
}

void vline_dither(s16 x, s16 y1, s16 y2, u8 col1, u8 col2, u8 fill) {
    //if(framecnt & 1) { SWAP_u8(col1, col2); }
    if (y2 > y1) {
        if(fill) {
          u8* pix = BMP_getWritePointer(x<<1, y1);
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


void draw_two_sided_span(s16 orig_x1, s16 orig_x2, 
                         s16 y1a, s16 ny1a, s16 y1b, s16 ny1b, s16 y2a, s16 ny2a, s16 y2b, s16 ny2b, 
                         s16 draw_x1, s16 draw_x2, u8 ceil_col, u8 upper_col, u8 lower_col, u8 floor_col,
                         u8 dither_wall, u8 dither_floor) {
    draw_x2 -= 1;
    s16 dx = orig_x2 - orig_x1;

    fix32 fix_y1a = y1a<<16;
    fix32 fix_y1b = y1b<<16;
    fix32 fix_y2a = y2a<<16;
    fix32 fix_y2b = y2b<<16;
    fix32 fix_ny1a = ny1a<<16;
    fix32 fix_ny1b = ny1b<<16;
    fix32 fix_ny2a = ny2a<<16;
    fix32 fix_ny2b = ny2b<<16;

    fix32 top_dy = fix_y2a - fix_y1a; 
    fix32 bot_dy = fix_y2b - fix_y1b;
    fix32 top_ndy = fix_ny2a - fix_ny1a;
    fix32 bot_ndy = fix_ny2b - fix_ny1b;

    fix32 top_slope = top_dy/dx;
    fix32 top_nslope = top_ndy/dx;
    fix32 bot_slope = bot_dy/dx;
    fix32 bot_nslope = bot_ndy/dx;

    for(s16 x = orig_x1; x < draw_x1; x++) {
        fix_y1a += top_slope;
        fix_y1b += bot_slope;
        fix_ny1a += top_nslope;
        fix_ny2a += bot_nslope;
    }
    

    u8 lower_col2;
    u8 upper_col2;
    u8 floor_col2;
    u8 ceil_col2;
    if(dither_wall) {
        lower_col2 = swap_nibbles(lower_col);
        upper_col2 = swap_nibbles(upper_col);
    }
    if(dither_floor) {
      floor_col2 = swap_nibbles(floor_col);
      ceil_col2 = swap_nibbles(ceil_col);
    }


    // interpolate wall heights if we clipped this wall segment
  
    
    for(s16 x = draw_x1; x <= draw_x2; x++) {
        u8 border = (x == draw_x1 || x == draw_x2 || x == 0 || x == W-1);
        s16 cytop = ytop[x];
        s16 cybottom = ybottom[x];
        

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

        if(dither_floor) {
          // draw ceiling
          vline_dither(x, cytop, cya, ceil_col, ceil_col2, fill ? 1 : 0);
          // draw floor
          vline_dither(x, cyb, cybottom, floor_col, floor_col2, fill ? 1 : 0);
        } else {
          // draw ceiling
          vline(x, cytop, cya, ceil_col, fill ? 1 : 0);
          // draw floor
          vline(x, cyb, cybottom, floor_col, fill ? 1 : 0);
        }

        if(dither_wall) {
          // draw step from ceiling
          vline_dither(x, cya, cnya-1, upper_col, upper_col2, fill ? 1 : border);

          // draw lower step
          vline_dither(x, cnyb+1, cyb, lower_col, lower_col2, fill ? 1 : border);
        } else {
          // draw step from ceiling
          vline(x, cya, cnya-1, upper_col, fill ? 1 : border);

          // draw lower step
          vline(x, cnyb+1, cyb, lower_col, fill ? 1 : border);
        }

        fix_y1a += top_slope;
        fix_y1b += bot_slope;
        fix_ny1a += top_nslope;
        fix_ny1b += bot_nslope;
        ytop[x] = clamp(max(cya, cnya), cytop, H-1);
        ybottom[x] = clamp(min(cyb, cnyb), 0, cybottom);
    }
}


void draw_one_sided_span(s16 orig_x1, s16 orig_x2, 
                         s16 y1a, s16 y1b, s16 y2a, s16 y2b, 
                         s16 draw_x1, s16 draw_x2, 
                         u8 ceil_col, u8 wall_col, u8 floor_col, 
                         u8 dither_wall, u8 dither_floor) {
    draw_x2 -= 1;
    s16 dx = orig_x2 - orig_x1;
    
    
    fix32 fix_y1a = y1a<<16;
    fix32 fix_y1b = y1b<<16;
    fix32 fix_y2a = y2a<<16;
    fix32 fix_y2b = y2b<<16;

    fix32 top_dy = fix_y2a - fix_y1a; 
    fix32 bot_dy = fix_y2b - fix_y1b;

    fix32 top_slope = top_dy/dx;
    fix32 bot_slope = bot_dy/dx;

    for(s16 x = orig_x1; x < draw_x1; x++) {
        fix_y1a += top_slope;
        fix_y1b += bot_slope;
    }


    u8 wall_col2;
    u8 floor_col2;
    u8 ceil_col2;
    if(dither_wall) {
        wall_col2 = swap_nibbles(wall_col);
    }
    if(dither_floor) {
      floor_col2 = swap_nibbles(floor_col);
      ceil_col2 = swap_nibbles(ceil_col);
    }


    
    for(s16 x = draw_x1; x <= draw_x2; x++) {
        u8 border = (x == draw_x1 || x == draw_x2 || x == 0 || x == W-1);
        s16 cytop = ytop[x];
        s16 cybottom = ybottom[x];

        s16 ya = fix_y1a >> 16;
        s16 cya = clamp(ya, cytop, cybottom);

        s16 yb = fix_y1b >> 16;
        s16 cyb = clamp(yb, cytop, cybottom);


      
        if(dither_floor) {
          // draw ceiling
          vline_dither(x, cytop, cya-1, ceil_col, ceil_col2, fill ? 1 : 0);
          // draw floor
          vline_dither(x, cyb+1, cybottom, floor_col, floor_col2, fill ? 1 : 0);
        } else {
          // draw ceiling
          vline(x, cytop, cya-1, ceil_col, fill ? 1 : 0);
          // draw floor
          vline(x, cyb+1, cybottom, floor_col, fill ? 1 : 0);
        }

        // draw wall
        if(dither_wall) {
          vline_dither(x, cya, cyb, wall_col, wall_col2, fill ? 1 : border);
        } else {
          vline(x, cya, cyb, wall_col, fill ? 1 : border);
        }
        
        
        ytop[x] = clamp(cya, cytop, H-1);
        ybottom[x] = clamp(cyb, 0, cybottom);

        fix_y1a += top_slope;
        fix_y1b += bot_slope;
    }
}


void draw_span(s16 orig_x1, s16 orig_x2, 
               s16 y1a, s16 ny1a, s16 y1b, s16 ny1b, s16 y2a, s16 ny2a, s16 y2b, s16 ny2b, 
               s16 draw_x1, s16 draw_x2, 
               u8 ceil_col, u8 upper_col, u8 wall_col, u8 lower_col, u8 floor_col, 
               u8 update_vertical_clipping, 
               u8 dither_wall, u8 dither_floor) {
    if(update_vertical_clipping) {
        draw_two_sided_span(orig_x1, orig_x2, y1a, ny1a, y1b, ny1b, y2a, ny2a, y2b, ny2b, draw_x1, draw_x2, ceil_col, upper_col, lower_col, floor_col, dither_wall, dither_floor);
    } else {
        draw_one_sided_span(orig_x1, orig_x2, y1a, y1b, y2a, y2b, draw_x1, draw_x2, ceil_col, wall_col, floor_col, dither_wall, dither_floor);
    }
}