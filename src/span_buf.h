#ifndef SPAN_BUF
#define SPAN_BUF

#include <genesis.h>
#include "common.h"

#define MAX_SPANS W

typedef struct {
  s16 clip_x1;
  s16 clip_x2;
} render_span;

extern int num_render_spans;
extern render_span render_spans_for_wall[MAX_SPANS];

// inserts a span into the span buffer data structure
// drawing wall spans as necessary
int insert_span(s16 x1, s16 x2, u8 insert);

int insert_opaque_span(s16 x1, s16 x2, fix32 y1a, fix32 y2a, fix32 y1b, fix32 y2b, 
                       u8 ceil_col, u8 wall_col, u8 floor_col, 
                       u8 dither_wall, u8 dither_floor);

int insert_portal_with_no_steps(s16 x1, s16 x2, fix32 y1a, fix32 y2a, fix32 y1b, fix32 y2b,
                                u8 ceil_col, u8 wall_col, u8 floor_col,
                                u8 dither_floor);

int insert_portal_with_upper_step(s16 x1, s16 x2, 
                                  fix32 y1a, fix32 y2a, fix32 y1b, fix32 y2b,
                                  fix32 ny1a, fix32 ny2a,
                                  u8 ceil_col, u8 upper_col, u8 wall_col, u8 floor_col,
                                  u8 dither_wall, u8 dither_floor);

int insert_portal_with_lower_step(s16 x1, s16 x2, 
                                  fix32 y1a, fix32 y2a, fix32 y1b, fix32 y2b,
                                  fix32 ny1b, fix32 ny2b,
                                  u8 ceil_col, u8 wall_col, u8 lower_col, u8 floor_col,
                                  u8 dither_wall, u8 dither_floor);

int insert_portal_with_both_steps(s16 x1, s16 x2, 
                                  fix32 y1a, fix32 y2a, fix32 y1b, fix32 y2b,
                                  fix32 ny1a, fix32 ny2a, fix32 ny1b, fix32 ny2b,
                                  u8 ceil_col, u8 upper_col, u8 wall_col, u8 lower_col, u8 floor_col,
                                  u8 dither_wall, u8 dither_floor);

void clear_span_buffer();

#endif

