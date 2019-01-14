#ifndef SPAN_BUF
#define SPAN_BUF

#include <genesis.h>

// inserts a span into the span buffer data structure
// drawing wall spans as necessary
int insert_span(int x1, int x2, int y1a, int y2a, int y1b, int y2b, u8 ceilCol, u8 wallCol, u8 floorCol);
void reset_span_buffer();

#endif

