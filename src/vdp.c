#include <genesis.h>
#include "palette.h"

void init_vdp() {
  BMP_init(0, PLAN_B, 3, 0);
  BMP_setBufferCopy(0);
  loadPalette(3);
}