#ifndef PALETTE_H
#define PALETTE_H

#include <genesis.h>

void init_palettes();
const u8 dark_col_lut[16];

#define TRANSPARENT_IDX 0x0
#define GREEN_IDX       0x1
#define YELLOW_IDX      0x2
#define RED_IDX         0x3
#define DARK_RED_IDX    0x4
#define STEEL_IDX       0x5
#define BLUE_IDX        0x6
#define ORANGE_IDX      0x7
#define BROWN_IDX       0x8
#define DARK_BROWN_IDX  0x9
#define DARK_STEEL_IDX  0xA
#define DARK_BLUE_IDX   0xB
#define DARK_YELLOW_IDX 0xC
#define DARK_GREEN_IDX  0xD
#define BLACK_IDX       0xE

typedef enum {
    NORMAL_PAL,
    HURT_PAL
} palette_type;

void load_palette(int palnum, palette_type typ);

#endif