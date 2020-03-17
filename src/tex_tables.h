#ifndef TEX_TABLES_H
#define TEX_TABLES_H

#include "genesis.h"

void vline_texture_16_c(u8* buf_ptr, u8* tex_ptr, s16 wall_height, s16 skip_top_pixels, s16 skip_bot_pixels);
void vline_texture_32_c(u8* buf_ptr, u8* tex_ptr, s16 wall_height, s16 skip_top_pixels, s16 skip_bot_pixels);


#endif
