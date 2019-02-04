#include <genesis.h>
#include "common.h"

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
    //y1 = clamp(y1, 0, H-1);
    //y2 = clamp(y2, 0, H-1);
    if (y2 > y1) {
        if(fill) {

          u8* pix = BMP_getWritePointer(x<<1, y1);
          for(s16 y=y1; y<=y2; y++) {
              *pix = col;
              pix += 128;
          }
      } else {
        pix(x, y1, col);
        pix(x, y2, col);
      }
    } 
}