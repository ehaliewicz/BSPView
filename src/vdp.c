#include <genesis.h>
#include "palette.h"

void init_vdp() {
  BMP_init(0, PLAN_B, 3, 0);
  BMP_setBufferCopy(0);
  init_palettes();
  //load_palette(3, NORMAL_PAL);
}