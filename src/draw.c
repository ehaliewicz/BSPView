#include <genesis.h>
#include "common.h"
#include "draw.h"

u16 ytop[W] = {0};
u16 ybottom[W] = {H-1};

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