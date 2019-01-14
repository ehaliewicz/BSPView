#include <genesis.h>


u16 colors[16] = {
  RGB24_TO_VDPCOLOR(0x000000),   // 0 transparent
  RGB24_TO_VDPCOLOR(0x216a14),   // 1 green
  RGB24_TO_VDPCOLOR(0xe9d805),   // 2 yellow
  RGB24_TO_VDPCOLOR(0xff0034),   // 3 red
  RGB24_TO_VDPCOLOR(0x6d0f23),   // 4 scarlet
  RGB24_TO_VDPCOLOR(0x726a8a),   // 5 steel
  RGB24_TO_VDPCOLOR(0x1a0067),   // 6 blue
  RGB24_TO_VDPCOLOR(0x986300),   // 7 orange
  RGB24_TO_VDPCOLOR(0x7f4d2a),   // 8 light brown
  RGB24_TO_VDPCOLOR(0x552605),   // 9 dark brown
  RGB24_TO_VDPCOLOR(0x464253),   // A dark steel
  RGB24_TO_VDPCOLOR(0x1a0067),   // B dark blue
  RGB24_TO_VDPCOLOR(0xCCCCCC),
  RGB24_TO_VDPCOLOR(0xDDDDDD),
  RGB24_TO_VDPCOLOR(0xEEEEEE),
  RGB24_TO_VDPCOLOR(0xFFFFFF)
};


void loadPalette(int palnum) {
  VDP_setPalette(palnum, colors);
}