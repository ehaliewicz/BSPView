#include <genesis.h>
#include "palette.h"


const u16 colors[16] = {
  RGB24_TO_VDPCOLOR(0x000000),   // 0 transparent
  RGB24_TO_VDPCOLOR(0x216a14),   // 1 green
  RGB24_TO_VDPCOLOR(0xe9d805),   // 2 yellow
  RGB24_TO_VDPCOLOR(0xa00018),   // 3 red
  RGB24_TO_VDPCOLOR(0x5d0f13),   // 4 dark red
  RGB24_TO_VDPCOLOR(0x726a8a),   // 5 steel
  RGB24_TO_VDPCOLOR(0x1a0067),   // 6 blue
  RGB24_TO_VDPCOLOR(0x986300),   // 7 orange
  RGB24_TO_VDPCOLOR(0x7f4d2a),   // 8 light brown
  RGB24_TO_VDPCOLOR(0x552605),   // 9 dark brown
  RGB24_TO_VDPCOLOR(0x424247),   // A dark steel
  RGB24_TO_VDPCOLOR(0x0d0051),   // B dark blue
  RGB24_TO_VDPCOLOR(0x746C02),   // C dark yellow
  RGB24_TO_VDPCOLOR(0x173910),   // TODO dark green
  RGB24_TO_VDPCOLOR(0xEEEEEE),
  RGB24_TO_VDPCOLOR(0xFFFFFF)
};

u16 red_colors[16];

u16 redify(u16 color) {
  u8 red = (color >> 1);
  red = min(7, (red + (red >> 2)));
  u8 grn = (color >> 5);
  grn >>= 1;
  u8 blue = (color >> 9);
  blue >>= 1;

  return (blue << 9) | (grn << 5) | (red << 1);
}

const u8 dark_col_lut[16] = {
  0, DARK_GREEN_IDX, DARK_YELLOW_IDX, DARK_RED_IDX,
  DARK_RED_IDX, DARK_STEEL_IDX, DARK_BLUE_IDX, ORANGE_IDX,
  DARK_BROWN_IDX, DARK_BROWN_IDX, DARK_STEEL_IDX, 
  DARK_BLUE_IDX, DARK_YELLOW_IDX, DARK_GREEN_IDX, 14, 15
};

void init_palettes() {
  for(int i = 0; i < 16; i++) {
    red_colors[i] = redify(colors[i]);
  }
}

void load_palette(int palnum, palette_type typ) {
  switch(typ) {
    case HURT_PAL:
    //while(1) { }

      //VDP_setPaletteColors(palnum << 4, red_colors, 16);
      VDP_setPalette(palnum, red_colors);
      break;
    case NORMAL_PAL:
      //VDP_setPaletteColors(palnum << 4, colors, 16);
      VDP_setPalette(palnum, colors);
      break;
  }
}