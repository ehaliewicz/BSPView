#include <genesis.h>
#include "common.h"
#include "draw.h"
#include "game.h"
#include "palette.h"
#include "texture.h"
#include "tex_tables.h"

u16 yclip[W*2];

u8 fill = 1;
u8 low_quality_texture = 0;



void clear_clipping_buffers() {
  for(int i = 0; i < W*2; i += 2) {
    yclip[i] = 4;
    yclip[i+1] = H-5; //H-1;
  }
}
#define PIXEL_RIGHT_STEP 1
// #define PIXEL_DOWN_STEP 4
#define PIXEL_DOWN_STEP 2
#define TILE_RIGHT_STEP 640

u16 get_index(u16 x, u16 y) {
  u16 x_col_offset = x & 1;
  u16 base_offset = 0;
  if(x & 0b10) {
    // use right half of framebuffer
    base_offset = (W/2)*FB_H;
  }
  u16 y_offset = y * 2;
  u16 x_num_pair_cols_offset = x >> 2;
  u16 x_cols_offset = x_num_pair_cols_offset * FB_H * 2;
  return base_offset + y_offset + x_col_offset + x_cols_offset + 16;
}

inline u8* getDMAWritePointer(u16 x, u16 y) {
  /*
    char buf[32];
    int coords[7][3] = {
      {0,0}, {1,0}, {1,1},
      {2,0}, {3,0}, {3,1},
      {125,159}
    };
  while(1) {
    for(int i = 0; i < 7; i++) {
      sprintf(buf, "%i,%i -> %i", coords[i][0], coords[i][1], get_index(coords[i][0], coords[i][1]));
      VDP_drawTextBG(PLAN_A, buf, 0, 6+i);
    }
  }
  */
  return &bmp_buffer_write[get_index(x, y)];
}

/*
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
*/

void pix(s16 x, s16 y, u8 col) {
  u8* pix = getDMAWritePointer(x, y); //BMP_getWritePointer(x<<1, y);
  *pix = col;
}

void vline_dither(s16 x, s16 y1, s16 y2, u8 col1, u8 col2, u8 fill);

void vline_native_dither(u8* buf, s16 dy, u8 col, u8 col2);
void vline_native_dither_movep(u8* buf, s16 dy, u32 col1_col2);

s16 column_offset_table[W];

void init_column_offset_table() {
  // offset from last column
  column_offset_table[0] = 0;
  u8* last_ptr = getDMAWritePointer(0, 0);
  for(int x = 1; x < W; x++) {
    u8* cur_ptr = getDMAWritePointer(x, 0);    
    column_offset_table[x] = cur_ptr-last_ptr;
    last_ptr = cur_ptr;
  }
}


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

#define DARK_STEEL_PIX ((DARK_STEEL_IDX << 4) | DARK_STEEL_IDX)
#define BROWN_PIX ((DARK_GREEN_IDX << 4) | DARK_GREEN_IDX)

/*
u8 texture[32] = {
  DARK_STEEL_PIX,
  BROWN_PIX,
  BROWN_PIX,
  BROWN_PIX,
  BROWN_PIX,
  DARK_STEEL_PIX,
  BROWN_PIX,
  BROWN_PIX,
  BROWN_PIX,
  BROWN_PIX,
  DARK_STEEL_PIX,
  BROWN_PIX,
  BROWN_PIX,
  BROWN_PIX,
  BROWN_PIX,
  GREEN_IDX << 4 | GREEN_IDX,
  DARK_STEEL_PIX,
  BROWN_PIX,
  BROWN_PIX,
  BROWN_PIX,
  BROWN_PIX,
  DARK_STEEL_PIX,
  BROWN_PIX,
  BROWN_PIX,
  BROWN_PIX,
  BROWN_PIX,
  DARK_STEEL_PIX,
  BROWN_PIX,
  BROWN_PIX,
  BROWN_PIX,
  BROWN_PIX,
  DARK_STEEL_PIX
};
*/

extern void** texture_draw_tables;
//extern const u16** dv_skip_tables;
extern const void* draw_32_tex_to_59;

void vline_native_tex(u8* buf_ptr, u8* tex_ptr, s32 draw_dy, fix32 dv_over_dy, fix32 dv);
void vline_native_tex_low_quality(u8* buf_ptr, u8* tex_ptr, s32 draw_dy, fix32 dv_over_dy, fix32 dv);
void* vline_native_tex_table_wrapper(u8* adj_buf_ptr, u8* tex_ptr, u32 orig_dy, u32 total_skip);


//u8 tex_col = 0;
inline void vline_dither_tex(u8* buf_ptr, s16 orig_y1, s16 orig_y2, s16 clip_y1, s16 clip_y2, u8* tex_ptr) {
  // 
  s16 orig_dy = (orig_y2-orig_y1);
  s16 draw_dy = clip_y2-clip_y1;
  if(draw_dy <= 0 || orig_dy <= 0) { return; }

  /*
 
  */
  // 28 32
  //

  s16 top_skip = abs(clip_y1-orig_y1);

  s16 bot_skip = abs(orig_y2-clip_y2);

  s16 total_skip = top_skip+bot_skip;


  if(orig_dy <= 100) {
    vline_texture_c(buf_ptr, tex_ptr, orig_dy, top_skip, bot_skip);

  } else {
    fix32 dv_over_dy = (32<<16) / orig_dy; // 8.24
    s32 skip_dy = clip_y1-orig_y1;
    fix32 skip_dv = dv_over_dy * skip_dy; // 8.24

    fix32 dv = skip_dv;
    if (low_quality_texture) {
      vline_native_tex_low_quality(buf_ptr, tex_ptr, draw_dy, dv_over_dy, dv);
    } else {
      vline_native_tex(buf_ptr, tex_ptr, draw_dy, dv_over_dy, dv);
    }
    

    /*
    for(int y = 0; y < draw_dy; y++) {
      u8 texel = tex_ptr[v>>16];
      *buf_ptr = texel;
      dv += dv_over_dy;
      buf_ptr += 2;
    }
    */
    

    //tex_col += 1; if(tex_col >= 32) { tex_col = 0; }
  }

}

inline void vline_dither_fast(u8* buf_ptr, s16 y1, s16 y2, u8 col1, u8 col2, u8 fill) {
  if(y2 > y1) {
    if(fill) {
      u32 full_col = ((col1<<24)|(col2<<16)|(col1<<8)|col2);
      //u8 rem_pix = full_pixels&0b11;
      //vline_native_dither(buf_ptr, y2-y1, col1, col2);
      //vline_native_dither_movep(buf_ptr, (y2-y1)>>1, ((col1<<8)|col2));
      vline_native_dither_movep(buf_ptr, (y2-y1)+1, full_col);
    } else {
      buf_ptr[0] = col1;
      //buf_ptr[(y2-y1)*4] = col1;
      buf_ptr[(y2-y1)*PIXEL_DOWN_STEP] = col1;
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

    // 22.10
    // 12.4
    // we only really need 4 subpixel bits, we have 12 here
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
    fix32 top_slope_diff = top_slope * x1_diff;
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

        s16 ya = fix_y1a>>12;
        s16 cya = clamp(ya, cytop, cybottom);
        s16 nya = fix_ny1a>>12;
        s16 cnya = clamp(nya, cytop, cybottom);

        s16 yb = fix_y1b>>12;
        s16 cyb = clamp(yb, cytop, cybottom);
        s16 nyb = fix_ny1b>>12;
        s16 cnyb = clamp(nyb, cytop, cybottom);

        if(cnyb < cya) {
            cnyb = cya;
        }
        if(cnya > cyb) {
            cnya = cyb;
        }
        //if(cnyb < cnya) {
        //  cnyb = cnya;
        //}
        
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
    u8* col_ptr = getDMAWritePointer(draw_x1, 0);
    for(s16 x = draw_x1; x <= draw_x2; x++,col_ptr += column_offset_table[x]) {
        u8 border = (x == draw_x1 || x == draw_x2 || x == 0 || x == W-1);
        s16 cytop = *edge_list_ptr++;
        s16 cya = *edge_list_ptr++;

        // draw ceiling
        u8* ceil_ptr = col_ptr + (cytop * PIXEL_DOWN_STEP);
        vline_dither_fast(ceil_ptr, cytop, cya, ceil_col, ceil_col2, fill ? 1 : 0);

        s16 cnya = *edge_list_ptr++;
        // draw step from ceiling
        u8* top_step_ptr = col_ptr + (cya * PIXEL_DOWN_STEP);
        vline_dither_fast(top_step_ptr, cya, cnya, upper_col, upper_col2, fill ? 1 : border);

        s16 cnyb = *edge_list_ptr++;
        s16 cyb = *edge_list_ptr++;
        s16 cybottom = *edge_list_ptr++;
        // draw lower step
        u8* lower_step_ptr = col_ptr + (cnyb * PIXEL_DOWN_STEP);
        vline_dither_fast(lower_step_ptr, cnyb, cyb, lower_col, lower_col2, fill ? 1 : border);
        
          
        // draw floor
        u8* floor_ptr = col_ptr + (cyb * PIXEL_DOWN_STEP);
        vline_dither_fast(floor_ptr, cyb, cybottom, floor_col, floor_col2, fill ? 1 : 0);


    }
}

void draw_one_sided_span(s16 orig_x1, s16 orig_x2, 
                         fix32 y1a, fix32 y1b, fix32 y2a, fix32 y2b, 
                         s16 draw_x1, s16 draw_x2, 
                         fix16 z1, fix16 z2,
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

    // 10.12
    // 10.4
    
    fix32 fix_y1a = y1a<<4;
    fix32 fix_y1b = y1b<<4;
    fix32 fix_y2a = y2a<<4;
    fix32 fix_y2b = y2b<<4;

    fix32 top_dy = fix_y2a - fix_y1a; // 10.12
    fix32 bot_dy = fix_y2b - fix_y1b;

    s16 dx = (orig_x2 - orig_x1)+1;
    fix32 top_slope = (top_dy/dx);
    fix32 bot_slope = (bot_dy/dx);

    s16 x1_diff = draw_x1 - orig_x1;
    fix32 top_slope_diff = (top_slope * x1_diff); // 10.12
    fix32 bot_slope_diff = (bot_slope * x1_diff);

    fix_y1a += top_slope_diff;
    fix_y1b += bot_slope_diff;
  

    s16* edge_list_ptr = edge_list;
    u16* yclip_ptr = &(yclip[draw_x1<<1]);
    u8* col_ptr = getDMAWritePointer(draw_x1, 0);
    
    

    //fix32 du_dz = 0;
    //fix32 start_one_over_z = fix32Div(FIX32(1), (z1));
    //fix32 end_one_over_z = fix32Div(FIX32(1), (z2));

    //fix32 start_du_over_z = 0;
    //fix32 end_du_over_z = fix32Div(FIX32(32), (z2));
    
    //fix32 du_over_z_over_dx = (end_du_over_z-start_du_over_z)/dx;
    //fix32 one_over_z_over_dx = (end_one_over_z-start_one_over_z)/dx;
    
    u8* tex_ptr = wood_tex;
    
    //fix16 du_over_dx = fix16Div(FIX16(32), FIX16(dx));
    fix16 du_per_dx = (32<<5)/dx; //FIX16(32)/dx;
    fix16 fix_du = du_per_dx * (draw_x1 - orig_x1);


    //fix32 cur_one_over_z = start_one_over_z + one_over_z_over_dx * (draw_x1 - orig_x1);
    //fix32 cur_du_over_z = start_du_over_z + du_over_z_over_dx * (draw_x1 - orig_x1);
    //fix_du += ()
    for(s16 x = draw_x1; x <= draw_x2; x++, col_ptr += column_offset_table[x]) {
        u8 border = (x == draw_x1 || x == draw_x2 || x == 0 || x == W-1);
        //loop needs 
        // draw_x1, draw_x2
        // yclip_ptr, fix_y1a, fix_y1b
        // edge_list_ptr
        // top_slope, bot_slope
        
        s16 cytop = *yclip_ptr++;
        s16 cybottom = *yclip_ptr++; 

        s16 ya = fix_y1a>>16;
        s16 cya = clamp(ya, cytop, cybottom);

        s16 yb = fix_y1b>>16;
        s16 cyb = clamp(yb, cytop, cybottom);

        // draw ceiling
        u8* ceil_ptr = col_ptr + (cytop * PIXEL_DOWN_STEP);
        vline_dither_fast(ceil_ptr, cytop, cya-1, ceil_col, ceil_col2, fill ? 1 : 0);
        
        // draw floor
        u8* floor_ptr = col_ptr + ((cyb+1) * PIXEL_DOWN_STEP);
        vline_dither_fast(floor_ptr, cyb+1, cybottom, floor_col, floor_col2, fill ? 1 : 0);

        // draw wall
        u8* wall_ptr = col_ptr + (cya * PIXEL_DOWN_STEP);
        //fix32 cur_z = fix32Div(FIX32(1), cur_one_over_z);
        //fix32 cur_u = fi32Mul(cur_du_over_z, cur_z);

        //u8* tex_col_ptr = tex_ptr + fix16ToInt(fix_du)*32;// & 0b1111111111100000);
        u16 masked_du = fix_du & (~0b11111);
        u8* tex_col_ptr = tex_ptr + masked_du;
        vline_dither_tex(wall_ptr, ya, yb, cya, cyb, tex_col_ptr); //col_ptr);

        //cur_one_over_z += one_over_z_over_dx;
        //cur_du_over_z += du_over_z_over_dx;
        
        fix_du += du_per_dx;
        

        
        fix_y1a += top_slope;
        fix_y1b += bot_slope;

    }
    
}

#define CLEAR_SUBPIXELS(x) ((x) &= ~0xFFFF)


/*
void draw_span(s16 orig_x1, s16 orig_x2, 
               fix32 y1a, fix32 ny1a, fix32 y1b, fix32 ny1b, fix32 y2a, fix32 ny2a, fix32 y2b, fix32 ny2b, 
               s16 draw_x1, s16 draw_x2, 
               u8 ceil_col, u8 upper_col, u8 wall_col, u8 lower_col, u8 floor_col, 
               u8 update_vertical_clipping, u8 dither_wall, u8 dither_floor) {

    if(update_vertical_clipping) {           
        draw_two_sided_span(orig_x1, orig_x2, y1a, ny1a, y1b, ny1b, y2a, ny2a, y2b, ny2b, draw_x1, draw_x2, ceil_col, upper_col, lower_col, floor_col, dither_wall, dither_floor);
    } else {        
        draw_one_sided_span(orig_x1, orig_x2, y1a, y1b, y2a, y2b, draw_x1, draw_x2, ceil_col, wall_col, floor_col, dither_wall, dither_floor);
    }
}
*/
