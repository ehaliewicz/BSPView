#include <genesis.h>
#include "common.h"
#include "draw.h"

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



void draw_two_sided_span(s16 orig_x1, s16 orig_x2, s16 y1a, s16 ny1a, s16 y1b, s16 ny1b, s16 y2a, s16 ny2a, s16 y2b, s16 ny2b, s16 draw_x1, s16 draw_x2, u8 ceil_col, u8 upper_col, u8 lower_col, u8 floor_col) {
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


    // interpolate wall heights if we clipped this wall segment
    
    for(s16 x = orig_x1; x < draw_x1; x++) {
        fix_y1a += top_slope;
        fix_y1b += bot_slope;
        fix_ny1a += top_nslope;
        fix_ny2a += bot_nslope;
    }
    //u8* col_ptr = BMP_getWritePointer(orig_x1<<1, 0);
    
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
        
        // draw ceiling
        vline(x, cytop, cya, ceil_col, fill ? 1 : 0);
        // draw floor
        vline(x, cyb, cybottom, floor_col, fill ? 1 : 0);

        // draw step from ceiling
        vline(x, cya, cnya-1, upper_col, fill ? 1 : border);

        // draw lower step
        vline(x, cnyb+1, cyb, lower_col, fill ? 1 : border);


        fix_y1a += top_slope;
        fix_y1b += bot_slope;
        fix_ny1a += top_nslope;
        fix_ny1b += bot_nslope;
        ytop[x] = clamp(max(cya, cnya), cytop, H-1);
        ybottom[x] = clamp(min(cyb, cnyb), 0, cybottom);
    }
}

void draw_one_sided_span(s16 orig_x1, s16 orig_x2, s16 y1a, s16 y1b, s16 y2a, s16 y2b, s16 draw_x1, s16 draw_x2, u8 ceil_col, u8 wall_col, u8 floor_col) {
    draw_x2 -= 1;
    s16 dx = orig_x2 - orig_x1;

    fix32 fix_y1a = y1a<<16; // top left side 16.16
    fix32 fix_y1b = y1b<<16; // bottom left side
    fix32 fix_y2a = y2a<<16; // top right side
    fix32 fix_y2b = y2b<<16; // bottom right side

    fix32 top_dy = fix_y2a - fix_y1a; // top_right - top_left  16.16
    fix32 bot_dy = fix_y2b - fix_y1b; // bottom_right - bottom_left

    fix32 top_slope = top_dy/dx; // 16.16
    fix32 bot_slope = bot_dy/dx;


    // interpolate wall heights if we clipped this wall segment
    
    for(s16 x = orig_x1; x < draw_x1; x++) {
        fix_y1a += top_slope;
        fix_y1b += bot_slope;
    }
    //u8* col_ptr = BMP_getWritePointer(orig_x1<<1, 0);
    
    for(s16 x = draw_x1; x <= draw_x2; x++) {
        u8 border = (x == draw_x1 || x == draw_x2 || x == 0 || x == W-1);
        s16 cytop = ytop[x];
        s16 cybottom = ybottom[x];


        s16 ya = fix_y1a >> 16;
        s16 cya = clamp(ya, cytop, cybottom);

        s16 yb = fix_y1b >> 16;
        s16 cyb = clamp(yb, cytop, cybottom);


        
        // draw ceiling
        vline(x, cytop, cya-1, ceil_col, fill ? 1 : 0); //fill);
        // draw wall
        vline(x, cya, cyb, wall_col, fill ? 1 : border);
        // draw floor
        vline(x, cyb+1, cybottom, floor_col, fill ? 1 : 0); //fill);

        
        ytop[x] = clamp(cya, cytop, H-1);
        ybottom[x] = clamp(cyb, 0, cybottom);

        fix_y1a += top_slope;
        fix_y1b += bot_slope;
    }
}


void draw_span(s16 orig_x1, s16 orig_x2, 
               s16 y1a, s16 ny1a, s16 y1b, s16 ny1b, s16 y2a, s16 ny2a, s16 y2b, s16 ny2b, 
               s16 draw_x1, s16 draw_x2, 
               u8 ceil_col, u8 upper_col, u8 wall_col, u8 lower_col, u8 floor_col, u8 update_vertical_clipping) {
    if(update_vertical_clipping) {
        draw_two_sided_span(orig_x1, orig_x2, y1a, ny1a, y1b, ny1b, y2a, ny2a, y2b, ny2b, draw_x1, draw_x2, ceil_col, upper_col, lower_col, floor_col);
    } else {
        draw_one_sided_span(orig_x1, orig_x2, y1a, y1b, y2a, y2b, draw_x1, draw_x2, ceil_col, wall_col, floor_col);
    }
}