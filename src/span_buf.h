#ifndef SPAN_BUF
#define SPAN_BUF

#include <genesis.h>

// inserts a span into the span buffer data structure
// drawing wall spans as necessary
int insert_span(s16 x1, s16 x2,
                s16 y1a, s16 ny1a, s16 y2a, s16 ny2a, s16 y1b, s16 ny1b, s16 y2b, s16 ny2b, 
                u8 ceil_col, u8 upper_col, u8 wall_col, u8 lower_col, u8 floor_col, 
                u8 insert, u8 dither_wall, u8 dither_floor);

void reset_span_buffer();

#endif

