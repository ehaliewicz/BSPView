#ifndef PALETTE_H
#define PALETTE_H

#include "../res/paldef.h"

#include <genesis.h>

void init_palettes();
const u8 dark_col_lut[16];
const u8 light_col_lut[16];

// GREEN, RED, BLUE, BROWN, STEEL

#define TRANSPARENT_IDX 0x0
#define LIGHT_GREEN_IDX 0x1 
#define LIGHT_RED_IDX   0x2
#define LIGHT_BLUE_IDX  0x3
#define LIGHT_BROWN_IDX 0x4
#define LIGHT_STEEL_IDX 0x5
#define GREEN_IDX       0x6
#define RED_IDX         0x7
#define BLUE_IDX        0x8
#define BROWN_IDX       0x9
#define STEEL_IDX       0xA
#define DARK_GREEN_IDX  0xB
#define DARK_RED_IDX    0xC
#define DARK_BLUE_IDX   0xD
#define DARK_BROWN_IDX  0xE
#define DARK_STEEL_IDX  0xF

typedef enum {
    NORMAL_PAL,
    HURT_PAL
} palette_type;

void load_palette(int palnum, palette_type typ);

u8 calculate_color(u8 col_idx, u32 dist, s8 light_level);
u8 needs_dither(u32 dist);

#endif