#include <genesis.h>
#include "common.h"
#include "game.h"
#include "textures.h"
#include "timing.h"

u16 ytop[W] = {0};
u16 ybottom[W] = {H-1};

u8 fill = 1;

void clear_clipping_buffers() {
  for(int i = 0; i < W; i++) {
    ytop[i] = 0; //-1 ?;
    ybottom[i] = H-1; //H ?;
  }
}

void pix(s16 x, s16 y, u8 col) {
  u8* pix = BMP_getWritePointer(x<<1, y);
  *pix = col;
}

void vline_dither(s16 x, s16 y1, s16 y2, u8 col1, u8 col2, u8 fill);

void vline_native_dither(u8* buf, s16 dy, u8 col, u8 col2);
void vline_native_dither_double(u8* buf, s16 dy, u16 col1, u16 col2);


u8 test_texture[64] = {
    0x1,0x1,0x2,0x2,0x3,0x3,0x4,0x4,0x5,0x5,0x6,0x6,0x7,0x7,0x8,0x8,
    9,9,10,10,11,11,12,12,13,13,14,14,15,15,16,16,
    1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,
    9,9,10,10,11,11,12,12,13,13,14,14,15,15,16,16
};

void draw_texture_patch(u16 texels, u16 pixels, u8* texture_slice, u8* wall_ptr);

void vline_tex_step(s16 x, s16 orig_y1, s16 y1, s16 orig_y2, s16 y2, texture* tex, s16 orig_wall_height, s16 step_height) {
  s16 scaled_wall_height = orig_y2-orig_y1;

  if(y2 <= y1) { return; }
  if(scaled_wall_height <= 0) { return ; }

  s16 unclipped_texels_to_draw = step_height; //orig_wall_height - skip_step_texels;
  s16 transformed_pixels_clipped_from_top = y1-orig_y1;
  s16 transformed_pixels_clipped_from_bottom = orig_y2-y1;

  s32 texels_per_transformed_pixel = (unclipped_texels_to_draw << 16) / scaled_wall_height; // 16.16
  s32 skipped_texels_on_top = (transformed_pixels_clipped_from_top * texels_per_transformed_pixel);
  s32 skipped_texels_on_bottom = (transformed_pixels_clipped_from_bottom * texels_per_transformed_pixel); // 16.16
  s32 skipped_texels_total = skipped_texels_on_top + skipped_texels_on_bottom; // 16.16

  s32 actual_draw_texels = ((unclipped_texels_to_draw << 16) - skipped_texels_total) >> 16;
  s32 actual_draw_pixels = y2-y1;

  
  if(actual_draw_texels <= 0) {
    char buf[32];
    //sprintf(buf, "orig_y1 %i, y1 %i, orig_y2 %i y2 %i", orig_y1, y1, orig_y2, y2);
    //VDP_drawTextBG(PLAN_A, buf, 0, 7);
    //sprintf(buf, "orig_wall_height %i, step_texels %i", orig_wall_height, step_height);
    //VDP_drawTextBG(PLAN_A, buf, 0, 8);
    //sprintf(buf, "texels_per_transformed_pixel %li", texels_per_transformed_pixel >> 16);
    //VDP_drawTextBG(PLAN_A, buf, 0, 9);
    //JOY_waitPressBtn();
    return;
  } else {
    char buf[32];
    //sprintf(buf, "orig_y1 %i, y1 %i, orig_y2 %i y2 %i", orig_y1, y1, orig_y2, y2);
    //VDP_drawTextBG(PLAN_A, buf, 0, 7);
    //sprintf(buf, "orig_wall_height %i, step_texels %i", orig_wall_height, step_height);
    //VDP_drawTextBG(PLAN_A, buf, 0, 8);
    //sprintf(buf, "texels_per_transformed_pixel %li", texels_per_transformed_pixel >> 16);
    //VDP_drawTextBG(PLAN_A, buf, 0, 9);
    //JOY_waitPressBtn();
    //return;
  }

  s32 texel_idx = skipped_texels_on_top; // 16.16;
  u8* texel_ptr = tex->data;

  u8* wall_ptr = BMP_getWritePointer(x<<1, y1);
  
  

  for(int y = y1; y < y2; y++) {
    *wall_ptr = texel_ptr[texel_idx>>16];
    wall_ptr += 128;
    texel_idx += texels_per_transformed_pixel;//tex_per_pixel;
  }

}

// orig_wall_height is the world space height of the wall (i.e. how many texels to draw including tiling)
void vline_tex(s16 x, s16 orig_y1, s16 y1, s16 orig_y2, s16 y2, texture* tex, s16 orig_wall_height, s32 top_texel_offset) {
  
  s16 scaled_wall_height = orig_y2-orig_y1;
  if(y2 <= y1) { return ;}
  if(scaled_wall_height <= 0) { return; }

  s16 unclipped_texels_to_draw = orig_wall_height;
  s16 transformed_pixels_clipped_from_top = y1-orig_y1;
  s16 transformed_pixels_clipped_from_bottom = orig_y2-y2;
  //s16 transformed_pixels_clipped_total = transformed_pixels_clipped_from_top + transformed_pixels_clipped_from_bottom;

  s32 texels_per_transformed_pixel = (unclipped_texels_to_draw << 16) / scaled_wall_height; // 16.16
  s32 skipped_texels_on_top = transformed_pixels_clipped_from_top * texels_per_transformed_pixel; // 16.16
  s32 skipped_texels_on_bottom = transformed_pixels_clipped_from_bottom * texels_per_transformed_pixel; // 16.16
  s32 skipped_texels_total = skipped_texels_on_top + skipped_texels_on_bottom; // 16.16

  s32 actual_draw_texels = ((unclipped_texels_to_draw << 16) - skipped_texels_total) >> 16; // 16.16

  //s32 actual_draw_pixels = y2-y1;
  
  if(actual_draw_texels == 0) {
    return;
  }// else if(actual_draw_texels == 0) {
   // actual_draw_texels = 1;
  //}

  s32 texel_idx = skipped_texels_on_top; // 16.16;
  u8* texel_ptr = tex->data+top_texel_offset;

  u8* wall_ptr = BMP_getWritePointer(x<<1, y1);
  
  

  for(int y = y1; y < y2; y++) {
    *wall_ptr = texel_ptr[texel_idx>>16];
    wall_ptr += 128;
    texel_idx += texels_per_transformed_pixel;//tex_per_pixel;
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
                         u8 dither_wall, u8 dither_floor,
                         s16 orig_lower_height, s16 orig_wall_height, s16 orig_upper_height) {

    

    draw_x2 -= 1;
    s16 dx = orig_x2 - orig_x1;

    fix32 fix_y1a = y1a<<16;  // all of these are 16.16
    fix32 fix_y1b = y1b<<16;
    fix32 fix_y2a = y2a<<16;
    fix32 fix_y2b = y2b<<16;
    fix32 fix_ny1a = ny1a<<16;
    fix32 fix_ny1b = ny1b<<16;
    fix32 fix_ny2a = ny2a<<16;
    fix32 fix_ny2b = ny2b<<16;

    fix32 top_dy = fix_y2a - fix_y1a;   // 16.16..
    fix32 bot_dy = fix_y2b - fix_y1b;
    fix32 top_ndy = fix_ny2a - fix_ny1a;
    fix32 bot_ndy = fix_ny2b - fix_ny1b;

    fix32 top_slope = top_dy/dx;   // 16.16 divided by int is 16.16
    fix32 top_nslope = top_ndy/dx;
    fix32 bot_slope = bot_dy/dx;
    fix32 bot_nslope = bot_ndy/dx;

    s16 x1_diff = draw_x1 - orig_x1;  // integer

    fix32 top_slope_diff = top_slope * x1_diff; // 16.16
    fix32 bot_slope_diff = bot_slope * x1_diff; // 16.16
    fix32 top_nslope_diff = top_nslope * x1_diff; // 16.16
    fix32 bot_nslope_diff = bot_nslope * x1_diff; // 16.16

    fix_y1a += top_slope_diff;
    fix_y1b += bot_slope_diff;
    fix_ny1a += top_nslope_diff;
    fix_ny1b += bot_nslope_diff;


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

        if(cnyb < cya) { // if top of lower step is higher than top of wall opening, clamp it
            cnyb = cya;
        }
        if(cnya > cyb) { // if bottom of top step is lower than bottom of wall opening, clamp it
            cnya = cyb;
        }

        // draw ceiling
        start_timer(FLAT_FILL);
        vline_dither(x, cytop, cya-1, ceil_col, ceil_col2, fill ? 1 : 0);
        // draw floor
        vline_dither(x, cyb+1, cybottom, floor_col, floor_col2, fill ? 1 : 0);
        end_timer(FLAT_FILL);

        // draw step from ceiling
        //s32 skip_top = orig_wall_height - orig_upper_height;
        //vline_tex(x, ya, cya, nya, cnya, &steel_wall, orig_upper_height, skip_top);
        start_timer(WALL_FILL);
        vline_dither(x, cya, cnya, upper_col, upper_col2, fill ? 1 : border);
        //vline_tex(x, ya, cya, nya, cnya, &steel_wall, orig_lower_height, 0);
        vline_dither(x, cnyb, cyb, lower_col, lower_col2, fill ? 1 : border);
        end_timer(WALL_FILL);

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
                         u8 dither_wall, u8 dither_floor,
                         s16 orig_wall_height) {
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

    s16 x1_diff = draw_x1 - orig_x1;
    fix32 top_slope_diff = top_slope * x1_diff; // 16.16
    fix32 bot_slope_diff = bot_slope * x1_diff;

    fix_y1a += top_slope_diff;
    fix_y1b += bot_slope_diff;


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


    //u8* bmp_ptr
    for(s16 x = draw_x1; x <= draw_x2; x++) {
        u8 border = (x == draw_x1 || x == draw_x2 || x == 0 || x == W-1);
        s16 cytop = ytop[x];
        s16 cybottom = ybottom[x];

        s16 ya = fix_y1a >> 16;
        s16 cya = clamp(ya, cytop, cybottom);

        s16 yb = fix_y1b >> 16;

        s16 cyb = clamp(yb, cytop, cybottom);


        start_timer(FLAT_FILL);
        // draw ceiling
        vline_dither(x, cytop, cya-1, ceil_col, ceil_col2, fill ? 1 : 0);
        // draw floor
        vline_dither(x, cyb+1, cybottom, floor_col, floor_col2, fill ? 1 : 0);
        end_timer(FLAT_FILL);

        // draw wall
        //vline_tex(x, ya, cya, yb, cyb, &brown_wall, orig_wall_height, 0);
        start_timer(WALL_FILL);
        vline_dither(x, cya, cyb, wall_col, wall_col2, fill ? 1 : border);
        end_timer(WALL_FILL);
        

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
               u8 dither_wall, u8 dither_floor,
               s16 orig_lower_height, s16 orig_wall_height, s16 orig_upper_height) {
    start_timer(WALL_INTERP);
    if(update_vertical_clipping) {
        draw_two_sided_span(orig_x1, orig_x2, 
                            y1a, ny1a, y1b, ny1b, 
                            y2a, ny2a, y2b, ny2b, 
                            draw_x1, draw_x2, 
                            ceil_col, upper_col, lower_col, floor_col, 
                            dither_wall, dither_floor,
                            orig_lower_height, orig_wall_height, orig_upper_height);
    } else {
        draw_one_sided_span(orig_x1, orig_x2, 
                            y1a, y1b, y2a, y2b, 
                            draw_x1, draw_x2, 
                            ceil_col, wall_col, floor_col, 
                            dither_wall, dither_floor, 
                            orig_wall_height);
    }
    end_timer(WALL_INTERP);
}