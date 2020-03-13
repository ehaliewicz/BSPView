#ifndef DRAW_H
#define DRAW_H

#include <genesis.h>
#include "common.h"

extern u8 fill;
extern u8 low_quality_texture;


typedef struct {
  s16 orig_x1;
  s16 orig_x2;
  fix32 y1a;
  fix32 y1b;
  fix32 y2a;
  fix32 y2b;
  fix32 ny1a;
  fix32 ny1b;
  fix32 ny2a;
  fix32 ny2b;
  s16 draw_x1;
  s16 draw_x2;
  fix16 z1;
  fix16 z2;
  u8 ceil_col;
  u8 upper_col;
  u8 wall_col;
  u8 lower_col;
  u8 floor_col; 
  u8 dither_floor;
  u8 dither_wall;
  u8 two_sided;
} draw_span;


void clear_clipping_buffers();

void init_column_offset_table();

            
void draw_two_sided_span(s16 orig_x1, s16 orig_x2, 
                         fix32 y1a, fix32 ny1a, fix32 y1b, fix32 ny1b, fix32 y2a, fix32 ny2a, fix32 y2b, fix32 ny2b, 
                         s16 draw_x1, s16 draw_x2, u8 ceil_col, u8 upper_col, u8 lower_col, u8 floor_col,
                         u8 dither_wall, u8 dither_floor);

void draw_one_sided_span(s16 orig_x1, s16 orig_x2, 
                         fix32 y1a, fix32 y1b, fix32 y2a, fix32 y2b, 
                         s16 draw_x1, s16 draw_x2, 
                         fix16 z1, fix16 z2,
                         u8 ceil_col, u8 wall_col, u8 floor_col, 
                         u8 dither_wall, u8 dither_floor);

#endif