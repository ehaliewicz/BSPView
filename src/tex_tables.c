#include "genesis.h"
void draw_16_tex_to_1_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*512)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
  };
  return;
}
void draw_16_tex_to_2_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*256)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[8];
  };
  return;
}
void draw_16_tex_to_3_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*170)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[5];
    case 2: 
      buf_ptr[4] = tex_ptr[10];
  };
  return;
}
void draw_16_tex_to_4_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*128)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[4];
    case 2: 
      buf_ptr[4] = tex_ptr[8];
    case 3: 
      buf_ptr[6] = tex_ptr[12];
  };
  return;
}
void draw_16_tex_to_5_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*102)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[3];
    case 2: 
      buf_ptr[4] = tex_ptr[6];
    case 3: 
      buf_ptr[6] = tex_ptr[9];
    case 4: 
      buf_ptr[8] = tex_ptr[12];
  };
  return;
}
void draw_16_tex_to_6_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*85)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[2];
    case 2: 
      buf_ptr[4] = tex_ptr[5];
    case 3: 
      buf_ptr[6] = tex_ptr[8];
    case 4: 
      buf_ptr[8] = tex_ptr[10];
    case 5: 
      buf_ptr[10] = tex_ptr[13];
  };
  return;
}
void draw_16_tex_to_7_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*73)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[2];
    case 2: 
      buf_ptr[4] = tex_ptr[4];
    case 3: 
      buf_ptr[6] = tex_ptr[6];
    case 4: 
      buf_ptr[8] = tex_ptr[9];
    case 5: 
      buf_ptr[10] = tex_ptr[11];
    case 6: 
      buf_ptr[12] = tex_ptr[13];
  };
  return;
}
void draw_16_tex_to_8_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*64)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[2];
    case 2: 
      buf_ptr[4] = tex_ptr[4];
    case 3: 
      buf_ptr[6] = tex_ptr[6];
    case 4: 
      buf_ptr[8] = tex_ptr[8];
    case 5: 
      buf_ptr[10] = tex_ptr[10];
    case 6: 
      buf_ptr[12] = tex_ptr[12];
    case 7: 
      buf_ptr[14] = tex_ptr[14];
  };
  return;
}
void draw_16_tex_to_9_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*56)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[3];
    case 3: 
      buf_ptr[6] = tex_ptr[5];
    case 4: 
      buf_ptr[8] = tex_ptr[7];
    case 5: 
      buf_ptr[10] = tex_ptr[8];
    case 6: 
      buf_ptr[12] = tex_ptr[10];
    case 7: 
      buf_ptr[14] = tex_ptr[12];
    case 8: 
      buf_ptr[16] = tex_ptr[14];
  };
  return;
}
void draw_16_tex_to_10_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*51)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[3];
    case 3: 
      buf_ptr[6] = tex_ptr[4];
    case 4: 
      buf_ptr[8] = tex_ptr[6];
    case 5: 
      buf_ptr[10] = tex_ptr[8];
    case 6: 
      buf_ptr[12] = tex_ptr[9];
    case 7: 
      buf_ptr[14] = tex_ptr[11];
    case 8: 
      buf_ptr[16] = tex_ptr[12];
    case 9: 
      buf_ptr[18] = tex_ptr[14];
  };
  return;
}
void draw_16_tex_to_11_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*46)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[4];
    case 4: 
      buf_ptr[8] = tex_ptr[5];
    case 5: 
      buf_ptr[10] = tex_ptr[7];
    case 6: 
      buf_ptr[12] = tex_ptr[8];
    case 7: 
      buf_ptr[14] = tex_ptr[10];
    case 8: 
      buf_ptr[16] = tex_ptr[11];
    case 9: 
      buf_ptr[18] = tex_ptr[13];
    case 10: 
      buf_ptr[20] = tex_ptr[14];
  };
  return;
}
void draw_16_tex_to_12_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*42)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[4];
    case 4: 
      buf_ptr[8] = tex_ptr[5];
    case 5: 
      buf_ptr[10] = tex_ptr[6];
    case 6: 
      buf_ptr[12] = tex_ptr[7];
    case 7: 
      buf_ptr[14] = tex_ptr[9];
    case 8: 
      buf_ptr[16] = tex_ptr[10];
    case 9: 
      buf_ptr[18] = tex_ptr[12];
    case 10: 
      buf_ptr[20] = tex_ptr[13];
    case 11: 
      buf_ptr[22] = tex_ptr[14];
  };
  return;
}
void draw_16_tex_to_13_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*39)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[3];
    case 4: 
      buf_ptr[8] = tex_ptr[4];
    case 5: 
      buf_ptr[10] = tex_ptr[6];
    case 6: 
      buf_ptr[12] = tex_ptr[7];
    case 7: 
      buf_ptr[14] = tex_ptr[8];
    case 8: 
      buf_ptr[16] = tex_ptr[9];
    case 9: 
      buf_ptr[18] = tex_ptr[11];
    case 10: 
      buf_ptr[20] = tex_ptr[12];
    case 11: 
      buf_ptr[22] = tex_ptr[13];
    case 12: 
      buf_ptr[24] = tex_ptr[14];
  };
  return;
}
void draw_16_tex_to_14_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*36)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[3];
    case 4: 
      buf_ptr[8] = tex_ptr[4];
    case 5: 
      buf_ptr[10] = tex_ptr[5];
    case 6: 
      buf_ptr[12] = tex_ptr[6];
    case 7: 
      buf_ptr[14] = tex_ptr[7];
    case 8: 
      buf_ptr[16] = tex_ptr[9];
    case 9: 
      buf_ptr[18] = tex_ptr[10];
    case 10: 
      buf_ptr[20] = tex_ptr[11];
    case 11: 
      buf_ptr[22] = tex_ptr[12];
    case 12: 
      buf_ptr[24] = tex_ptr[13];
    case 13: 
      buf_ptr[26] = tex_ptr[14];
  };
  return;
}
void draw_16_tex_to_15_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*34)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[3];
    case 4: 
      buf_ptr[8] = tex_ptr[4];
    case 5: 
      buf_ptr[10] = tex_ptr[5];
    case 6: 
      buf_ptr[12] = tex_ptr[6];
    case 7: 
      buf_ptr[14] = tex_ptr[7];
    case 8: 
      buf_ptr[16] = tex_ptr[8];
    case 9: 
      buf_ptr[18] = tex_ptr[9];
    case 10: 
      buf_ptr[20] = tex_ptr[10];
    case 11: 
      buf_ptr[22] = tex_ptr[11];
    case 12: 
      buf_ptr[24] = tex_ptr[12];
    case 13: 
      buf_ptr[26] = tex_ptr[13];
    case 14: 
      buf_ptr[28] = tex_ptr[14];
  };
  return;
}
void draw_16_tex_to_16_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr++;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_17_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_18_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_19_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_20_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_21_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_22_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_23_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_24_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_25_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_26_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_27_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_28_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_29_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_30_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_31_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_32_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_33_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_34_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_35_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_36_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_37_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_38_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_39_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_40_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_41_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_42_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_43_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_44_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_45_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_46_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_47_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_48_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_49_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_50_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_51_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_52_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_53_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_54_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_55_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_56_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_57_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_58_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_59_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_60_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_61_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_62_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_63_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_64_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_65_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_66_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_67_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_68_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_69_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_70_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_71_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_72_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_73_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_74_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_75_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_76_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_77_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_78_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_79_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_80_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_81_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_82_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_83_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_84_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_85_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_86_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_87_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_88_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_89_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_90_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_91_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_92_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_93_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_94_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_95_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_96_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_97_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_98_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_99_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr++;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_100_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_101_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr++;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_102_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr++;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_103_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr++;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_104_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr++;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_105_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr++;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_106_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr++;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr++;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_107_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr++;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_108_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr++;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr++;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_109_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr++;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr++;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_110_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr++;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr++;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_111_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr++;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr++;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_112_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr++;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr++;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_113_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr++;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr++;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_114_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr++;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr++;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr++;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_115_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr++;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr++;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_116_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr++;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr++;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr++;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_117_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr++;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr++;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr++;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_118_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr++;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr++;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr++;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr;
    case 117: 
      buf_ptr[234] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_119_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr++;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr++;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr++;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr;
    case 117: 
      buf_ptr[234] = *tex_ptr;
    case 118: 
      buf_ptr[236] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_120_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr++;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr++;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr++;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr;
    case 117: 
      buf_ptr[234] = *tex_ptr;
    case 118: 
      buf_ptr[236] = *tex_ptr;
    case 119: 
      buf_ptr[238] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_121_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr++;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr++;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr++;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr;
    case 117: 
      buf_ptr[234] = *tex_ptr;
    case 118: 
      buf_ptr[236] = *tex_ptr;
    case 119: 
      buf_ptr[238] = *tex_ptr;
    case 120: 
      buf_ptr[240] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_122_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr++;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr++;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr++;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr;
    case 117: 
      buf_ptr[234] = *tex_ptr;
    case 118: 
      buf_ptr[236] = *tex_ptr;
    case 119: 
      buf_ptr[238] = *tex_ptr;
    case 120: 
      buf_ptr[240] = *tex_ptr;
    case 121: 
      buf_ptr[242] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_123_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr++;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr++;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr++;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr++;
    case 116: 
      buf_ptr[232] = *tex_ptr;
    case 117: 
      buf_ptr[234] = *tex_ptr;
    case 118: 
      buf_ptr[236] = *tex_ptr;
    case 119: 
      buf_ptr[238] = *tex_ptr;
    case 120: 
      buf_ptr[240] = *tex_ptr;
    case 121: 
      buf_ptr[242] = *tex_ptr;
    case 122: 
      buf_ptr[244] = *tex_ptr++;
  };
  return;
}
void draw_16_tex_to_124_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr++;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr++;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr++;
    case 117: 
      buf_ptr[234] = *tex_ptr;
    case 118: 
      buf_ptr[236] = *tex_ptr;
    case 119: 
      buf_ptr[238] = *tex_ptr;
    case 120: 
      buf_ptr[240] = *tex_ptr;
    case 121: 
      buf_ptr[242] = *tex_ptr;
    case 122: 
      buf_ptr[244] = *tex_ptr;
    case 123: 
      buf_ptr[246] = *tex_ptr;
  };
  return;
}
void draw_16_tex_to_125_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr++;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr++;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr;
    case 117: 
      buf_ptr[234] = *tex_ptr++;
    case 118: 
      buf_ptr[236] = *tex_ptr;
    case 119: 
      buf_ptr[238] = *tex_ptr;
    case 120: 
      buf_ptr[240] = *tex_ptr;
    case 121: 
      buf_ptr[242] = *tex_ptr;
    case 122: 
      buf_ptr[244] = *tex_ptr;
    case 123: 
      buf_ptr[246] = *tex_ptr;
    case 124: 
      buf_ptr[248] = *tex_ptr++;
  };
  return;
}
void (*jmp_16[126])(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) = {
  NULL,
  draw_16_tex_to_1_pixels,
  draw_16_tex_to_2_pixels,
  draw_16_tex_to_3_pixels,
  draw_16_tex_to_4_pixels,
  draw_16_tex_to_5_pixels,
  draw_16_tex_to_6_pixels,
  draw_16_tex_to_7_pixels,
  draw_16_tex_to_8_pixels,
  draw_16_tex_to_9_pixels,
  draw_16_tex_to_10_pixels,
  draw_16_tex_to_11_pixels,
  draw_16_tex_to_12_pixels,
  draw_16_tex_to_13_pixels,
  draw_16_tex_to_14_pixels,
  draw_16_tex_to_15_pixels,
  draw_16_tex_to_16_pixels,
  draw_16_tex_to_17_pixels,
  draw_16_tex_to_18_pixels,
  draw_16_tex_to_19_pixels,
  draw_16_tex_to_20_pixels,
  draw_16_tex_to_21_pixels,
  draw_16_tex_to_22_pixels,
  draw_16_tex_to_23_pixels,
  draw_16_tex_to_24_pixels,
  draw_16_tex_to_25_pixels,
  draw_16_tex_to_26_pixels,
  draw_16_tex_to_27_pixels,
  draw_16_tex_to_28_pixels,
  draw_16_tex_to_29_pixels,
  draw_16_tex_to_30_pixels,
  draw_16_tex_to_31_pixels,
  draw_16_tex_to_32_pixels,
  draw_16_tex_to_33_pixels,
  draw_16_tex_to_34_pixels,
  draw_16_tex_to_35_pixels,
  draw_16_tex_to_36_pixels,
  draw_16_tex_to_37_pixels,
  draw_16_tex_to_38_pixels,
  draw_16_tex_to_39_pixels,
  draw_16_tex_to_40_pixels,
  draw_16_tex_to_41_pixels,
  draw_16_tex_to_42_pixels,
  draw_16_tex_to_43_pixels,
  draw_16_tex_to_44_pixels,
  draw_16_tex_to_45_pixels,
  draw_16_tex_to_46_pixels,
  draw_16_tex_to_47_pixels,
  draw_16_tex_to_48_pixels,
  draw_16_tex_to_49_pixels,
  draw_16_tex_to_50_pixels,
  draw_16_tex_to_51_pixels,
  draw_16_tex_to_52_pixels,
  draw_16_tex_to_53_pixels,
  draw_16_tex_to_54_pixels,
  draw_16_tex_to_55_pixels,
  draw_16_tex_to_56_pixels,
  draw_16_tex_to_57_pixels,
  draw_16_tex_to_58_pixels,
  draw_16_tex_to_59_pixels,
  draw_16_tex_to_60_pixels,
  draw_16_tex_to_61_pixels,
  draw_16_tex_to_62_pixels,
  draw_16_tex_to_63_pixels,
  draw_16_tex_to_64_pixels,
  draw_16_tex_to_65_pixels,
  draw_16_tex_to_66_pixels,
  draw_16_tex_to_67_pixels,
  draw_16_tex_to_68_pixels,
  draw_16_tex_to_69_pixels,
  draw_16_tex_to_70_pixels,
  draw_16_tex_to_71_pixels,
  draw_16_tex_to_72_pixels,
  draw_16_tex_to_73_pixels,
  draw_16_tex_to_74_pixels,
  draw_16_tex_to_75_pixels,
  draw_16_tex_to_76_pixels,
  draw_16_tex_to_77_pixels,
  draw_16_tex_to_78_pixels,
  draw_16_tex_to_79_pixels,
  draw_16_tex_to_80_pixels,
  draw_16_tex_to_81_pixels,
  draw_16_tex_to_82_pixels,
  draw_16_tex_to_83_pixels,
  draw_16_tex_to_84_pixels,
  draw_16_tex_to_85_pixels,
  draw_16_tex_to_86_pixels,
  draw_16_tex_to_87_pixels,
  draw_16_tex_to_88_pixels,
  draw_16_tex_to_89_pixels,
  draw_16_tex_to_90_pixels,
  draw_16_tex_to_91_pixels,
  draw_16_tex_to_92_pixels,
  draw_16_tex_to_93_pixels,
  draw_16_tex_to_94_pixels,
  draw_16_tex_to_95_pixels,
  draw_16_tex_to_96_pixels,
  draw_16_tex_to_97_pixels,
  draw_16_tex_to_98_pixels,
  draw_16_tex_to_99_pixels,
  draw_16_tex_to_100_pixels,
  draw_16_tex_to_101_pixels,
  draw_16_tex_to_102_pixels,
  draw_16_tex_to_103_pixels,
  draw_16_tex_to_104_pixels,
  draw_16_tex_to_105_pixels,
  draw_16_tex_to_106_pixels,
  draw_16_tex_to_107_pixels,
  draw_16_tex_to_108_pixels,
  draw_16_tex_to_109_pixels,
  draw_16_tex_to_110_pixels,
  draw_16_tex_to_111_pixels,
  draw_16_tex_to_112_pixels,
  draw_16_tex_to_113_pixels,
  draw_16_tex_to_114_pixels,
  draw_16_tex_to_115_pixels,
  draw_16_tex_to_116_pixels,
  draw_16_tex_to_117_pixels,
  draw_16_tex_to_118_pixels,
  draw_16_tex_to_119_pixels,
  draw_16_tex_to_120_pixels,
  draw_16_tex_to_121_pixels,
  draw_16_tex_to_122_pixels,
  draw_16_tex_to_123_pixels,
  draw_16_tex_to_124_pixels,
  draw_16_tex_to_125_pixels,
};
void vline_texture_16_c(u8* buf_ptr, u8* tex_ptr, s16 wall_height, s16 skip_top_pixels, s16 skip_bot_pixels) {
  int total_skip = skip_top_pixels + skip_bot_pixels;
  buf_ptr = buf_ptr - (total_skip*2);
  jmp_16[wall_height](buf_ptr, tex_ptr, skip_top_pixels, skip_bot_pixels);
}
void draw_32_tex_to_1_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*1024)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
  };
  return;
}
void draw_32_tex_to_2_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*512)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[16];
  };
  return;
}
void draw_32_tex_to_3_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*341)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[10];
    case 2: 
      buf_ptr[4] = tex_ptr[21];
  };
  return;
}
void draw_32_tex_to_4_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*256)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[8];
    case 2: 
      buf_ptr[4] = tex_ptr[16];
    case 3: 
      buf_ptr[6] = tex_ptr[24];
  };
  return;
}
void draw_32_tex_to_5_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*204)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[6];
    case 2: 
      buf_ptr[4] = tex_ptr[12];
    case 3: 
      buf_ptr[6] = tex_ptr[19];
    case 4: 
      buf_ptr[8] = tex_ptr[25];
  };
  return;
}
void draw_32_tex_to_6_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*170)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[5];
    case 2: 
      buf_ptr[4] = tex_ptr[10];
    case 3: 
      buf_ptr[6] = tex_ptr[16];
    case 4: 
      buf_ptr[8] = tex_ptr[21];
    case 5: 
      buf_ptr[10] = tex_ptr[26];
  };
  return;
}
void draw_32_tex_to_7_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*146)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[4];
    case 2: 
      buf_ptr[4] = tex_ptr[9];
    case 3: 
      buf_ptr[6] = tex_ptr[13];
    case 4: 
      buf_ptr[8] = tex_ptr[18];
    case 5: 
      buf_ptr[10] = tex_ptr[22];
    case 6: 
      buf_ptr[12] = tex_ptr[27];
  };
  return;
}
void draw_32_tex_to_8_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*128)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[4];
    case 2: 
      buf_ptr[4] = tex_ptr[8];
    case 3: 
      buf_ptr[6] = tex_ptr[12];
    case 4: 
      buf_ptr[8] = tex_ptr[16];
    case 5: 
      buf_ptr[10] = tex_ptr[20];
    case 6: 
      buf_ptr[12] = tex_ptr[24];
    case 7: 
      buf_ptr[14] = tex_ptr[28];
  };
  return;
}
void draw_32_tex_to_9_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*113)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[3];
    case 2: 
      buf_ptr[4] = tex_ptr[7];
    case 3: 
      buf_ptr[6] = tex_ptr[10];
    case 4: 
      buf_ptr[8] = tex_ptr[14];
    case 5: 
      buf_ptr[10] = tex_ptr[17];
    case 6: 
      buf_ptr[12] = tex_ptr[21];
    case 7: 
      buf_ptr[14] = tex_ptr[24];
    case 8: 
      buf_ptr[16] = tex_ptr[28];
  };
  return;
}
void draw_32_tex_to_10_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*102)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[3];
    case 2: 
      buf_ptr[4] = tex_ptr[6];
    case 3: 
      buf_ptr[6] = tex_ptr[9];
    case 4: 
      buf_ptr[8] = tex_ptr[12];
    case 5: 
      buf_ptr[10] = tex_ptr[16];
    case 6: 
      buf_ptr[12] = tex_ptr[19];
    case 7: 
      buf_ptr[14] = tex_ptr[22];
    case 8: 
      buf_ptr[16] = tex_ptr[25];
    case 9: 
      buf_ptr[18] = tex_ptr[28];
  };
  return;
}
void draw_32_tex_to_11_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*93)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[2];
    case 2: 
      buf_ptr[4] = tex_ptr[5];
    case 3: 
      buf_ptr[6] = tex_ptr[8];
    case 4: 
      buf_ptr[8] = tex_ptr[11];
    case 5: 
      buf_ptr[10] = tex_ptr[14];
    case 6: 
      buf_ptr[12] = tex_ptr[17];
    case 7: 
      buf_ptr[14] = tex_ptr[20];
    case 8: 
      buf_ptr[16] = tex_ptr[23];
    case 9: 
      buf_ptr[18] = tex_ptr[26];
    case 10: 
      buf_ptr[20] = tex_ptr[29];
  };
  return;
}
void draw_32_tex_to_12_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*85)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[2];
    case 2: 
      buf_ptr[4] = tex_ptr[5];
    case 3: 
      buf_ptr[6] = tex_ptr[8];
    case 4: 
      buf_ptr[8] = tex_ptr[10];
    case 5: 
      buf_ptr[10] = tex_ptr[13];
    case 6: 
      buf_ptr[12] = tex_ptr[15];
    case 7: 
      buf_ptr[14] = tex_ptr[18];
    case 8: 
      buf_ptr[16] = tex_ptr[21];
    case 9: 
      buf_ptr[18] = tex_ptr[24];
    case 10: 
      buf_ptr[20] = tex_ptr[26];
    case 11: 
      buf_ptr[22] = tex_ptr[29];
  };
  return;
}
void draw_32_tex_to_13_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*78)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[2];
    case 2: 
      buf_ptr[4] = tex_ptr[4];
    case 3: 
      buf_ptr[6] = tex_ptr[7];
    case 4: 
      buf_ptr[8] = tex_ptr[9];
    case 5: 
      buf_ptr[10] = tex_ptr[12];
    case 6: 
      buf_ptr[12] = tex_ptr[14];
    case 7: 
      buf_ptr[14] = tex_ptr[17];
    case 8: 
      buf_ptr[16] = tex_ptr[19];
    case 9: 
      buf_ptr[18] = tex_ptr[22];
    case 10: 
      buf_ptr[20] = tex_ptr[24];
    case 11: 
      buf_ptr[22] = tex_ptr[27];
    case 12: 
      buf_ptr[24] = tex_ptr[29];
  };
  return;
}
void draw_32_tex_to_14_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*73)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[2];
    case 2: 
      buf_ptr[4] = tex_ptr[4];
    case 3: 
      buf_ptr[6] = tex_ptr[6];
    case 4: 
      buf_ptr[8] = tex_ptr[9];
    case 5: 
      buf_ptr[10] = tex_ptr[11];
    case 6: 
      buf_ptr[12] = tex_ptr[13];
    case 7: 
      buf_ptr[14] = tex_ptr[15];
    case 8: 
      buf_ptr[16] = tex_ptr[18];
    case 9: 
      buf_ptr[18] = tex_ptr[20];
    case 10: 
      buf_ptr[20] = tex_ptr[22];
    case 11: 
      buf_ptr[22] = tex_ptr[25];
    case 12: 
      buf_ptr[24] = tex_ptr[27];
    case 13: 
      buf_ptr[26] = tex_ptr[29];
  };
  return;
}
void draw_32_tex_to_15_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*68)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[2];
    case 2: 
      buf_ptr[4] = tex_ptr[4];
    case 3: 
      buf_ptr[6] = tex_ptr[6];
    case 4: 
      buf_ptr[8] = tex_ptr[8];
    case 5: 
      buf_ptr[10] = tex_ptr[10];
    case 6: 
      buf_ptr[12] = tex_ptr[12];
    case 7: 
      buf_ptr[14] = tex_ptr[14];
    case 8: 
      buf_ptr[16] = tex_ptr[17];
    case 9: 
      buf_ptr[18] = tex_ptr[19];
    case 10: 
      buf_ptr[20] = tex_ptr[21];
    case 11: 
      buf_ptr[22] = tex_ptr[23];
    case 12: 
      buf_ptr[24] = tex_ptr[25];
    case 13: 
      buf_ptr[26] = tex_ptr[27];
    case 14: 
      buf_ptr[28] = tex_ptr[29];
  };
  return;
}
void draw_32_tex_to_16_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*64)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[2];
    case 2: 
      buf_ptr[4] = tex_ptr[4];
    case 3: 
      buf_ptr[6] = tex_ptr[6];
    case 4: 
      buf_ptr[8] = tex_ptr[8];
    case 5: 
      buf_ptr[10] = tex_ptr[10];
    case 6: 
      buf_ptr[12] = tex_ptr[12];
    case 7: 
      buf_ptr[14] = tex_ptr[14];
    case 8: 
      buf_ptr[16] = tex_ptr[16];
    case 9: 
      buf_ptr[18] = tex_ptr[18];
    case 10: 
      buf_ptr[20] = tex_ptr[20];
    case 11: 
      buf_ptr[22] = tex_ptr[22];
    case 12: 
      buf_ptr[24] = tex_ptr[24];
    case 13: 
      buf_ptr[26] = tex_ptr[26];
    case 14: 
      buf_ptr[28] = tex_ptr[28];
    case 15: 
      buf_ptr[30] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_17_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*60)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[3];
    case 3: 
      buf_ptr[6] = tex_ptr[5];
    case 4: 
      buf_ptr[8] = tex_ptr[7];
    case 5: 
      buf_ptr[10] = tex_ptr[9];
    case 6: 
      buf_ptr[12] = tex_ptr[11];
    case 7: 
      buf_ptr[14] = tex_ptr[13];
    case 8: 
      buf_ptr[16] = tex_ptr[15];
    case 9: 
      buf_ptr[18] = tex_ptr[16];
    case 10: 
      buf_ptr[20] = tex_ptr[18];
    case 11: 
      buf_ptr[22] = tex_ptr[20];
    case 12: 
      buf_ptr[24] = tex_ptr[22];
    case 13: 
      buf_ptr[26] = tex_ptr[24];
    case 14: 
      buf_ptr[28] = tex_ptr[26];
    case 15: 
      buf_ptr[30] = tex_ptr[28];
    case 16: 
      buf_ptr[32] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_18_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*56)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[3];
    case 3: 
      buf_ptr[6] = tex_ptr[5];
    case 4: 
      buf_ptr[8] = tex_ptr[7];
    case 5: 
      buf_ptr[10] = tex_ptr[8];
    case 6: 
      buf_ptr[12] = tex_ptr[10];
    case 7: 
      buf_ptr[14] = tex_ptr[12];
    case 8: 
      buf_ptr[16] = tex_ptr[14];
    case 9: 
      buf_ptr[18] = tex_ptr[16];
    case 10: 
      buf_ptr[20] = tex_ptr[17];
    case 11: 
      buf_ptr[22] = tex_ptr[19];
    case 12: 
      buf_ptr[24] = tex_ptr[21];
    case 13: 
      buf_ptr[26] = tex_ptr[23];
    case 14: 
      buf_ptr[28] = tex_ptr[24];
    case 15: 
      buf_ptr[30] = tex_ptr[26];
    case 16: 
      buf_ptr[32] = tex_ptr[28];
    case 17: 
      buf_ptr[34] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_19_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*53)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[3];
    case 3: 
      buf_ptr[6] = tex_ptr[5];
    case 4: 
      buf_ptr[8] = tex_ptr[6];
    case 5: 
      buf_ptr[10] = tex_ptr[8];
    case 6: 
      buf_ptr[12] = tex_ptr[10];
    case 7: 
      buf_ptr[14] = tex_ptr[11];
    case 8: 
      buf_ptr[16] = tex_ptr[13];
    case 9: 
      buf_ptr[18] = tex_ptr[15];
    case 10: 
      buf_ptr[20] = tex_ptr[16];
    case 11: 
      buf_ptr[22] = tex_ptr[18];
    case 12: 
      buf_ptr[24] = tex_ptr[20];
    case 13: 
      buf_ptr[26] = tex_ptr[21];
    case 14: 
      buf_ptr[28] = tex_ptr[23];
    case 15: 
      buf_ptr[30] = tex_ptr[25];
    case 16: 
      buf_ptr[32] = tex_ptr[26];
    case 17: 
      buf_ptr[34] = tex_ptr[28];
    case 18: 
      buf_ptr[36] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_20_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*51)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[3];
    case 3: 
      buf_ptr[6] = tex_ptr[4];
    case 4: 
      buf_ptr[8] = tex_ptr[6];
    case 5: 
      buf_ptr[10] = tex_ptr[8];
    case 6: 
      buf_ptr[12] = tex_ptr[9];
    case 7: 
      buf_ptr[14] = tex_ptr[11];
    case 8: 
      buf_ptr[16] = tex_ptr[12];
    case 9: 
      buf_ptr[18] = tex_ptr[14];
    case 10: 
      buf_ptr[20] = tex_ptr[15];
    case 11: 
      buf_ptr[22] = tex_ptr[17];
    case 12: 
      buf_ptr[24] = tex_ptr[19];
    case 13: 
      buf_ptr[26] = tex_ptr[20];
    case 14: 
      buf_ptr[28] = tex_ptr[22];
    case 15: 
      buf_ptr[30] = tex_ptr[24];
    case 16: 
      buf_ptr[32] = tex_ptr[25];
    case 17: 
      buf_ptr[34] = tex_ptr[27];
    case 18: 
      buf_ptr[36] = tex_ptr[28];
    case 19: 
      buf_ptr[38] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_21_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*48)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[3];
    case 3: 
      buf_ptr[6] = tex_ptr[4];
    case 4: 
      buf_ptr[8] = tex_ptr[6];
    case 5: 
      buf_ptr[10] = tex_ptr[7];
    case 6: 
      buf_ptr[12] = tex_ptr[9];
    case 7: 
      buf_ptr[14] = tex_ptr[10];
    case 8: 
      buf_ptr[16] = tex_ptr[12];
    case 9: 
      buf_ptr[18] = tex_ptr[13];
    case 10: 
      buf_ptr[20] = tex_ptr[15];
    case 11: 
      buf_ptr[22] = tex_ptr[16];
    case 12: 
      buf_ptr[24] = tex_ptr[18];
    case 13: 
      buf_ptr[26] = tex_ptr[19];
    case 14: 
      buf_ptr[28] = tex_ptr[21];
    case 15: 
      buf_ptr[30] = tex_ptr[22];
    case 16: 
      buf_ptr[32] = tex_ptr[24];
    case 17: 
      buf_ptr[34] = tex_ptr[25];
    case 18: 
      buf_ptr[36] = tex_ptr[27];
    case 19: 
      buf_ptr[38] = tex_ptr[28];
    case 20: 
      buf_ptr[40] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_22_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*46)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[4];
    case 4: 
      buf_ptr[8] = tex_ptr[5];
    case 5: 
      buf_ptr[10] = tex_ptr[7];
    case 6: 
      buf_ptr[12] = tex_ptr[8];
    case 7: 
      buf_ptr[14] = tex_ptr[10];
    case 8: 
      buf_ptr[16] = tex_ptr[11];
    case 9: 
      buf_ptr[18] = tex_ptr[13];
    case 10: 
      buf_ptr[20] = tex_ptr[14];
    case 11: 
      buf_ptr[22] = tex_ptr[16];
    case 12: 
      buf_ptr[24] = tex_ptr[17];
    case 13: 
      buf_ptr[26] = tex_ptr[18];
    case 14: 
      buf_ptr[28] = tex_ptr[20];
    case 15: 
      buf_ptr[30] = tex_ptr[21];
    case 16: 
      buf_ptr[32] = tex_ptr[23];
    case 17: 
      buf_ptr[34] = tex_ptr[24];
    case 18: 
      buf_ptr[36] = tex_ptr[26];
    case 19: 
      buf_ptr[38] = tex_ptr[27];
    case 20: 
      buf_ptr[40] = tex_ptr[29];
    case 21: 
      buf_ptr[42] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_23_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*44)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[4];
    case 4: 
      buf_ptr[8] = tex_ptr[5];
    case 5: 
      buf_ptr[10] = tex_ptr[6];
    case 6: 
      buf_ptr[12] = tex_ptr[8];
    case 7: 
      buf_ptr[14] = tex_ptr[9];
    case 8: 
      buf_ptr[16] = tex_ptr[11];
    case 9: 
      buf_ptr[18] = tex_ptr[12];
    case 10: 
      buf_ptr[20] = tex_ptr[13];
    case 11: 
      buf_ptr[22] = tex_ptr[15];
    case 12: 
      buf_ptr[24] = tex_ptr[16];
    case 13: 
      buf_ptr[26] = tex_ptr[18];
    case 14: 
      buf_ptr[28] = tex_ptr[19];
    case 15: 
      buf_ptr[30] = tex_ptr[20];
    case 16: 
      buf_ptr[32] = tex_ptr[22];
    case 17: 
      buf_ptr[34] = tex_ptr[23];
    case 18: 
      buf_ptr[36] = tex_ptr[25];
    case 19: 
      buf_ptr[38] = tex_ptr[26];
    case 20: 
      buf_ptr[40] = tex_ptr[27];
    case 21: 
      buf_ptr[42] = tex_ptr[29];
    case 22: 
      buf_ptr[44] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_24_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*42)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[4];
    case 4: 
      buf_ptr[8] = tex_ptr[5];
    case 5: 
      buf_ptr[10] = tex_ptr[6];
    case 6: 
      buf_ptr[12] = tex_ptr[7];
    case 7: 
      buf_ptr[14] = tex_ptr[9];
    case 8: 
      buf_ptr[16] = tex_ptr[10];
    case 9: 
      buf_ptr[18] = tex_ptr[12];
    case 10: 
      buf_ptr[20] = tex_ptr[13];
    case 11: 
      buf_ptr[22] = tex_ptr[14];
    case 12: 
      buf_ptr[24] = tex_ptr[16];
    case 13: 
      buf_ptr[26] = tex_ptr[17];
    case 14: 
      buf_ptr[28] = tex_ptr[18];
    case 15: 
      buf_ptr[30] = tex_ptr[19];
    case 16: 
      buf_ptr[32] = tex_ptr[21];
    case 17: 
      buf_ptr[34] = tex_ptr[22];
    case 18: 
      buf_ptr[36] = tex_ptr[23];
    case 19: 
      buf_ptr[38] = tex_ptr[25];
    case 20: 
      buf_ptr[40] = tex_ptr[26];
    case 21: 
      buf_ptr[42] = tex_ptr[27];
    case 22: 
      buf_ptr[44] = tex_ptr[29];
    case 23: 
      buf_ptr[46] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_25_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*40)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[3];
    case 4: 
      buf_ptr[8] = tex_ptr[5];
    case 5: 
      buf_ptr[10] = tex_ptr[6];
    case 6: 
      buf_ptr[12] = tex_ptr[7];
    case 7: 
      buf_ptr[14] = tex_ptr[8];
    case 8: 
      buf_ptr[16] = tex_ptr[10];
    case 9: 
      buf_ptr[18] = tex_ptr[11];
    case 10: 
      buf_ptr[20] = tex_ptr[12];
    case 11: 
      buf_ptr[22] = tex_ptr[14];
    case 12: 
      buf_ptr[24] = tex_ptr[15];
    case 13: 
      buf_ptr[26] = tex_ptr[16];
    case 14: 
      buf_ptr[28] = tex_ptr[17];
    case 15: 
      buf_ptr[30] = tex_ptr[19];
    case 16: 
      buf_ptr[32] = tex_ptr[20];
    case 17: 
      buf_ptr[34] = tex_ptr[21];
    case 18: 
      buf_ptr[36] = tex_ptr[23];
    case 19: 
      buf_ptr[38] = tex_ptr[24];
    case 20: 
      buf_ptr[40] = tex_ptr[25];
    case 21: 
      buf_ptr[42] = tex_ptr[26];
    case 22: 
      buf_ptr[44] = tex_ptr[28];
    case 23: 
      buf_ptr[46] = tex_ptr[29];
    case 24: 
      buf_ptr[48] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_26_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*39)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[3];
    case 4: 
      buf_ptr[8] = tex_ptr[4];
    case 5: 
      buf_ptr[10] = tex_ptr[6];
    case 6: 
      buf_ptr[12] = tex_ptr[7];
    case 7: 
      buf_ptr[14] = tex_ptr[8];
    case 8: 
      buf_ptr[16] = tex_ptr[9];
    case 9: 
      buf_ptr[18] = tex_ptr[11];
    case 10: 
      buf_ptr[20] = tex_ptr[12];
    case 11: 
      buf_ptr[22] = tex_ptr[13];
    case 12: 
      buf_ptr[24] = tex_ptr[14];
    case 13: 
      buf_ptr[26] = tex_ptr[15];
    case 14: 
      buf_ptr[28] = tex_ptr[17];
    case 15: 
      buf_ptr[30] = tex_ptr[18];
    case 16: 
      buf_ptr[32] = tex_ptr[19];
    case 17: 
      buf_ptr[34] = tex_ptr[20];
    case 18: 
      buf_ptr[36] = tex_ptr[22];
    case 19: 
      buf_ptr[38] = tex_ptr[23];
    case 20: 
      buf_ptr[40] = tex_ptr[24];
    case 21: 
      buf_ptr[42] = tex_ptr[25];
    case 22: 
      buf_ptr[44] = tex_ptr[27];
    case 23: 
      buf_ptr[46] = tex_ptr[28];
    case 24: 
      buf_ptr[48] = tex_ptr[29];
    case 25: 
      buf_ptr[50] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_27_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*37)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[3];
    case 4: 
      buf_ptr[8] = tex_ptr[4];
    case 5: 
      buf_ptr[10] = tex_ptr[5];
    case 6: 
      buf_ptr[12] = tex_ptr[7];
    case 7: 
      buf_ptr[14] = tex_ptr[8];
    case 8: 
      buf_ptr[16] = tex_ptr[9];
    case 9: 
      buf_ptr[18] = tex_ptr[10];
    case 10: 
      buf_ptr[20] = tex_ptr[11];
    case 11: 
      buf_ptr[22] = tex_ptr[13];
    case 12: 
      buf_ptr[24] = tex_ptr[14];
    case 13: 
      buf_ptr[26] = tex_ptr[15];
    case 14: 
      buf_ptr[28] = tex_ptr[16];
    case 15: 
      buf_ptr[30] = tex_ptr[17];
    case 16: 
      buf_ptr[32] = tex_ptr[18];
    case 17: 
      buf_ptr[34] = tex_ptr[20];
    case 18: 
      buf_ptr[36] = tex_ptr[21];
    case 19: 
      buf_ptr[38] = tex_ptr[22];
    case 20: 
      buf_ptr[40] = tex_ptr[23];
    case 21: 
      buf_ptr[42] = tex_ptr[24];
    case 22: 
      buf_ptr[44] = tex_ptr[26];
    case 23: 
      buf_ptr[46] = tex_ptr[27];
    case 24: 
      buf_ptr[48] = tex_ptr[28];
    case 25: 
      buf_ptr[50] = tex_ptr[29];
    case 26: 
      buf_ptr[52] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_28_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*36)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[3];
    case 4: 
      buf_ptr[8] = tex_ptr[4];
    case 5: 
      buf_ptr[10] = tex_ptr[5];
    case 6: 
      buf_ptr[12] = tex_ptr[6];
    case 7: 
      buf_ptr[14] = tex_ptr[7];
    case 8: 
      buf_ptr[16] = tex_ptr[9];
    case 9: 
      buf_ptr[18] = tex_ptr[10];
    case 10: 
      buf_ptr[20] = tex_ptr[11];
    case 11: 
      buf_ptr[22] = tex_ptr[12];
    case 12: 
      buf_ptr[24] = tex_ptr[13];
    case 13: 
      buf_ptr[26] = tex_ptr[14];
    case 14: 
      buf_ptr[28] = tex_ptr[15];
    case 15: 
      buf_ptr[30] = tex_ptr[17];
    case 16: 
      buf_ptr[32] = tex_ptr[18];
    case 17: 
      buf_ptr[34] = tex_ptr[19];
    case 18: 
      buf_ptr[36] = tex_ptr[20];
    case 19: 
      buf_ptr[38] = tex_ptr[21];
    case 20: 
      buf_ptr[40] = tex_ptr[22];
    case 21: 
      buf_ptr[42] = tex_ptr[23];
    case 22: 
      buf_ptr[44] = tex_ptr[25];
    case 23: 
      buf_ptr[46] = tex_ptr[26];
    case 24: 
      buf_ptr[48] = tex_ptr[27];
    case 25: 
      buf_ptr[50] = tex_ptr[28];
    case 26: 
      buf_ptr[52] = tex_ptr[29];
    case 27: 
      buf_ptr[54] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_29_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*35)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[3];
    case 4: 
      buf_ptr[8] = tex_ptr[4];
    case 5: 
      buf_ptr[10] = tex_ptr[5];
    case 6: 
      buf_ptr[12] = tex_ptr[6];
    case 7: 
      buf_ptr[14] = tex_ptr[7];
    case 8: 
      buf_ptr[16] = tex_ptr[8];
    case 9: 
      buf_ptr[18] = tex_ptr[9];
    case 10: 
      buf_ptr[20] = tex_ptr[11];
    case 11: 
      buf_ptr[22] = tex_ptr[12];
    case 12: 
      buf_ptr[24] = tex_ptr[13];
    case 13: 
      buf_ptr[26] = tex_ptr[14];
    case 14: 
      buf_ptr[28] = tex_ptr[15];
    case 15: 
      buf_ptr[30] = tex_ptr[16];
    case 16: 
      buf_ptr[32] = tex_ptr[17];
    case 17: 
      buf_ptr[34] = tex_ptr[18];
    case 18: 
      buf_ptr[36] = tex_ptr[19];
    case 19: 
      buf_ptr[38] = tex_ptr[20];
    case 20: 
      buf_ptr[40] = tex_ptr[22];
    case 21: 
      buf_ptr[42] = tex_ptr[23];
    case 22: 
      buf_ptr[44] = tex_ptr[24];
    case 23: 
      buf_ptr[46] = tex_ptr[25];
    case 24: 
      buf_ptr[48] = tex_ptr[26];
    case 25: 
      buf_ptr[50] = tex_ptr[27];
    case 26: 
      buf_ptr[52] = tex_ptr[28];
    case 27: 
      buf_ptr[54] = tex_ptr[29];
    case 28: 
      buf_ptr[56] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_30_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*34)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[3];
    case 4: 
      buf_ptr[8] = tex_ptr[4];
    case 5: 
      buf_ptr[10] = tex_ptr[5];
    case 6: 
      buf_ptr[12] = tex_ptr[6];
    case 7: 
      buf_ptr[14] = tex_ptr[7];
    case 8: 
      buf_ptr[16] = tex_ptr[8];
    case 9: 
      buf_ptr[18] = tex_ptr[9];
    case 10: 
      buf_ptr[20] = tex_ptr[10];
    case 11: 
      buf_ptr[22] = tex_ptr[11];
    case 12: 
      buf_ptr[24] = tex_ptr[12];
    case 13: 
      buf_ptr[26] = tex_ptr[13];
    case 14: 
      buf_ptr[28] = tex_ptr[14];
    case 15: 
      buf_ptr[30] = tex_ptr[15];
    case 16: 
      buf_ptr[32] = tex_ptr[17];
    case 17: 
      buf_ptr[34] = tex_ptr[18];
    case 18: 
      buf_ptr[36] = tex_ptr[19];
    case 19: 
      buf_ptr[38] = tex_ptr[20];
    case 20: 
      buf_ptr[40] = tex_ptr[21];
    case 21: 
      buf_ptr[42] = tex_ptr[22];
    case 22: 
      buf_ptr[44] = tex_ptr[23];
    case 23: 
      buf_ptr[46] = tex_ptr[24];
    case 24: 
      buf_ptr[48] = tex_ptr[25];
    case 25: 
      buf_ptr[50] = tex_ptr[26];
    case 26: 
      buf_ptr[52] = tex_ptr[27];
    case 27: 
      buf_ptr[54] = tex_ptr[28];
    case 28: 
      buf_ptr[56] = tex_ptr[29];
    case 29: 
      buf_ptr[58] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_31_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
    tex_ptr -= ((skip_bot_pixels*33)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[1];
    case 2: 
      buf_ptr[4] = tex_ptr[2];
    case 3: 
      buf_ptr[6] = tex_ptr[3];
    case 4: 
      buf_ptr[8] = tex_ptr[4];
    case 5: 
      buf_ptr[10] = tex_ptr[5];
    case 6: 
      buf_ptr[12] = tex_ptr[6];
    case 7: 
      buf_ptr[14] = tex_ptr[7];
    case 8: 
      buf_ptr[16] = tex_ptr[8];
    case 9: 
      buf_ptr[18] = tex_ptr[9];
    case 10: 
      buf_ptr[20] = tex_ptr[10];
    case 11: 
      buf_ptr[22] = tex_ptr[11];
    case 12: 
      buf_ptr[24] = tex_ptr[12];
    case 13: 
      buf_ptr[26] = tex_ptr[13];
    case 14: 
      buf_ptr[28] = tex_ptr[14];
    case 15: 
      buf_ptr[30] = tex_ptr[15];
    case 16: 
      buf_ptr[32] = tex_ptr[16];
    case 17: 
      buf_ptr[34] = tex_ptr[17];
    case 18: 
      buf_ptr[36] = tex_ptr[18];
    case 19: 
      buf_ptr[38] = tex_ptr[19];
    case 20: 
      buf_ptr[40] = tex_ptr[20];
    case 21: 
      buf_ptr[42] = tex_ptr[21];
    case 22: 
      buf_ptr[44] = tex_ptr[22];
    case 23: 
      buf_ptr[46] = tex_ptr[23];
    case 24: 
      buf_ptr[48] = tex_ptr[24];
    case 25: 
      buf_ptr[50] = tex_ptr[25];
    case 26: 
      buf_ptr[52] = tex_ptr[26];
    case 27: 
      buf_ptr[54] = tex_ptr[27];
    case 28: 
      buf_ptr[56] = tex_ptr[28];
    case 29: 
      buf_ptr[58] = tex_ptr[29];
    case 30: 
      buf_ptr[60] = tex_ptr[30];
  };
  return;
}
void draw_32_tex_to_32_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr++;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_33_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_34_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_35_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_36_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_37_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_38_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_39_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_40_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_41_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_42_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_43_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_44_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_45_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_46_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_47_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_48_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_49_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_50_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_51_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_52_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_53_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_54_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_55_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_56_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_57_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_58_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_59_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_60_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_61_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_62_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_63_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_64_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr++;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_65_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_66_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_67_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_68_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_69_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_70_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_71_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_72_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_73_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_74_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_75_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_76_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_77_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_78_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_79_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_80_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr++;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_81_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_82_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_83_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_84_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_85_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_86_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_87_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_88_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_89_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_90_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_91_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_92_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_93_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_94_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_95_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr++;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr++;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_96_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr++;
    case 3: 
      buf_ptr[6] = *tex_ptr;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr++;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_97_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_98_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr++;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_99_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr++;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr++;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_100_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr++;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_101_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr++;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr++;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_102_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr++;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr++;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr++;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_103_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr++;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr++;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr++;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_104_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr++;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr++;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr++;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_105_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr++;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr++;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr++;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_106_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr++;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr++;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr++;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr++;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr++;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_107_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr++;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr++;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr++;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_108_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr++;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr++;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr++;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr++;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr++;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_109_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr++;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr++;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr++;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr++;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_110_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr++;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr++;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr++;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr++;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr++;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_111_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr++;
    case 7: 
      buf_ptr[14] = *tex_ptr;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr++;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr++;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr++;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr++;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr++;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr++;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_112_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr++;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr++;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr++;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr++;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr++;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_113_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr++;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr++;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr++;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr++;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr++;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_114_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr++;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr++;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr++;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr++;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr++;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr++;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr++;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_115_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr++;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr++;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr++;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr++;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr++;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr++;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr++;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_116_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr++;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr++;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr++;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr++;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr++;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr++;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_117_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr++;
    case 11: 
      buf_ptr[22] = *tex_ptr;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr++;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr++;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr++;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr++;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr++;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr++;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr++;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr++;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr++;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_118_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr++;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr++;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr++;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr++;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr++;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr++;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr++;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr++;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr++;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr++;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr++;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr;
    case 117: 
      buf_ptr[234] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_119_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr++;
    case 15: 
      buf_ptr[30] = *tex_ptr;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr++;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr++;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr++;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr++;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr++;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr++;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr++;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr++;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr++;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr++;
    case 116: 
      buf_ptr[232] = *tex_ptr;
    case 117: 
      buf_ptr[234] = *tex_ptr;
    case 118: 
      buf_ptr[236] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_120_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr++;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr++;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr++;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr++;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr++;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr++;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr++;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr++;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr++;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr++;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr++;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr++;
    case 117: 
      buf_ptr[234] = *tex_ptr;
    case 118: 
      buf_ptr[236] = *tex_ptr;
    case 119: 
      buf_ptr[238] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_121_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr++;
    case 19: 
      buf_ptr[38] = *tex_ptr;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr++;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr++;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr++;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr++;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr++;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr++;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr++;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr++;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr++;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr++;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr++;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr++;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr++;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr++;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr;
    case 117: 
      buf_ptr[234] = *tex_ptr++;
    case 118: 
      buf_ptr[236] = *tex_ptr;
    case 119: 
      buf_ptr[238] = *tex_ptr;
    case 120: 
      buf_ptr[240] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_122_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr++;
    case 23: 
      buf_ptr[46] = *tex_ptr;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr++;
    case 42: 
      buf_ptr[84] = *tex_ptr;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr++;
    case 46: 
      buf_ptr[92] = *tex_ptr;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr++;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr++;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr++;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr++;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr++;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr++;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr++;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr++;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr++;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr++;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr++;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr++;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr++;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr;
    case 117: 
      buf_ptr[234] = *tex_ptr;
    case 118: 
      buf_ptr[236] = *tex_ptr++;
    case 119: 
      buf_ptr[238] = *tex_ptr;
    case 120: 
      buf_ptr[240] = *tex_ptr;
    case 121: 
      buf_ptr[242] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_123_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr++;
    case 27: 
      buf_ptr[54] = *tex_ptr;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr++;
    case 31: 
      buf_ptr[62] = *tex_ptr;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr++;
    case 50: 
      buf_ptr[100] = *tex_ptr;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr++;
    case 54: 
      buf_ptr[108] = *tex_ptr;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr++;
    case 58: 
      buf_ptr[116] = *tex_ptr;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr++;
    case 62: 
      buf_ptr[124] = *tex_ptr;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr++;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr++;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr++;
    case 85: 
      buf_ptr[170] = *tex_ptr;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr++;
    case 89: 
      buf_ptr[178] = *tex_ptr;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr++;
    case 93: 
      buf_ptr[186] = *tex_ptr;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr++;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr++;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr++;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr++;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr++;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr++;
    case 116: 
      buf_ptr[232] = *tex_ptr;
    case 117: 
      buf_ptr[234] = *tex_ptr;
    case 118: 
      buf_ptr[236] = *tex_ptr;
    case 119: 
      buf_ptr[238] = *tex_ptr++;
    case 120: 
      buf_ptr[240] = *tex_ptr;
    case 121: 
      buf_ptr[242] = *tex_ptr;
    case 122: 
      buf_ptr[244] = *tex_ptr++;
  };
  return;
}
void draw_32_tex_to_124_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr++;
    case 35: 
      buf_ptr[70] = *tex_ptr;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr++;
    case 39: 
      buf_ptr[78] = *tex_ptr;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr++;
    case 66: 
      buf_ptr[132] = *tex_ptr;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr++;
    case 70: 
      buf_ptr[140] = *tex_ptr;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr++;
    case 74: 
      buf_ptr[148] = *tex_ptr;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr++;
    case 78: 
      buf_ptr[156] = *tex_ptr;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr++;
    case 82: 
      buf_ptr[164] = *tex_ptr;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr++;
    case 97: 
      buf_ptr[194] = *tex_ptr;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr++;
    case 101: 
      buf_ptr[202] = *tex_ptr;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr++;
    case 105: 
      buf_ptr[210] = *tex_ptr;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr++;
    case 109: 
      buf_ptr[218] = *tex_ptr;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr++;
    case 113: 
      buf_ptr[226] = *tex_ptr;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr++;
    case 117: 
      buf_ptr[234] = *tex_ptr;
    case 118: 
      buf_ptr[236] = *tex_ptr;
    case 119: 
      buf_ptr[238] = *tex_ptr;
    case 120: 
      buf_ptr[240] = *tex_ptr++;
    case 121: 
      buf_ptr[242] = *tex_ptr;
    case 122: 
      buf_ptr[244] = *tex_ptr;
    case 123: 
      buf_ptr[246] = *tex_ptr;
  };
  return;
}
void draw_32_tex_to_125_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
s16 total_skip = skip_top_pixels + skip_bot_pixels;
  if(total_skip) {
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = *tex_ptr;
    case 1: 
      buf_ptr[2] = *tex_ptr;
    case 2: 
      buf_ptr[4] = *tex_ptr;
    case 3: 
      buf_ptr[6] = *tex_ptr++;
    case 4: 
      buf_ptr[8] = *tex_ptr;
    case 5: 
      buf_ptr[10] = *tex_ptr;
    case 6: 
      buf_ptr[12] = *tex_ptr;
    case 7: 
      buf_ptr[14] = *tex_ptr++;
    case 8: 
      buf_ptr[16] = *tex_ptr;
    case 9: 
      buf_ptr[18] = *tex_ptr;
    case 10: 
      buf_ptr[20] = *tex_ptr;
    case 11: 
      buf_ptr[22] = *tex_ptr++;
    case 12: 
      buf_ptr[24] = *tex_ptr;
    case 13: 
      buf_ptr[26] = *tex_ptr;
    case 14: 
      buf_ptr[28] = *tex_ptr;
    case 15: 
      buf_ptr[30] = *tex_ptr++;
    case 16: 
      buf_ptr[32] = *tex_ptr;
    case 17: 
      buf_ptr[34] = *tex_ptr;
    case 18: 
      buf_ptr[36] = *tex_ptr;
    case 19: 
      buf_ptr[38] = *tex_ptr++;
    case 20: 
      buf_ptr[40] = *tex_ptr;
    case 21: 
      buf_ptr[42] = *tex_ptr;
    case 22: 
      buf_ptr[44] = *tex_ptr;
    case 23: 
      buf_ptr[46] = *tex_ptr++;
    case 24: 
      buf_ptr[48] = *tex_ptr;
    case 25: 
      buf_ptr[50] = *tex_ptr;
    case 26: 
      buf_ptr[52] = *tex_ptr;
    case 27: 
      buf_ptr[54] = *tex_ptr++;
    case 28: 
      buf_ptr[56] = *tex_ptr;
    case 29: 
      buf_ptr[58] = *tex_ptr;
    case 30: 
      buf_ptr[60] = *tex_ptr;
    case 31: 
      buf_ptr[62] = *tex_ptr++;
    case 32: 
      buf_ptr[64] = *tex_ptr;
    case 33: 
      buf_ptr[66] = *tex_ptr;
    case 34: 
      buf_ptr[68] = *tex_ptr;
    case 35: 
      buf_ptr[70] = *tex_ptr++;
    case 36: 
      buf_ptr[72] = *tex_ptr;
    case 37: 
      buf_ptr[74] = *tex_ptr;
    case 38: 
      buf_ptr[76] = *tex_ptr;
    case 39: 
      buf_ptr[78] = *tex_ptr++;
    case 40: 
      buf_ptr[80] = *tex_ptr;
    case 41: 
      buf_ptr[82] = *tex_ptr;
    case 42: 
      buf_ptr[84] = *tex_ptr++;
    case 43: 
      buf_ptr[86] = *tex_ptr;
    case 44: 
      buf_ptr[88] = *tex_ptr;
    case 45: 
      buf_ptr[90] = *tex_ptr;
    case 46: 
      buf_ptr[92] = *tex_ptr++;
    case 47: 
      buf_ptr[94] = *tex_ptr;
    case 48: 
      buf_ptr[96] = *tex_ptr;
    case 49: 
      buf_ptr[98] = *tex_ptr;
    case 50: 
      buf_ptr[100] = *tex_ptr++;
    case 51: 
      buf_ptr[102] = *tex_ptr;
    case 52: 
      buf_ptr[104] = *tex_ptr;
    case 53: 
      buf_ptr[106] = *tex_ptr;
    case 54: 
      buf_ptr[108] = *tex_ptr++;
    case 55: 
      buf_ptr[110] = *tex_ptr;
    case 56: 
      buf_ptr[112] = *tex_ptr;
    case 57: 
      buf_ptr[114] = *tex_ptr;
    case 58: 
      buf_ptr[116] = *tex_ptr++;
    case 59: 
      buf_ptr[118] = *tex_ptr;
    case 60: 
      buf_ptr[120] = *tex_ptr;
    case 61: 
      buf_ptr[122] = *tex_ptr;
    case 62: 
      buf_ptr[124] = *tex_ptr++;
    case 63: 
      buf_ptr[126] = *tex_ptr;
    case 64: 
      buf_ptr[128] = *tex_ptr;
    case 65: 
      buf_ptr[130] = *tex_ptr;
    case 66: 
      buf_ptr[132] = *tex_ptr++;
    case 67: 
      buf_ptr[134] = *tex_ptr;
    case 68: 
      buf_ptr[136] = *tex_ptr;
    case 69: 
      buf_ptr[138] = *tex_ptr;
    case 70: 
      buf_ptr[140] = *tex_ptr++;
    case 71: 
      buf_ptr[142] = *tex_ptr;
    case 72: 
      buf_ptr[144] = *tex_ptr;
    case 73: 
      buf_ptr[146] = *tex_ptr;
    case 74: 
      buf_ptr[148] = *tex_ptr++;
    case 75: 
      buf_ptr[150] = *tex_ptr;
    case 76: 
      buf_ptr[152] = *tex_ptr;
    case 77: 
      buf_ptr[154] = *tex_ptr;
    case 78: 
      buf_ptr[156] = *tex_ptr++;
    case 79: 
      buf_ptr[158] = *tex_ptr;
    case 80: 
      buf_ptr[160] = *tex_ptr;
    case 81: 
      buf_ptr[162] = *tex_ptr;
    case 82: 
      buf_ptr[164] = *tex_ptr++;
    case 83: 
      buf_ptr[166] = *tex_ptr;
    case 84: 
      buf_ptr[168] = *tex_ptr;
    case 85: 
      buf_ptr[170] = *tex_ptr++;
    case 86: 
      buf_ptr[172] = *tex_ptr;
    case 87: 
      buf_ptr[174] = *tex_ptr;
    case 88: 
      buf_ptr[176] = *tex_ptr;
    case 89: 
      buf_ptr[178] = *tex_ptr++;
    case 90: 
      buf_ptr[180] = *tex_ptr;
    case 91: 
      buf_ptr[182] = *tex_ptr;
    case 92: 
      buf_ptr[184] = *tex_ptr;
    case 93: 
      buf_ptr[186] = *tex_ptr++;
    case 94: 
      buf_ptr[188] = *tex_ptr;
    case 95: 
      buf_ptr[190] = *tex_ptr;
    case 96: 
      buf_ptr[192] = *tex_ptr;
    case 97: 
      buf_ptr[194] = *tex_ptr++;
    case 98: 
      buf_ptr[196] = *tex_ptr;
    case 99: 
      buf_ptr[198] = *tex_ptr;
    case 100: 
      buf_ptr[200] = *tex_ptr;
    case 101: 
      buf_ptr[202] = *tex_ptr++;
    case 102: 
      buf_ptr[204] = *tex_ptr;
    case 103: 
      buf_ptr[206] = *tex_ptr;
    case 104: 
      buf_ptr[208] = *tex_ptr;
    case 105: 
      buf_ptr[210] = *tex_ptr++;
    case 106: 
      buf_ptr[212] = *tex_ptr;
    case 107: 
      buf_ptr[214] = *tex_ptr;
    case 108: 
      buf_ptr[216] = *tex_ptr;
    case 109: 
      buf_ptr[218] = *tex_ptr++;
    case 110: 
      buf_ptr[220] = *tex_ptr;
    case 111: 
      buf_ptr[222] = *tex_ptr;
    case 112: 
      buf_ptr[224] = *tex_ptr;
    case 113: 
      buf_ptr[226] = *tex_ptr++;
    case 114: 
      buf_ptr[228] = *tex_ptr;
    case 115: 
      buf_ptr[230] = *tex_ptr;
    case 116: 
      buf_ptr[232] = *tex_ptr;
    case 117: 
      buf_ptr[234] = *tex_ptr++;
    case 118: 
      buf_ptr[236] = *tex_ptr;
    case 119: 
      buf_ptr[238] = *tex_ptr;
    case 120: 
      buf_ptr[240] = *tex_ptr;
    case 121: 
      buf_ptr[242] = *tex_ptr++;
    case 122: 
      buf_ptr[244] = *tex_ptr;
    case 123: 
      buf_ptr[246] = *tex_ptr;
    case 124: 
      buf_ptr[248] = *tex_ptr++;
  };
  return;
}
void (*jmp_32[126])(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) = {
  NULL,
  draw_32_tex_to_1_pixels,
  draw_32_tex_to_2_pixels,
  draw_32_tex_to_3_pixels,
  draw_32_tex_to_4_pixels,
  draw_32_tex_to_5_pixels,
  draw_32_tex_to_6_pixels,
  draw_32_tex_to_7_pixels,
  draw_32_tex_to_8_pixels,
  draw_32_tex_to_9_pixels,
  draw_32_tex_to_10_pixels,
  draw_32_tex_to_11_pixels,
  draw_32_tex_to_12_pixels,
  draw_32_tex_to_13_pixels,
  draw_32_tex_to_14_pixels,
  draw_32_tex_to_15_pixels,
  draw_32_tex_to_16_pixels,
  draw_32_tex_to_17_pixels,
  draw_32_tex_to_18_pixels,
  draw_32_tex_to_19_pixels,
  draw_32_tex_to_20_pixels,
  draw_32_tex_to_21_pixels,
  draw_32_tex_to_22_pixels,
  draw_32_tex_to_23_pixels,
  draw_32_tex_to_24_pixels,
  draw_32_tex_to_25_pixels,
  draw_32_tex_to_26_pixels,
  draw_32_tex_to_27_pixels,
  draw_32_tex_to_28_pixels,
  draw_32_tex_to_29_pixels,
  draw_32_tex_to_30_pixels,
  draw_32_tex_to_31_pixels,
  draw_32_tex_to_32_pixels,
  draw_32_tex_to_33_pixels,
  draw_32_tex_to_34_pixels,
  draw_32_tex_to_35_pixels,
  draw_32_tex_to_36_pixels,
  draw_32_tex_to_37_pixels,
  draw_32_tex_to_38_pixels,
  draw_32_tex_to_39_pixels,
  draw_32_tex_to_40_pixels,
  draw_32_tex_to_41_pixels,
  draw_32_tex_to_42_pixels,
  draw_32_tex_to_43_pixels,
  draw_32_tex_to_44_pixels,
  draw_32_tex_to_45_pixels,
  draw_32_tex_to_46_pixels,
  draw_32_tex_to_47_pixels,
  draw_32_tex_to_48_pixels,
  draw_32_tex_to_49_pixels,
  draw_32_tex_to_50_pixels,
  draw_32_tex_to_51_pixels,
  draw_32_tex_to_52_pixels,
  draw_32_tex_to_53_pixels,
  draw_32_tex_to_54_pixels,
  draw_32_tex_to_55_pixels,
  draw_32_tex_to_56_pixels,
  draw_32_tex_to_57_pixels,
  draw_32_tex_to_58_pixels,
  draw_32_tex_to_59_pixels,
  draw_32_tex_to_60_pixels,
  draw_32_tex_to_61_pixels,
  draw_32_tex_to_62_pixels,
  draw_32_tex_to_63_pixels,
  draw_32_tex_to_64_pixels,
  draw_32_tex_to_65_pixels,
  draw_32_tex_to_66_pixels,
  draw_32_tex_to_67_pixels,
  draw_32_tex_to_68_pixels,
  draw_32_tex_to_69_pixels,
  draw_32_tex_to_70_pixels,
  draw_32_tex_to_71_pixels,
  draw_32_tex_to_72_pixels,
  draw_32_tex_to_73_pixels,
  draw_32_tex_to_74_pixels,
  draw_32_tex_to_75_pixels,
  draw_32_tex_to_76_pixels,
  draw_32_tex_to_77_pixels,
  draw_32_tex_to_78_pixels,
  draw_32_tex_to_79_pixels,
  draw_32_tex_to_80_pixels,
  draw_32_tex_to_81_pixels,
  draw_32_tex_to_82_pixels,
  draw_32_tex_to_83_pixels,
  draw_32_tex_to_84_pixels,
  draw_32_tex_to_85_pixels,
  draw_32_tex_to_86_pixels,
  draw_32_tex_to_87_pixels,
  draw_32_tex_to_88_pixels,
  draw_32_tex_to_89_pixels,
  draw_32_tex_to_90_pixels,
  draw_32_tex_to_91_pixels,
  draw_32_tex_to_92_pixels,
  draw_32_tex_to_93_pixels,
  draw_32_tex_to_94_pixels,
  draw_32_tex_to_95_pixels,
  draw_32_tex_to_96_pixels,
  draw_32_tex_to_97_pixels,
  draw_32_tex_to_98_pixels,
  draw_32_tex_to_99_pixels,
  draw_32_tex_to_100_pixels,
  draw_32_tex_to_101_pixels,
  draw_32_tex_to_102_pixels,
  draw_32_tex_to_103_pixels,
  draw_32_tex_to_104_pixels,
  draw_32_tex_to_105_pixels,
  draw_32_tex_to_106_pixels,
  draw_32_tex_to_107_pixels,
  draw_32_tex_to_108_pixels,
  draw_32_tex_to_109_pixels,
  draw_32_tex_to_110_pixels,
  draw_32_tex_to_111_pixels,
  draw_32_tex_to_112_pixels,
  draw_32_tex_to_113_pixels,
  draw_32_tex_to_114_pixels,
  draw_32_tex_to_115_pixels,
  draw_32_tex_to_116_pixels,
  draw_32_tex_to_117_pixels,
  draw_32_tex_to_118_pixels,
  draw_32_tex_to_119_pixels,
  draw_32_tex_to_120_pixels,
  draw_32_tex_to_121_pixels,
  draw_32_tex_to_122_pixels,
  draw_32_tex_to_123_pixels,
  draw_32_tex_to_124_pixels,
  draw_32_tex_to_125_pixels,
};
void vline_texture_32_c(u8* buf_ptr, u8* tex_ptr, s16 wall_height, s16 skip_top_pixels, s16 skip_bot_pixels) {
  int total_skip = skip_top_pixels + skip_bot_pixels;
  buf_ptr = buf_ptr - (total_skip*2);
  jmp_32[wall_height](buf_ptr, tex_ptr, skip_top_pixels, skip_bot_pixels);
}
