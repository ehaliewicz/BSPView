#include <genesis.h>
#include "palette.h"
#include "../res/bg.h"
#include "../res/paldef.h"

void init_vdp() {

    VDP_setScrollingMode(HSCROLL_PLANE, VSCROLL_PLANE);
    VDP_setPalette(PAL2, bg.palette->data);
    VDP_setPalette(PAL1, firePal.data);
    u16 base_tile = TILE_ATTR_FULL(PAL2, FALSE, FALSE, FALSE, 0x290); //TILE_USERINDEX);
    VDP_drawImageEx(PLAN_B, &bg, base_tile, 4, 0, 0, DMA);

    init_palettes();
    load_palette(3, NORMAL_PAL);
}