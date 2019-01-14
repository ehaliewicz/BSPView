#include <genesis.h>
#include "common.h"

u8 ytop[W] = {0};
u8 ybottom[W] = {H-1};

void clear_clipping_buffers() {
  memset(ytop, 0, sizeof(ytop));
  memset(ybottom, H-1, sizeof(ybottom));
}

