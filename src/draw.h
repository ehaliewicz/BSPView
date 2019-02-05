#ifndef DRAW_H
#define DRAW_H

#include <genesis.h>
#include "common.h"

extern u16 ytop[W];
extern u16 ybottom[W];

void clear_clipping_buffers();

void vline(s16 x, s16 y1, s16 y2, u8 col, u8 fill);

void vline_native(u8* buf, s16 cnt, u8 col);

#endif