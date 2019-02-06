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

const u8 dark_col_lut[16] = {
  0, DARK_GREEN_IDX, DARK_YELLOW_IDX, DARK_RED_IDX,
  DARK_RED_IDX, DARK_STEEL_IDX, DARK_BLUE_IDX, ORANGE_IDX,
  DARK_BROWN_IDX, DARK_BROWN_IDX, DARK_STEEL_IDX, 
  DARK_BLUE_IDX, DARK_YELLOW_IDX, DARK_GREEN_IDX, 14, 15
};


void loadPalette(int palnum) {
  VDP_setPalette(palnum, colors);
}