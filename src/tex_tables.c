#include "genesis.h"
void draw_32_tex_to_1_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*1024)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
  };
  return;
}
void draw_32_tex_to_2_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*512)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*341)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*256)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*204)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*170)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*146)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*128)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*113)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*102)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*93)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*85)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*78)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*73)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*68)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*64)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*60)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*56)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*53)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*51)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*48)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*46)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*44)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*42)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*40)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*39)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*37)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*36)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*35)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*34)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*33)>>5);
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
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*32)>>5);
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
    case 31: 
      buf_ptr[62] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_33_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*31)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[3];
    case 5: 
      buf_ptr[10] = tex_ptr[4];
    case 6: 
      buf_ptr[12] = tex_ptr[5];
    case 7: 
      buf_ptr[14] = tex_ptr[6];
    case 8: 
      buf_ptr[16] = tex_ptr[7];
    case 9: 
      buf_ptr[18] = tex_ptr[8];
    case 10: 
      buf_ptr[20] = tex_ptr[9];
    case 11: 
      buf_ptr[22] = tex_ptr[10];
    case 12: 
      buf_ptr[24] = tex_ptr[11];
    case 13: 
      buf_ptr[26] = tex_ptr[12];
    case 14: 
      buf_ptr[28] = tex_ptr[13];
    case 15: 
      buf_ptr[30] = tex_ptr[14];
    case 16: 
      buf_ptr[32] = tex_ptr[15];
    case 17: 
      buf_ptr[34] = tex_ptr[16];
    case 18: 
      buf_ptr[36] = tex_ptr[17];
    case 19: 
      buf_ptr[38] = tex_ptr[18];
    case 20: 
      buf_ptr[40] = tex_ptr[19];
    case 21: 
      buf_ptr[42] = tex_ptr[20];
    case 22: 
      buf_ptr[44] = tex_ptr[21];
    case 23: 
      buf_ptr[46] = tex_ptr[22];
    case 24: 
      buf_ptr[48] = tex_ptr[23];
    case 25: 
      buf_ptr[50] = tex_ptr[24];
    case 26: 
      buf_ptr[52] = tex_ptr[25];
    case 27: 
      buf_ptr[54] = tex_ptr[26];
    case 28: 
      buf_ptr[56] = tex_ptr[27];
    case 29: 
      buf_ptr[58] = tex_ptr[28];
    case 30: 
      buf_ptr[60] = tex_ptr[29];
    case 31: 
      buf_ptr[62] = tex_ptr[30];
    case 32: 
      buf_ptr[64] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_34_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*30)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[3];
    case 5: 
      buf_ptr[10] = tex_ptr[4];
    case 6: 
      buf_ptr[12] = tex_ptr[5];
    case 7: 
      buf_ptr[14] = tex_ptr[6];
    case 8: 
      buf_ptr[16] = tex_ptr[7];
    case 9: 
      buf_ptr[18] = tex_ptr[8];
    case 10: 
      buf_ptr[20] = tex_ptr[9];
    case 11: 
      buf_ptr[22] = tex_ptr[10];
    case 12: 
      buf_ptr[24] = tex_ptr[11];
    case 13: 
      buf_ptr[26] = tex_ptr[12];
    case 14: 
      buf_ptr[28] = tex_ptr[13];
    case 15: 
      buf_ptr[30] = tex_ptr[14];
    case 16: 
      buf_ptr[32] = tex_ptr[15];
    case 17: 
      buf_ptr[34] = tex_ptr[16];
    case 18: 
      buf_ptr[36] = tex_ptr[16];
    case 19: 
      buf_ptr[38] = tex_ptr[17];
    case 20: 
      buf_ptr[40] = tex_ptr[18];
    case 21: 
      buf_ptr[42] = tex_ptr[19];
    case 22: 
      buf_ptr[44] = tex_ptr[20];
    case 23: 
      buf_ptr[46] = tex_ptr[21];
    case 24: 
      buf_ptr[48] = tex_ptr[22];
    case 25: 
      buf_ptr[50] = tex_ptr[23];
    case 26: 
      buf_ptr[52] = tex_ptr[24];
    case 27: 
      buf_ptr[54] = tex_ptr[25];
    case 28: 
      buf_ptr[56] = tex_ptr[26];
    case 29: 
      buf_ptr[58] = tex_ptr[27];
    case 30: 
      buf_ptr[60] = tex_ptr[28];
    case 31: 
      buf_ptr[62] = tex_ptr[29];
    case 32: 
      buf_ptr[64] = tex_ptr[30];
    case 33: 
      buf_ptr[66] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_35_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*29)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[3];
    case 5: 
      buf_ptr[10] = tex_ptr[4];
    case 6: 
      buf_ptr[12] = tex_ptr[5];
    case 7: 
      buf_ptr[14] = tex_ptr[6];
    case 8: 
      buf_ptr[16] = tex_ptr[7];
    case 9: 
      buf_ptr[18] = tex_ptr[8];
    case 10: 
      buf_ptr[20] = tex_ptr[9];
    case 11: 
      buf_ptr[22] = tex_ptr[10];
    case 12: 
      buf_ptr[24] = tex_ptr[10];
    case 13: 
      buf_ptr[26] = tex_ptr[11];
    case 14: 
      buf_ptr[28] = tex_ptr[12];
    case 15: 
      buf_ptr[30] = tex_ptr[13];
    case 16: 
      buf_ptr[32] = tex_ptr[14];
    case 17: 
      buf_ptr[34] = tex_ptr[15];
    case 18: 
      buf_ptr[36] = tex_ptr[16];
    case 19: 
      buf_ptr[38] = tex_ptr[17];
    case 20: 
      buf_ptr[40] = tex_ptr[18];
    case 21: 
      buf_ptr[42] = tex_ptr[19];
    case 22: 
      buf_ptr[44] = tex_ptr[20];
    case 23: 
      buf_ptr[46] = tex_ptr[21];
    case 24: 
      buf_ptr[48] = tex_ptr[21];
    case 25: 
      buf_ptr[50] = tex_ptr[22];
    case 26: 
      buf_ptr[52] = tex_ptr[23];
    case 27: 
      buf_ptr[54] = tex_ptr[24];
    case 28: 
      buf_ptr[56] = tex_ptr[25];
    case 29: 
      buf_ptr[58] = tex_ptr[26];
    case 30: 
      buf_ptr[60] = tex_ptr[27];
    case 31: 
      buf_ptr[62] = tex_ptr[28];
    case 32: 
      buf_ptr[64] = tex_ptr[29];
    case 33: 
      buf_ptr[66] = tex_ptr[30];
    case 34: 
      buf_ptr[68] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_36_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*28)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[3];
    case 5: 
      buf_ptr[10] = tex_ptr[4];
    case 6: 
      buf_ptr[12] = tex_ptr[5];
    case 7: 
      buf_ptr[14] = tex_ptr[6];
    case 8: 
      buf_ptr[16] = tex_ptr[7];
    case 9: 
      buf_ptr[18] = tex_ptr[8];
    case 10: 
      buf_ptr[20] = tex_ptr[8];
    case 11: 
      buf_ptr[22] = tex_ptr[9];
    case 12: 
      buf_ptr[24] = tex_ptr[10];
    case 13: 
      buf_ptr[26] = tex_ptr[11];
    case 14: 
      buf_ptr[28] = tex_ptr[12];
    case 15: 
      buf_ptr[30] = tex_ptr[13];
    case 16: 
      buf_ptr[32] = tex_ptr[14];
    case 17: 
      buf_ptr[34] = tex_ptr[15];
    case 18: 
      buf_ptr[36] = tex_ptr[16];
    case 19: 
      buf_ptr[38] = tex_ptr[16];
    case 20: 
      buf_ptr[40] = tex_ptr[17];
    case 21: 
      buf_ptr[42] = tex_ptr[18];
    case 22: 
      buf_ptr[44] = tex_ptr[19];
    case 23: 
      buf_ptr[46] = tex_ptr[20];
    case 24: 
      buf_ptr[48] = tex_ptr[21];
    case 25: 
      buf_ptr[50] = tex_ptr[22];
    case 26: 
      buf_ptr[52] = tex_ptr[23];
    case 27: 
      buf_ptr[54] = tex_ptr[24];
    case 28: 
      buf_ptr[56] = tex_ptr[24];
    case 29: 
      buf_ptr[58] = tex_ptr[25];
    case 30: 
      buf_ptr[60] = tex_ptr[26];
    case 31: 
      buf_ptr[62] = tex_ptr[27];
    case 32: 
      buf_ptr[64] = tex_ptr[28];
    case 33: 
      buf_ptr[66] = tex_ptr[29];
    case 34: 
      buf_ptr[68] = tex_ptr[30];
    case 35: 
      buf_ptr[70] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_37_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*27)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[3];
    case 5: 
      buf_ptr[10] = tex_ptr[4];
    case 6: 
      buf_ptr[12] = tex_ptr[5];
    case 7: 
      buf_ptr[14] = tex_ptr[6];
    case 8: 
      buf_ptr[16] = tex_ptr[6];
    case 9: 
      buf_ptr[18] = tex_ptr[7];
    case 10: 
      buf_ptr[20] = tex_ptr[8];
    case 11: 
      buf_ptr[22] = tex_ptr[9];
    case 12: 
      buf_ptr[24] = tex_ptr[10];
    case 13: 
      buf_ptr[26] = tex_ptr[11];
    case 14: 
      buf_ptr[28] = tex_ptr[12];
    case 15: 
      buf_ptr[30] = tex_ptr[12];
    case 16: 
      buf_ptr[32] = tex_ptr[13];
    case 17: 
      buf_ptr[34] = tex_ptr[14];
    case 18: 
      buf_ptr[36] = tex_ptr[15];
    case 19: 
      buf_ptr[38] = tex_ptr[16];
    case 20: 
      buf_ptr[40] = tex_ptr[17];
    case 21: 
      buf_ptr[42] = tex_ptr[18];
    case 22: 
      buf_ptr[44] = tex_ptr[19];
    case 23: 
      buf_ptr[46] = tex_ptr[19];
    case 24: 
      buf_ptr[48] = tex_ptr[20];
    case 25: 
      buf_ptr[50] = tex_ptr[21];
    case 26: 
      buf_ptr[52] = tex_ptr[22];
    case 27: 
      buf_ptr[54] = tex_ptr[23];
    case 28: 
      buf_ptr[56] = tex_ptr[24];
    case 29: 
      buf_ptr[58] = tex_ptr[25];
    case 30: 
      buf_ptr[60] = tex_ptr[25];
    case 31: 
      buf_ptr[62] = tex_ptr[26];
    case 32: 
      buf_ptr[64] = tex_ptr[27];
    case 33: 
      buf_ptr[66] = tex_ptr[28];
    case 34: 
      buf_ptr[68] = tex_ptr[29];
    case 35: 
      buf_ptr[70] = tex_ptr[30];
    case 36: 
      buf_ptr[72] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_38_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*26)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[3];
    case 5: 
      buf_ptr[10] = tex_ptr[4];
    case 6: 
      buf_ptr[12] = tex_ptr[5];
    case 7: 
      buf_ptr[14] = tex_ptr[5];
    case 8: 
      buf_ptr[16] = tex_ptr[6];
    case 9: 
      buf_ptr[18] = tex_ptr[7];
    case 10: 
      buf_ptr[20] = tex_ptr[8];
    case 11: 
      buf_ptr[22] = tex_ptr[9];
    case 12: 
      buf_ptr[24] = tex_ptr[10];
    case 13: 
      buf_ptr[26] = tex_ptr[10];
    case 14: 
      buf_ptr[28] = tex_ptr[11];
    case 15: 
      buf_ptr[30] = tex_ptr[12];
    case 16: 
      buf_ptr[32] = tex_ptr[13];
    case 17: 
      buf_ptr[34] = tex_ptr[14];
    case 18: 
      buf_ptr[36] = tex_ptr[15];
    case 19: 
      buf_ptr[38] = tex_ptr[15];
    case 20: 
      buf_ptr[40] = tex_ptr[16];
    case 21: 
      buf_ptr[42] = tex_ptr[17];
    case 22: 
      buf_ptr[44] = tex_ptr[18];
    case 23: 
      buf_ptr[46] = tex_ptr[19];
    case 24: 
      buf_ptr[48] = tex_ptr[20];
    case 25: 
      buf_ptr[50] = tex_ptr[21];
    case 26: 
      buf_ptr[52] = tex_ptr[21];
    case 27: 
      buf_ptr[54] = tex_ptr[22];
    case 28: 
      buf_ptr[56] = tex_ptr[23];
    case 29: 
      buf_ptr[58] = tex_ptr[24];
    case 30: 
      buf_ptr[60] = tex_ptr[25];
    case 31: 
      buf_ptr[62] = tex_ptr[26];
    case 32: 
      buf_ptr[64] = tex_ptr[26];
    case 33: 
      buf_ptr[66] = tex_ptr[27];
    case 34: 
      buf_ptr[68] = tex_ptr[28];
    case 35: 
      buf_ptr[70] = tex_ptr[29];
    case 36: 
      buf_ptr[72] = tex_ptr[30];
    case 37: 
      buf_ptr[74] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_39_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*26)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[3];
    case 5: 
      buf_ptr[10] = tex_ptr[4];
    case 6: 
      buf_ptr[12] = tex_ptr[4];
    case 7: 
      buf_ptr[14] = tex_ptr[5];
    case 8: 
      buf_ptr[16] = tex_ptr[6];
    case 9: 
      buf_ptr[18] = tex_ptr[7];
    case 10: 
      buf_ptr[20] = tex_ptr[8];
    case 11: 
      buf_ptr[22] = tex_ptr[9];
    case 12: 
      buf_ptr[24] = tex_ptr[9];
    case 13: 
      buf_ptr[26] = tex_ptr[10];
    case 14: 
      buf_ptr[28] = tex_ptr[11];
    case 15: 
      buf_ptr[30] = tex_ptr[12];
    case 16: 
      buf_ptr[32] = tex_ptr[13];
    case 17: 
      buf_ptr[34] = tex_ptr[13];
    case 18: 
      buf_ptr[36] = tex_ptr[14];
    case 19: 
      buf_ptr[38] = tex_ptr[15];
    case 20: 
      buf_ptr[40] = tex_ptr[16];
    case 21: 
      buf_ptr[42] = tex_ptr[17];
    case 22: 
      buf_ptr[44] = tex_ptr[18];
    case 23: 
      buf_ptr[46] = tex_ptr[18];
    case 24: 
      buf_ptr[48] = tex_ptr[19];
    case 25: 
      buf_ptr[50] = tex_ptr[20];
    case 26: 
      buf_ptr[52] = tex_ptr[21];
    case 27: 
      buf_ptr[54] = tex_ptr[22];
    case 28: 
      buf_ptr[56] = tex_ptr[22];
    case 29: 
      buf_ptr[58] = tex_ptr[23];
    case 30: 
      buf_ptr[60] = tex_ptr[24];
    case 31: 
      buf_ptr[62] = tex_ptr[25];
    case 32: 
      buf_ptr[64] = tex_ptr[26];
    case 33: 
      buf_ptr[66] = tex_ptr[27];
    case 34: 
      buf_ptr[68] = tex_ptr[27];
    case 35: 
      buf_ptr[70] = tex_ptr[28];
    case 36: 
      buf_ptr[72] = tex_ptr[29];
    case 37: 
      buf_ptr[74] = tex_ptr[30];
    case 38: 
      buf_ptr[76] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_40_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*25)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[3];
    case 5: 
      buf_ptr[10] = tex_ptr[4];
    case 6: 
      buf_ptr[12] = tex_ptr[4];
    case 7: 
      buf_ptr[14] = tex_ptr[5];
    case 8: 
      buf_ptr[16] = tex_ptr[6];
    case 9: 
      buf_ptr[18] = tex_ptr[7];
    case 10: 
      buf_ptr[20] = tex_ptr[7];
    case 11: 
      buf_ptr[22] = tex_ptr[8];
    case 12: 
      buf_ptr[24] = tex_ptr[9];
    case 13: 
      buf_ptr[26] = tex_ptr[10];
    case 14: 
      buf_ptr[28] = tex_ptr[11];
    case 15: 
      buf_ptr[30] = tex_ptr[12];
    case 16: 
      buf_ptr[32] = tex_ptr[12];
    case 17: 
      buf_ptr[34] = tex_ptr[13];
    case 18: 
      buf_ptr[36] = tex_ptr[14];
    case 19: 
      buf_ptr[38] = tex_ptr[15];
    case 20: 
      buf_ptr[40] = tex_ptr[16];
    case 21: 
      buf_ptr[42] = tex_ptr[16];
    case 22: 
      buf_ptr[44] = tex_ptr[17];
    case 23: 
      buf_ptr[46] = tex_ptr[18];
    case 24: 
      buf_ptr[48] = tex_ptr[19];
    case 25: 
      buf_ptr[50] = tex_ptr[20];
    case 26: 
      buf_ptr[52] = tex_ptr[20];
    case 27: 
      buf_ptr[54] = tex_ptr[21];
    case 28: 
      buf_ptr[56] = tex_ptr[22];
    case 29: 
      buf_ptr[58] = tex_ptr[23];
    case 30: 
      buf_ptr[60] = tex_ptr[24];
    case 31: 
      buf_ptr[62] = tex_ptr[24];
    case 32: 
      buf_ptr[64] = tex_ptr[25];
    case 33: 
      buf_ptr[66] = tex_ptr[26];
    case 34: 
      buf_ptr[68] = tex_ptr[27];
    case 35: 
      buf_ptr[70] = tex_ptr[28];
    case 36: 
      buf_ptr[72] = tex_ptr[28];
    case 37: 
      buf_ptr[74] = tex_ptr[29];
    case 38: 
      buf_ptr[76] = tex_ptr[30];
    case 39: 
      buf_ptr[78] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_41_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*24)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[3];
    case 5: 
      buf_ptr[10] = tex_ptr[3];
    case 6: 
      buf_ptr[12] = tex_ptr[4];
    case 7: 
      buf_ptr[14] = tex_ptr[5];
    case 8: 
      buf_ptr[16] = tex_ptr[6];
    case 9: 
      buf_ptr[18] = tex_ptr[7];
    case 10: 
      buf_ptr[20] = tex_ptr[7];
    case 11: 
      buf_ptr[22] = tex_ptr[8];
    case 12: 
      buf_ptr[24] = tex_ptr[9];
    case 13: 
      buf_ptr[26] = tex_ptr[10];
    case 14: 
      buf_ptr[28] = tex_ptr[10];
    case 15: 
      buf_ptr[30] = tex_ptr[11];
    case 16: 
      buf_ptr[32] = tex_ptr[12];
    case 17: 
      buf_ptr[34] = tex_ptr[13];
    case 18: 
      buf_ptr[36] = tex_ptr[14];
    case 19: 
      buf_ptr[38] = tex_ptr[14];
    case 20: 
      buf_ptr[40] = tex_ptr[15];
    case 21: 
      buf_ptr[42] = tex_ptr[16];
    case 22: 
      buf_ptr[44] = tex_ptr[17];
    case 23: 
      buf_ptr[46] = tex_ptr[17];
    case 24: 
      buf_ptr[48] = tex_ptr[18];
    case 25: 
      buf_ptr[50] = tex_ptr[19];
    case 26: 
      buf_ptr[52] = tex_ptr[20];
    case 27: 
      buf_ptr[54] = tex_ptr[21];
    case 28: 
      buf_ptr[56] = tex_ptr[21];
    case 29: 
      buf_ptr[58] = tex_ptr[22];
    case 30: 
      buf_ptr[60] = tex_ptr[23];
    case 31: 
      buf_ptr[62] = tex_ptr[24];
    case 32: 
      buf_ptr[64] = tex_ptr[24];
    case 33: 
      buf_ptr[66] = tex_ptr[25];
    case 34: 
      buf_ptr[68] = tex_ptr[26];
    case 35: 
      buf_ptr[70] = tex_ptr[27];
    case 36: 
      buf_ptr[72] = tex_ptr[28];
    case 37: 
      buf_ptr[74] = tex_ptr[28];
    case 38: 
      buf_ptr[76] = tex_ptr[29];
    case 39: 
      buf_ptr[78] = tex_ptr[30];
    case 40: 
      buf_ptr[80] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_42_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*24)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[3];
    case 5: 
      buf_ptr[10] = tex_ptr[3];
    case 6: 
      buf_ptr[12] = tex_ptr[4];
    case 7: 
      buf_ptr[14] = tex_ptr[5];
    case 8: 
      buf_ptr[16] = tex_ptr[6];
    case 9: 
      buf_ptr[18] = tex_ptr[6];
    case 10: 
      buf_ptr[20] = tex_ptr[7];
    case 11: 
      buf_ptr[22] = tex_ptr[8];
    case 12: 
      buf_ptr[24] = tex_ptr[9];
    case 13: 
      buf_ptr[26] = tex_ptr[9];
    case 14: 
      buf_ptr[28] = tex_ptr[10];
    case 15: 
      buf_ptr[30] = tex_ptr[11];
    case 16: 
      buf_ptr[32] = tex_ptr[12];
    case 17: 
      buf_ptr[34] = tex_ptr[12];
    case 18: 
      buf_ptr[36] = tex_ptr[13];
    case 19: 
      buf_ptr[38] = tex_ptr[14];
    case 20: 
      buf_ptr[40] = tex_ptr[15];
    case 21: 
      buf_ptr[42] = tex_ptr[16];
    case 22: 
      buf_ptr[44] = tex_ptr[16];
    case 23: 
      buf_ptr[46] = tex_ptr[17];
    case 24: 
      buf_ptr[48] = tex_ptr[18];
    case 25: 
      buf_ptr[50] = tex_ptr[19];
    case 26: 
      buf_ptr[52] = tex_ptr[19];
    case 27: 
      buf_ptr[54] = tex_ptr[20];
    case 28: 
      buf_ptr[56] = tex_ptr[21];
    case 29: 
      buf_ptr[58] = tex_ptr[22];
    case 30: 
      buf_ptr[60] = tex_ptr[22];
    case 31: 
      buf_ptr[62] = tex_ptr[23];
    case 32: 
      buf_ptr[64] = tex_ptr[24];
    case 33: 
      buf_ptr[66] = tex_ptr[25];
    case 34: 
      buf_ptr[68] = tex_ptr[25];
    case 35: 
      buf_ptr[70] = tex_ptr[26];
    case 36: 
      buf_ptr[72] = tex_ptr[27];
    case 37: 
      buf_ptr[74] = tex_ptr[28];
    case 38: 
      buf_ptr[76] = tex_ptr[28];
    case 39: 
      buf_ptr[78] = tex_ptr[29];
    case 40: 
      buf_ptr[80] = tex_ptr[30];
    case 41: 
      buf_ptr[82] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_43_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*23)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[3];
    case 6: 
      buf_ptr[12] = tex_ptr[4];
    case 7: 
      buf_ptr[14] = tex_ptr[5];
    case 8: 
      buf_ptr[16] = tex_ptr[5];
    case 9: 
      buf_ptr[18] = tex_ptr[6];
    case 10: 
      buf_ptr[20] = tex_ptr[7];
    case 11: 
      buf_ptr[22] = tex_ptr[8];
    case 12: 
      buf_ptr[24] = tex_ptr[8];
    case 13: 
      buf_ptr[26] = tex_ptr[9];
    case 14: 
      buf_ptr[28] = tex_ptr[10];
    case 15: 
      buf_ptr[30] = tex_ptr[11];
    case 16: 
      buf_ptr[32] = tex_ptr[11];
    case 17: 
      buf_ptr[34] = tex_ptr[12];
    case 18: 
      buf_ptr[36] = tex_ptr[13];
    case 19: 
      buf_ptr[38] = tex_ptr[14];
    case 20: 
      buf_ptr[40] = tex_ptr[14];
    case 21: 
      buf_ptr[42] = tex_ptr[15];
    case 22: 
      buf_ptr[44] = tex_ptr[16];
    case 23: 
      buf_ptr[46] = tex_ptr[17];
    case 24: 
      buf_ptr[48] = tex_ptr[17];
    case 25: 
      buf_ptr[50] = tex_ptr[18];
    case 26: 
      buf_ptr[52] = tex_ptr[19];
    case 27: 
      buf_ptr[54] = tex_ptr[20];
    case 28: 
      buf_ptr[56] = tex_ptr[20];
    case 29: 
      buf_ptr[58] = tex_ptr[21];
    case 30: 
      buf_ptr[60] = tex_ptr[22];
    case 31: 
      buf_ptr[62] = tex_ptr[23];
    case 32: 
      buf_ptr[64] = tex_ptr[23];
    case 33: 
      buf_ptr[66] = tex_ptr[24];
    case 34: 
      buf_ptr[68] = tex_ptr[25];
    case 35: 
      buf_ptr[70] = tex_ptr[26];
    case 36: 
      buf_ptr[72] = tex_ptr[26];
    case 37: 
      buf_ptr[74] = tex_ptr[27];
    case 38: 
      buf_ptr[76] = tex_ptr[28];
    case 39: 
      buf_ptr[78] = tex_ptr[29];
    case 40: 
      buf_ptr[80] = tex_ptr[29];
    case 41: 
      buf_ptr[82] = tex_ptr[30];
    case 42: 
      buf_ptr[84] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_44_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*23)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[3];
    case 6: 
      buf_ptr[12] = tex_ptr[4];
    case 7: 
      buf_ptr[14] = tex_ptr[5];
    case 8: 
      buf_ptr[16] = tex_ptr[5];
    case 9: 
      buf_ptr[18] = tex_ptr[6];
    case 10: 
      buf_ptr[20] = tex_ptr[7];
    case 11: 
      buf_ptr[22] = tex_ptr[8];
    case 12: 
      buf_ptr[24] = tex_ptr[8];
    case 13: 
      buf_ptr[26] = tex_ptr[9];
    case 14: 
      buf_ptr[28] = tex_ptr[10];
    case 15: 
      buf_ptr[30] = tex_ptr[10];
    case 16: 
      buf_ptr[32] = tex_ptr[11];
    case 17: 
      buf_ptr[34] = tex_ptr[12];
    case 18: 
      buf_ptr[36] = tex_ptr[13];
    case 19: 
      buf_ptr[38] = tex_ptr[13];
    case 20: 
      buf_ptr[40] = tex_ptr[14];
    case 21: 
      buf_ptr[42] = tex_ptr[15];
    case 22: 
      buf_ptr[44] = tex_ptr[15];
    case 23: 
      buf_ptr[46] = tex_ptr[16];
    case 24: 
      buf_ptr[48] = tex_ptr[17];
    case 25: 
      buf_ptr[50] = tex_ptr[18];
    case 26: 
      buf_ptr[52] = tex_ptr[18];
    case 27: 
      buf_ptr[54] = tex_ptr[19];
    case 28: 
      buf_ptr[56] = tex_ptr[20];
    case 29: 
      buf_ptr[58] = tex_ptr[21];
    case 30: 
      buf_ptr[60] = tex_ptr[21];
    case 31: 
      buf_ptr[62] = tex_ptr[22];
    case 32: 
      buf_ptr[64] = tex_ptr[23];
    case 33: 
      buf_ptr[66] = tex_ptr[23];
    case 34: 
      buf_ptr[68] = tex_ptr[24];
    case 35: 
      buf_ptr[70] = tex_ptr[25];
    case 36: 
      buf_ptr[72] = tex_ptr[26];
    case 37: 
      buf_ptr[74] = tex_ptr[26];
    case 38: 
      buf_ptr[76] = tex_ptr[27];
    case 39: 
      buf_ptr[78] = tex_ptr[28];
    case 40: 
      buf_ptr[80] = tex_ptr[29];
    case 41: 
      buf_ptr[82] = tex_ptr[29];
    case 42: 
      buf_ptr[84] = tex_ptr[30];
    case 43: 
      buf_ptr[86] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_45_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*22)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[3];
    case 6: 
      buf_ptr[12] = tex_ptr[4];
    case 7: 
      buf_ptr[14] = tex_ptr[4];
    case 8: 
      buf_ptr[16] = tex_ptr[5];
    case 9: 
      buf_ptr[18] = tex_ptr[6];
    case 10: 
      buf_ptr[20] = tex_ptr[7];
    case 11: 
      buf_ptr[22] = tex_ptr[7];
    case 12: 
      buf_ptr[24] = tex_ptr[8];
    case 13: 
      buf_ptr[26] = tex_ptr[9];
    case 14: 
      buf_ptr[28] = tex_ptr[9];
    case 15: 
      buf_ptr[30] = tex_ptr[10];
    case 16: 
      buf_ptr[32] = tex_ptr[11];
    case 17: 
      buf_ptr[34] = tex_ptr[12];
    case 18: 
      buf_ptr[36] = tex_ptr[12];
    case 19: 
      buf_ptr[38] = tex_ptr[13];
    case 20: 
      buf_ptr[40] = tex_ptr[14];
    case 21: 
      buf_ptr[42] = tex_ptr[14];
    case 22: 
      buf_ptr[44] = tex_ptr[15];
    case 23: 
      buf_ptr[46] = tex_ptr[16];
    case 24: 
      buf_ptr[48] = tex_ptr[17];
    case 25: 
      buf_ptr[50] = tex_ptr[17];
    case 26: 
      buf_ptr[52] = tex_ptr[18];
    case 27: 
      buf_ptr[54] = tex_ptr[19];
    case 28: 
      buf_ptr[56] = tex_ptr[19];
    case 29: 
      buf_ptr[58] = tex_ptr[20];
    case 30: 
      buf_ptr[60] = tex_ptr[21];
    case 31: 
      buf_ptr[62] = tex_ptr[22];
    case 32: 
      buf_ptr[64] = tex_ptr[22];
    case 33: 
      buf_ptr[66] = tex_ptr[23];
    case 34: 
      buf_ptr[68] = tex_ptr[24];
    case 35: 
      buf_ptr[70] = tex_ptr[24];
    case 36: 
      buf_ptr[72] = tex_ptr[25];
    case 37: 
      buf_ptr[74] = tex_ptr[26];
    case 38: 
      buf_ptr[76] = tex_ptr[27];
    case 39: 
      buf_ptr[78] = tex_ptr[27];
    case 40: 
      buf_ptr[80] = tex_ptr[28];
    case 41: 
      buf_ptr[82] = tex_ptr[29];
    case 42: 
      buf_ptr[84] = tex_ptr[29];
    case 43: 
      buf_ptr[86] = tex_ptr[30];
    case 44: 
      buf_ptr[88] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_46_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*22)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[3];
    case 6: 
      buf_ptr[12] = tex_ptr[4];
    case 7: 
      buf_ptr[14] = tex_ptr[4];
    case 8: 
      buf_ptr[16] = tex_ptr[5];
    case 9: 
      buf_ptr[18] = tex_ptr[6];
    case 10: 
      buf_ptr[20] = tex_ptr[6];
    case 11: 
      buf_ptr[22] = tex_ptr[7];
    case 12: 
      buf_ptr[24] = tex_ptr[8];
    case 13: 
      buf_ptr[26] = tex_ptr[9];
    case 14: 
      buf_ptr[28] = tex_ptr[9];
    case 15: 
      buf_ptr[30] = tex_ptr[10];
    case 16: 
      buf_ptr[32] = tex_ptr[11];
    case 17: 
      buf_ptr[34] = tex_ptr[11];
    case 18: 
      buf_ptr[36] = tex_ptr[12];
    case 19: 
      buf_ptr[38] = tex_ptr[13];
    case 20: 
      buf_ptr[40] = tex_ptr[13];
    case 21: 
      buf_ptr[42] = tex_ptr[14];
    case 22: 
      buf_ptr[44] = tex_ptr[15];
    case 23: 
      buf_ptr[46] = tex_ptr[15];
    case 24: 
      buf_ptr[48] = tex_ptr[16];
    case 25: 
      buf_ptr[50] = tex_ptr[17];
    case 26: 
      buf_ptr[52] = tex_ptr[18];
    case 27: 
      buf_ptr[54] = tex_ptr[18];
    case 28: 
      buf_ptr[56] = tex_ptr[19];
    case 29: 
      buf_ptr[58] = tex_ptr[20];
    case 30: 
      buf_ptr[60] = tex_ptr[20];
    case 31: 
      buf_ptr[62] = tex_ptr[21];
    case 32: 
      buf_ptr[64] = tex_ptr[22];
    case 33: 
      buf_ptr[66] = tex_ptr[22];
    case 34: 
      buf_ptr[68] = tex_ptr[23];
    case 35: 
      buf_ptr[70] = tex_ptr[24];
    case 36: 
      buf_ptr[72] = tex_ptr[25];
    case 37: 
      buf_ptr[74] = tex_ptr[25];
    case 38: 
      buf_ptr[76] = tex_ptr[26];
    case 39: 
      buf_ptr[78] = tex_ptr[27];
    case 40: 
      buf_ptr[80] = tex_ptr[27];
    case 41: 
      buf_ptr[82] = tex_ptr[28];
    case 42: 
      buf_ptr[84] = tex_ptr[29];
    case 43: 
      buf_ptr[86] = tex_ptr[29];
    case 44: 
      buf_ptr[88] = tex_ptr[30];
    case 45: 
      buf_ptr[90] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_47_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*21)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[3];
    case 6: 
      buf_ptr[12] = tex_ptr[4];
    case 7: 
      buf_ptr[14] = tex_ptr[4];
    case 8: 
      buf_ptr[16] = tex_ptr[5];
    case 9: 
      buf_ptr[18] = tex_ptr[6];
    case 10: 
      buf_ptr[20] = tex_ptr[6];
    case 11: 
      buf_ptr[22] = tex_ptr[7];
    case 12: 
      buf_ptr[24] = tex_ptr[8];
    case 13: 
      buf_ptr[26] = tex_ptr[8];
    case 14: 
      buf_ptr[28] = tex_ptr[9];
    case 15: 
      buf_ptr[30] = tex_ptr[10];
    case 16: 
      buf_ptr[32] = tex_ptr[10];
    case 17: 
      buf_ptr[34] = tex_ptr[11];
    case 18: 
      buf_ptr[36] = tex_ptr[12];
    case 19: 
      buf_ptr[38] = tex_ptr[12];
    case 20: 
      buf_ptr[40] = tex_ptr[13];
    case 21: 
      buf_ptr[42] = tex_ptr[14];
    case 22: 
      buf_ptr[44] = tex_ptr[14];
    case 23: 
      buf_ptr[46] = tex_ptr[15];
    case 24: 
      buf_ptr[48] = tex_ptr[16];
    case 25: 
      buf_ptr[50] = tex_ptr[17];
    case 26: 
      buf_ptr[52] = tex_ptr[17];
    case 27: 
      buf_ptr[54] = tex_ptr[18];
    case 28: 
      buf_ptr[56] = tex_ptr[19];
    case 29: 
      buf_ptr[58] = tex_ptr[19];
    case 30: 
      buf_ptr[60] = tex_ptr[20];
    case 31: 
      buf_ptr[62] = tex_ptr[21];
    case 32: 
      buf_ptr[64] = tex_ptr[21];
    case 33: 
      buf_ptr[66] = tex_ptr[22];
    case 34: 
      buf_ptr[68] = tex_ptr[23];
    case 35: 
      buf_ptr[70] = tex_ptr[23];
    case 36: 
      buf_ptr[72] = tex_ptr[24];
    case 37: 
      buf_ptr[74] = tex_ptr[25];
    case 38: 
      buf_ptr[76] = tex_ptr[25];
    case 39: 
      buf_ptr[78] = tex_ptr[26];
    case 40: 
      buf_ptr[80] = tex_ptr[27];
    case 41: 
      buf_ptr[82] = tex_ptr[27];
    case 42: 
      buf_ptr[84] = tex_ptr[28];
    case 43: 
      buf_ptr[86] = tex_ptr[29];
    case 44: 
      buf_ptr[88] = tex_ptr[29];
    case 45: 
      buf_ptr[90] = tex_ptr[30];
    case 46: 
      buf_ptr[92] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_48_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*21)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[2];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[3];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[4];
    case 8: 
      buf_ptr[16] = tex_ptr[5];
    case 9: 
      buf_ptr[18] = tex_ptr[6];
    case 10: 
      buf_ptr[20] = tex_ptr[6];
    case 11: 
      buf_ptr[22] = tex_ptr[7];
    case 12: 
      buf_ptr[24] = tex_ptr[8];
    case 13: 
      buf_ptr[26] = tex_ptr[8];
    case 14: 
      buf_ptr[28] = tex_ptr[9];
    case 15: 
      buf_ptr[30] = tex_ptr[9];
    case 16: 
      buf_ptr[32] = tex_ptr[10];
    case 17: 
      buf_ptr[34] = tex_ptr[11];
    case 18: 
      buf_ptr[36] = tex_ptr[11];
    case 19: 
      buf_ptr[38] = tex_ptr[12];
    case 20: 
      buf_ptr[40] = tex_ptr[13];
    case 21: 
      buf_ptr[42] = tex_ptr[13];
    case 22: 
      buf_ptr[44] = tex_ptr[14];
    case 23: 
      buf_ptr[46] = tex_ptr[15];
    case 24: 
      buf_ptr[48] = tex_ptr[15];
    case 25: 
      buf_ptr[50] = tex_ptr[16];
    case 26: 
      buf_ptr[52] = tex_ptr[17];
    case 27: 
      buf_ptr[54] = tex_ptr[17];
    case 28: 
      buf_ptr[56] = tex_ptr[18];
    case 29: 
      buf_ptr[58] = tex_ptr[19];
    case 30: 
      buf_ptr[60] = tex_ptr[20];
    case 31: 
      buf_ptr[62] = tex_ptr[20];
    case 32: 
      buf_ptr[64] = tex_ptr[21];
    case 33: 
      buf_ptr[66] = tex_ptr[22];
    case 34: 
      buf_ptr[68] = tex_ptr[22];
    case 35: 
      buf_ptr[70] = tex_ptr[23];
    case 36: 
      buf_ptr[72] = tex_ptr[24];
    case 37: 
      buf_ptr[74] = tex_ptr[24];
    case 38: 
      buf_ptr[76] = tex_ptr[25];
    case 39: 
      buf_ptr[78] = tex_ptr[26];
    case 40: 
      buf_ptr[80] = tex_ptr[26];
    case 41: 
      buf_ptr[82] = tex_ptr[27];
    case 42: 
      buf_ptr[84] = tex_ptr[28];
    case 43: 
      buf_ptr[86] = tex_ptr[28];
    case 44: 
      buf_ptr[88] = tex_ptr[29];
    case 45: 
      buf_ptr[90] = tex_ptr[30];
    case 46: 
      buf_ptr[92] = tex_ptr[30];
    case 47: 
      buf_ptr[94] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_49_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*20)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[3];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[4];
    case 8: 
      buf_ptr[16] = tex_ptr[5];
    case 9: 
      buf_ptr[18] = tex_ptr[5];
    case 10: 
      buf_ptr[20] = tex_ptr[6];
    case 11: 
      buf_ptr[22] = tex_ptr[7];
    case 12: 
      buf_ptr[24] = tex_ptr[7];
    case 13: 
      buf_ptr[26] = tex_ptr[8];
    case 14: 
      buf_ptr[28] = tex_ptr[9];
    case 15: 
      buf_ptr[30] = tex_ptr[9];
    case 16: 
      buf_ptr[32] = tex_ptr[10];
    case 17: 
      buf_ptr[34] = tex_ptr[11];
    case 18: 
      buf_ptr[36] = tex_ptr[11];
    case 19: 
      buf_ptr[38] = tex_ptr[12];
    case 20: 
      buf_ptr[40] = tex_ptr[13];
    case 21: 
      buf_ptr[42] = tex_ptr[13];
    case 22: 
      buf_ptr[44] = tex_ptr[14];
    case 23: 
      buf_ptr[46] = tex_ptr[15];
    case 24: 
      buf_ptr[48] = tex_ptr[15];
    case 25: 
      buf_ptr[50] = tex_ptr[16];
    case 26: 
      buf_ptr[52] = tex_ptr[16];
    case 27: 
      buf_ptr[54] = tex_ptr[17];
    case 28: 
      buf_ptr[56] = tex_ptr[18];
    case 29: 
      buf_ptr[58] = tex_ptr[18];
    case 30: 
      buf_ptr[60] = tex_ptr[19];
    case 31: 
      buf_ptr[62] = tex_ptr[20];
    case 32: 
      buf_ptr[64] = tex_ptr[20];
    case 33: 
      buf_ptr[66] = tex_ptr[21];
    case 34: 
      buf_ptr[68] = tex_ptr[22];
    case 35: 
      buf_ptr[70] = tex_ptr[22];
    case 36: 
      buf_ptr[72] = tex_ptr[23];
    case 37: 
      buf_ptr[74] = tex_ptr[24];
    case 38: 
      buf_ptr[76] = tex_ptr[24];
    case 39: 
      buf_ptr[78] = tex_ptr[25];
    case 40: 
      buf_ptr[80] = tex_ptr[26];
    case 41: 
      buf_ptr[82] = tex_ptr[26];
    case 42: 
      buf_ptr[84] = tex_ptr[27];
    case 43: 
      buf_ptr[86] = tex_ptr[28];
    case 44: 
      buf_ptr[88] = tex_ptr[28];
    case 45: 
      buf_ptr[90] = tex_ptr[29];
    case 46: 
      buf_ptr[92] = tex_ptr[30];
    case 47: 
      buf_ptr[94] = tex_ptr[30];
    case 48: 
      buf_ptr[96] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_50_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*20)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[3];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[4];
    case 8: 
      buf_ptr[16] = tex_ptr[5];
    case 9: 
      buf_ptr[18] = tex_ptr[5];
    case 10: 
      buf_ptr[20] = tex_ptr[6];
    case 11: 
      buf_ptr[22] = tex_ptr[7];
    case 12: 
      buf_ptr[24] = tex_ptr[7];
    case 13: 
      buf_ptr[26] = tex_ptr[8];
    case 14: 
      buf_ptr[28] = tex_ptr[8];
    case 15: 
      buf_ptr[30] = tex_ptr[9];
    case 16: 
      buf_ptr[32] = tex_ptr[10];
    case 17: 
      buf_ptr[34] = tex_ptr[10];
    case 18: 
      buf_ptr[36] = tex_ptr[11];
    case 19: 
      buf_ptr[38] = tex_ptr[12];
    case 20: 
      buf_ptr[40] = tex_ptr[12];
    case 21: 
      buf_ptr[42] = tex_ptr[13];
    case 22: 
      buf_ptr[44] = tex_ptr[14];
    case 23: 
      buf_ptr[46] = tex_ptr[14];
    case 24: 
      buf_ptr[48] = tex_ptr[15];
    case 25: 
      buf_ptr[50] = tex_ptr[16];
    case 26: 
      buf_ptr[52] = tex_ptr[16];
    case 27: 
      buf_ptr[54] = tex_ptr[17];
    case 28: 
      buf_ptr[56] = tex_ptr[17];
    case 29: 
      buf_ptr[58] = tex_ptr[18];
    case 30: 
      buf_ptr[60] = tex_ptr[19];
    case 31: 
      buf_ptr[62] = tex_ptr[19];
    case 32: 
      buf_ptr[64] = tex_ptr[20];
    case 33: 
      buf_ptr[66] = tex_ptr[21];
    case 34: 
      buf_ptr[68] = tex_ptr[21];
    case 35: 
      buf_ptr[70] = tex_ptr[22];
    case 36: 
      buf_ptr[72] = tex_ptr[23];
    case 37: 
      buf_ptr[74] = tex_ptr[23];
    case 38: 
      buf_ptr[76] = tex_ptr[24];
    case 39: 
      buf_ptr[78] = tex_ptr[24];
    case 40: 
      buf_ptr[80] = tex_ptr[25];
    case 41: 
      buf_ptr[82] = tex_ptr[26];
    case 42: 
      buf_ptr[84] = tex_ptr[26];
    case 43: 
      buf_ptr[86] = tex_ptr[27];
    case 44: 
      buf_ptr[88] = tex_ptr[28];
    case 45: 
      buf_ptr[90] = tex_ptr[28];
    case 46: 
      buf_ptr[92] = tex_ptr[29];
    case 47: 
      buf_ptr[94] = tex_ptr[30];
    case 48: 
      buf_ptr[96] = tex_ptr[30];
    case 49: 
      buf_ptr[98] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_51_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*20)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[3];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[4];
    case 8: 
      buf_ptr[16] = tex_ptr[5];
    case 9: 
      buf_ptr[18] = tex_ptr[5];
    case 10: 
      buf_ptr[20] = tex_ptr[6];
    case 11: 
      buf_ptr[22] = tex_ptr[6];
    case 12: 
      buf_ptr[24] = tex_ptr[7];
    case 13: 
      buf_ptr[26] = tex_ptr[8];
    case 14: 
      buf_ptr[28] = tex_ptr[8];
    case 15: 
      buf_ptr[30] = tex_ptr[9];
    case 16: 
      buf_ptr[32] = tex_ptr[10];
    case 17: 
      buf_ptr[34] = tex_ptr[10];
    case 18: 
      buf_ptr[36] = tex_ptr[11];
    case 19: 
      buf_ptr[38] = tex_ptr[11];
    case 20: 
      buf_ptr[40] = tex_ptr[12];
    case 21: 
      buf_ptr[42] = tex_ptr[13];
    case 22: 
      buf_ptr[44] = tex_ptr[13];
    case 23: 
      buf_ptr[46] = tex_ptr[14];
    case 24: 
      buf_ptr[48] = tex_ptr[15];
    case 25: 
      buf_ptr[50] = tex_ptr[15];
    case 26: 
      buf_ptr[52] = tex_ptr[16];
    case 27: 
      buf_ptr[54] = tex_ptr[16];
    case 28: 
      buf_ptr[56] = tex_ptr[17];
    case 29: 
      buf_ptr[58] = tex_ptr[18];
    case 30: 
      buf_ptr[60] = tex_ptr[18];
    case 31: 
      buf_ptr[62] = tex_ptr[19];
    case 32: 
      buf_ptr[64] = tex_ptr[20];
    case 33: 
      buf_ptr[66] = tex_ptr[20];
    case 34: 
      buf_ptr[68] = tex_ptr[21];
    case 35: 
      buf_ptr[70] = tex_ptr[21];
    case 36: 
      buf_ptr[72] = tex_ptr[22];
    case 37: 
      buf_ptr[74] = tex_ptr[23];
    case 38: 
      buf_ptr[76] = tex_ptr[23];
    case 39: 
      buf_ptr[78] = tex_ptr[24];
    case 40: 
      buf_ptr[80] = tex_ptr[25];
    case 41: 
      buf_ptr[82] = tex_ptr[25];
    case 42: 
      buf_ptr[84] = tex_ptr[26];
    case 43: 
      buf_ptr[86] = tex_ptr[26];
    case 44: 
      buf_ptr[88] = tex_ptr[27];
    case 45: 
      buf_ptr[90] = tex_ptr[28];
    case 46: 
      buf_ptr[92] = tex_ptr[28];
    case 47: 
      buf_ptr[94] = tex_ptr[29];
    case 48: 
      buf_ptr[96] = tex_ptr[30];
    case 49: 
      buf_ptr[98] = tex_ptr[30];
    case 50: 
      buf_ptr[100] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_52_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*19)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[3];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[4];
    case 8: 
      buf_ptr[16] = tex_ptr[4];
    case 9: 
      buf_ptr[18] = tex_ptr[5];
    case 10: 
      buf_ptr[20] = tex_ptr[6];
    case 11: 
      buf_ptr[22] = tex_ptr[6];
    case 12: 
      buf_ptr[24] = tex_ptr[7];
    case 13: 
      buf_ptr[26] = tex_ptr[7];
    case 14: 
      buf_ptr[28] = tex_ptr[8];
    case 15: 
      buf_ptr[30] = tex_ptr[9];
    case 16: 
      buf_ptr[32] = tex_ptr[9];
    case 17: 
      buf_ptr[34] = tex_ptr[10];
    case 18: 
      buf_ptr[36] = tex_ptr[11];
    case 19: 
      buf_ptr[38] = tex_ptr[11];
    case 20: 
      buf_ptr[40] = tex_ptr[12];
    case 21: 
      buf_ptr[42] = tex_ptr[12];
    case 22: 
      buf_ptr[44] = tex_ptr[13];
    case 23: 
      buf_ptr[46] = tex_ptr[14];
    case 24: 
      buf_ptr[48] = tex_ptr[14];
    case 25: 
      buf_ptr[50] = tex_ptr[15];
    case 26: 
      buf_ptr[52] = tex_ptr[15];
    case 27: 
      buf_ptr[54] = tex_ptr[16];
    case 28: 
      buf_ptr[56] = tex_ptr[17];
    case 29: 
      buf_ptr[58] = tex_ptr[17];
    case 30: 
      buf_ptr[60] = tex_ptr[18];
    case 31: 
      buf_ptr[62] = tex_ptr[19];
    case 32: 
      buf_ptr[64] = tex_ptr[19];
    case 33: 
      buf_ptr[66] = tex_ptr[20];
    case 34: 
      buf_ptr[68] = tex_ptr[20];
    case 35: 
      buf_ptr[70] = tex_ptr[21];
    case 36: 
      buf_ptr[72] = tex_ptr[22];
    case 37: 
      buf_ptr[74] = tex_ptr[22];
    case 38: 
      buf_ptr[76] = tex_ptr[23];
    case 39: 
      buf_ptr[78] = tex_ptr[24];
    case 40: 
      buf_ptr[80] = tex_ptr[24];
    case 41: 
      buf_ptr[82] = tex_ptr[25];
    case 42: 
      buf_ptr[84] = tex_ptr[25];
    case 43: 
      buf_ptr[86] = tex_ptr[26];
    case 44: 
      buf_ptr[88] = tex_ptr[27];
    case 45: 
      buf_ptr[90] = tex_ptr[27];
    case 46: 
      buf_ptr[92] = tex_ptr[28];
    case 47: 
      buf_ptr[94] = tex_ptr[28];
    case 48: 
      buf_ptr[96] = tex_ptr[29];
    case 49: 
      buf_ptr[98] = tex_ptr[30];
    case 50: 
      buf_ptr[100] = tex_ptr[30];
    case 51: 
      buf_ptr[102] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_53_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*19)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[3];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[4];
    case 8: 
      buf_ptr[16] = tex_ptr[4];
    case 9: 
      buf_ptr[18] = tex_ptr[5];
    case 10: 
      buf_ptr[20] = tex_ptr[6];
    case 11: 
      buf_ptr[22] = tex_ptr[6];
    case 12: 
      buf_ptr[24] = tex_ptr[7];
    case 13: 
      buf_ptr[26] = tex_ptr[7];
    case 14: 
      buf_ptr[28] = tex_ptr[8];
    case 15: 
      buf_ptr[30] = tex_ptr[9];
    case 16: 
      buf_ptr[32] = tex_ptr[9];
    case 17: 
      buf_ptr[34] = tex_ptr[10];
    case 18: 
      buf_ptr[36] = tex_ptr[10];
    case 19: 
      buf_ptr[38] = tex_ptr[11];
    case 20: 
      buf_ptr[40] = tex_ptr[12];
    case 21: 
      buf_ptr[42] = tex_ptr[12];
    case 22: 
      buf_ptr[44] = tex_ptr[13];
    case 23: 
      buf_ptr[46] = tex_ptr[13];
    case 24: 
      buf_ptr[48] = tex_ptr[14];
    case 25: 
      buf_ptr[50] = tex_ptr[15];
    case 26: 
      buf_ptr[52] = tex_ptr[15];
    case 27: 
      buf_ptr[54] = tex_ptr[16];
    case 28: 
      buf_ptr[56] = tex_ptr[16];
    case 29: 
      buf_ptr[58] = tex_ptr[17];
    case 30: 
      buf_ptr[60] = tex_ptr[18];
    case 31: 
      buf_ptr[62] = tex_ptr[18];
    case 32: 
      buf_ptr[64] = tex_ptr[19];
    case 33: 
      buf_ptr[66] = tex_ptr[19];
    case 34: 
      buf_ptr[68] = tex_ptr[20];
    case 35: 
      buf_ptr[70] = tex_ptr[21];
    case 36: 
      buf_ptr[72] = tex_ptr[21];
    case 37: 
      buf_ptr[74] = tex_ptr[22];
    case 38: 
      buf_ptr[76] = tex_ptr[22];
    case 39: 
      buf_ptr[78] = tex_ptr[23];
    case 40: 
      buf_ptr[80] = tex_ptr[24];
    case 41: 
      buf_ptr[82] = tex_ptr[24];
    case 42: 
      buf_ptr[84] = tex_ptr[25];
    case 43: 
      buf_ptr[86] = tex_ptr[25];
    case 44: 
      buf_ptr[88] = tex_ptr[26];
    case 45: 
      buf_ptr[90] = tex_ptr[27];
    case 46: 
      buf_ptr[92] = tex_ptr[27];
    case 47: 
      buf_ptr[94] = tex_ptr[28];
    case 48: 
      buf_ptr[96] = tex_ptr[28];
    case 49: 
      buf_ptr[98] = tex_ptr[29];
    case 50: 
      buf_ptr[100] = tex_ptr[30];
    case 51: 
      buf_ptr[102] = tex_ptr[30];
    case 52: 
      buf_ptr[104] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_54_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*18)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[4];
    case 8: 
      buf_ptr[16] = tex_ptr[4];
    case 9: 
      buf_ptr[18] = tex_ptr[5];
    case 10: 
      buf_ptr[20] = tex_ptr[5];
    case 11: 
      buf_ptr[22] = tex_ptr[6];
    case 12: 
      buf_ptr[24] = tex_ptr[7];
    case 13: 
      buf_ptr[26] = tex_ptr[7];
    case 14: 
      buf_ptr[28] = tex_ptr[8];
    case 15: 
      buf_ptr[30] = tex_ptr[8];
    case 16: 
      buf_ptr[32] = tex_ptr[9];
    case 17: 
      buf_ptr[34] = tex_ptr[10];
    case 18: 
      buf_ptr[36] = tex_ptr[10];
    case 19: 
      buf_ptr[38] = tex_ptr[11];
    case 20: 
      buf_ptr[40] = tex_ptr[11];
    case 21: 
      buf_ptr[42] = tex_ptr[12];
    case 22: 
      buf_ptr[44] = tex_ptr[13];
    case 23: 
      buf_ptr[46] = tex_ptr[13];
    case 24: 
      buf_ptr[48] = tex_ptr[14];
    case 25: 
      buf_ptr[50] = tex_ptr[14];
    case 26: 
      buf_ptr[52] = tex_ptr[15];
    case 27: 
      buf_ptr[54] = tex_ptr[15];
    case 28: 
      buf_ptr[56] = tex_ptr[16];
    case 29: 
      buf_ptr[58] = tex_ptr[17];
    case 30: 
      buf_ptr[60] = tex_ptr[17];
    case 31: 
      buf_ptr[62] = tex_ptr[18];
    case 32: 
      buf_ptr[64] = tex_ptr[18];
    case 33: 
      buf_ptr[66] = tex_ptr[19];
    case 34: 
      buf_ptr[68] = tex_ptr[20];
    case 35: 
      buf_ptr[70] = tex_ptr[20];
    case 36: 
      buf_ptr[72] = tex_ptr[21];
    case 37: 
      buf_ptr[74] = tex_ptr[21];
    case 38: 
      buf_ptr[76] = tex_ptr[22];
    case 39: 
      buf_ptr[78] = tex_ptr[23];
    case 40: 
      buf_ptr[80] = tex_ptr[23];
    case 41: 
      buf_ptr[82] = tex_ptr[24];
    case 42: 
      buf_ptr[84] = tex_ptr[24];
    case 43: 
      buf_ptr[86] = tex_ptr[25];
    case 44: 
      buf_ptr[88] = tex_ptr[26];
    case 45: 
      buf_ptr[90] = tex_ptr[26];
    case 46: 
      buf_ptr[92] = tex_ptr[27];
    case 47: 
      buf_ptr[94] = tex_ptr[27];
    case 48: 
      buf_ptr[96] = tex_ptr[28];
    case 49: 
      buf_ptr[98] = tex_ptr[29];
    case 50: 
      buf_ptr[100] = tex_ptr[29];
    case 51: 
      buf_ptr[102] = tex_ptr[30];
    case 52: 
      buf_ptr[104] = tex_ptr[30];
    case 53: 
      buf_ptr[106] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_55_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*18)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[4];
    case 8: 
      buf_ptr[16] = tex_ptr[4];
    case 9: 
      buf_ptr[18] = tex_ptr[5];
    case 10: 
      buf_ptr[20] = tex_ptr[5];
    case 11: 
      buf_ptr[22] = tex_ptr[6];
    case 12: 
      buf_ptr[24] = tex_ptr[6];
    case 13: 
      buf_ptr[26] = tex_ptr[7];
    case 14: 
      buf_ptr[28] = tex_ptr[8];
    case 15: 
      buf_ptr[30] = tex_ptr[8];
    case 16: 
      buf_ptr[32] = tex_ptr[9];
    case 17: 
      buf_ptr[34] = tex_ptr[9];
    case 18: 
      buf_ptr[36] = tex_ptr[10];
    case 19: 
      buf_ptr[38] = tex_ptr[11];
    case 20: 
      buf_ptr[40] = tex_ptr[11];
    case 21: 
      buf_ptr[42] = tex_ptr[12];
    case 22: 
      buf_ptr[44] = tex_ptr[12];
    case 23: 
      buf_ptr[46] = tex_ptr[13];
    case 24: 
      buf_ptr[48] = tex_ptr[13];
    case 25: 
      buf_ptr[50] = tex_ptr[14];
    case 26: 
      buf_ptr[52] = tex_ptr[15];
    case 27: 
      buf_ptr[54] = tex_ptr[15];
    case 28: 
      buf_ptr[56] = tex_ptr[16];
    case 29: 
      buf_ptr[58] = tex_ptr[16];
    case 30: 
      buf_ptr[60] = tex_ptr[17];
    case 31: 
      buf_ptr[62] = tex_ptr[18];
    case 32: 
      buf_ptr[64] = tex_ptr[18];
    case 33: 
      buf_ptr[66] = tex_ptr[19];
    case 34: 
      buf_ptr[68] = tex_ptr[19];
    case 35: 
      buf_ptr[70] = tex_ptr[20];
    case 36: 
      buf_ptr[72] = tex_ptr[20];
    case 37: 
      buf_ptr[74] = tex_ptr[21];
    case 38: 
      buf_ptr[76] = tex_ptr[22];
    case 39: 
      buf_ptr[78] = tex_ptr[22];
    case 40: 
      buf_ptr[80] = tex_ptr[23];
    case 41: 
      buf_ptr[82] = tex_ptr[23];
    case 42: 
      buf_ptr[84] = tex_ptr[24];
    case 43: 
      buf_ptr[86] = tex_ptr[25];
    case 44: 
      buf_ptr[88] = tex_ptr[25];
    case 45: 
      buf_ptr[90] = tex_ptr[26];
    case 46: 
      buf_ptr[92] = tex_ptr[26];
    case 47: 
      buf_ptr[94] = tex_ptr[27];
    case 48: 
      buf_ptr[96] = tex_ptr[27];
    case 49: 
      buf_ptr[98] = tex_ptr[28];
    case 50: 
      buf_ptr[100] = tex_ptr[29];
    case 51: 
      buf_ptr[102] = tex_ptr[29];
    case 52: 
      buf_ptr[104] = tex_ptr[30];
    case 53: 
      buf_ptr[106] = tex_ptr[30];
    case 54: 
      buf_ptr[108] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_56_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*18)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[4];
    case 9: 
      buf_ptr[18] = tex_ptr[5];
    case 10: 
      buf_ptr[20] = tex_ptr[5];
    case 11: 
      buf_ptr[22] = tex_ptr[6];
    case 12: 
      buf_ptr[24] = tex_ptr[6];
    case 13: 
      buf_ptr[26] = tex_ptr[7];
    case 14: 
      buf_ptr[28] = tex_ptr[7];
    case 15: 
      buf_ptr[30] = tex_ptr[8];
    case 16: 
      buf_ptr[32] = tex_ptr[9];
    case 17: 
      buf_ptr[34] = tex_ptr[9];
    case 18: 
      buf_ptr[36] = tex_ptr[10];
    case 19: 
      buf_ptr[38] = tex_ptr[10];
    case 20: 
      buf_ptr[40] = tex_ptr[11];
    case 21: 
      buf_ptr[42] = tex_ptr[11];
    case 22: 
      buf_ptr[44] = tex_ptr[12];
    case 23: 
      buf_ptr[46] = tex_ptr[13];
    case 24: 
      buf_ptr[48] = tex_ptr[13];
    case 25: 
      buf_ptr[50] = tex_ptr[14];
    case 26: 
      buf_ptr[52] = tex_ptr[14];
    case 27: 
      buf_ptr[54] = tex_ptr[15];
    case 28: 
      buf_ptr[56] = tex_ptr[15];
    case 29: 
      buf_ptr[58] = tex_ptr[16];
    case 30: 
      buf_ptr[60] = tex_ptr[17];
    case 31: 
      buf_ptr[62] = tex_ptr[17];
    case 32: 
      buf_ptr[64] = tex_ptr[18];
    case 33: 
      buf_ptr[66] = tex_ptr[18];
    case 34: 
      buf_ptr[68] = tex_ptr[19];
    case 35: 
      buf_ptr[70] = tex_ptr[20];
    case 36: 
      buf_ptr[72] = tex_ptr[20];
    case 37: 
      buf_ptr[74] = tex_ptr[21];
    case 38: 
      buf_ptr[76] = tex_ptr[21];
    case 39: 
      buf_ptr[78] = tex_ptr[22];
    case 40: 
      buf_ptr[80] = tex_ptr[22];
    case 41: 
      buf_ptr[82] = tex_ptr[23];
    case 42: 
      buf_ptr[84] = tex_ptr[24];
    case 43: 
      buf_ptr[86] = tex_ptr[24];
    case 44: 
      buf_ptr[88] = tex_ptr[25];
    case 45: 
      buf_ptr[90] = tex_ptr[25];
    case 46: 
      buf_ptr[92] = tex_ptr[26];
    case 47: 
      buf_ptr[94] = tex_ptr[26];
    case 48: 
      buf_ptr[96] = tex_ptr[27];
    case 49: 
      buf_ptr[98] = tex_ptr[28];
    case 50: 
      buf_ptr[100] = tex_ptr[28];
    case 51: 
      buf_ptr[102] = tex_ptr[29];
    case 52: 
      buf_ptr[104] = tex_ptr[29];
    case 53: 
      buf_ptr[106] = tex_ptr[30];
    case 54: 
      buf_ptr[108] = tex_ptr[30];
    case 55: 
      buf_ptr[110] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_57_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*17)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[4];
    case 9: 
      buf_ptr[18] = tex_ptr[5];
    case 10: 
      buf_ptr[20] = tex_ptr[5];
    case 11: 
      buf_ptr[22] = tex_ptr[6];
    case 12: 
      buf_ptr[24] = tex_ptr[6];
    case 13: 
      buf_ptr[26] = tex_ptr[7];
    case 14: 
      buf_ptr[28] = tex_ptr[7];
    case 15: 
      buf_ptr[30] = tex_ptr[8];
    case 16: 
      buf_ptr[32] = tex_ptr[8];
    case 17: 
      buf_ptr[34] = tex_ptr[9];
    case 18: 
      buf_ptr[36] = tex_ptr[10];
    case 19: 
      buf_ptr[38] = tex_ptr[10];
    case 20: 
      buf_ptr[40] = tex_ptr[11];
    case 21: 
      buf_ptr[42] = tex_ptr[11];
    case 22: 
      buf_ptr[44] = tex_ptr[12];
    case 23: 
      buf_ptr[46] = tex_ptr[12];
    case 24: 
      buf_ptr[48] = tex_ptr[13];
    case 25: 
      buf_ptr[50] = tex_ptr[14];
    case 26: 
      buf_ptr[52] = tex_ptr[14];
    case 27: 
      buf_ptr[54] = tex_ptr[15];
    case 28: 
      buf_ptr[56] = tex_ptr[15];
    case 29: 
      buf_ptr[58] = tex_ptr[16];
    case 30: 
      buf_ptr[60] = tex_ptr[16];
    case 31: 
      buf_ptr[62] = tex_ptr[17];
    case 32: 
      buf_ptr[64] = tex_ptr[17];
    case 33: 
      buf_ptr[66] = tex_ptr[18];
    case 34: 
      buf_ptr[68] = tex_ptr[19];
    case 35: 
      buf_ptr[70] = tex_ptr[19];
    case 36: 
      buf_ptr[72] = tex_ptr[20];
    case 37: 
      buf_ptr[74] = tex_ptr[20];
    case 38: 
      buf_ptr[76] = tex_ptr[21];
    case 39: 
      buf_ptr[78] = tex_ptr[21];
    case 40: 
      buf_ptr[80] = tex_ptr[22];
    case 41: 
      buf_ptr[82] = tex_ptr[23];
    case 42: 
      buf_ptr[84] = tex_ptr[23];
    case 43: 
      buf_ptr[86] = tex_ptr[24];
    case 44: 
      buf_ptr[88] = tex_ptr[24];
    case 45: 
      buf_ptr[90] = tex_ptr[25];
    case 46: 
      buf_ptr[92] = tex_ptr[25];
    case 47: 
      buf_ptr[94] = tex_ptr[26];
    case 48: 
      buf_ptr[96] = tex_ptr[26];
    case 49: 
      buf_ptr[98] = tex_ptr[27];
    case 50: 
      buf_ptr[100] = tex_ptr[28];
    case 51: 
      buf_ptr[102] = tex_ptr[28];
    case 52: 
      buf_ptr[104] = tex_ptr[29];
    case 53: 
      buf_ptr[106] = tex_ptr[29];
    case 54: 
      buf_ptr[108] = tex_ptr[30];
    case 55: 
      buf_ptr[110] = tex_ptr[30];
    case 56: 
      buf_ptr[112] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_58_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*17)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[4];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[5];
    case 11: 
      buf_ptr[22] = tex_ptr[6];
    case 12: 
      buf_ptr[24] = tex_ptr[6];
    case 13: 
      buf_ptr[26] = tex_ptr[7];
    case 14: 
      buf_ptr[28] = tex_ptr[7];
    case 15: 
      buf_ptr[30] = tex_ptr[8];
    case 16: 
      buf_ptr[32] = tex_ptr[8];
    case 17: 
      buf_ptr[34] = tex_ptr[9];
    case 18: 
      buf_ptr[36] = tex_ptr[9];
    case 19: 
      buf_ptr[38] = tex_ptr[10];
    case 20: 
      buf_ptr[40] = tex_ptr[11];
    case 21: 
      buf_ptr[42] = tex_ptr[11];
    case 22: 
      buf_ptr[44] = tex_ptr[12];
    case 23: 
      buf_ptr[46] = tex_ptr[12];
    case 24: 
      buf_ptr[48] = tex_ptr[13];
    case 25: 
      buf_ptr[50] = tex_ptr[13];
    case 26: 
      buf_ptr[52] = tex_ptr[14];
    case 27: 
      buf_ptr[54] = tex_ptr[14];
    case 28: 
      buf_ptr[56] = tex_ptr[15];
    case 29: 
      buf_ptr[58] = tex_ptr[15];
    case 30: 
      buf_ptr[60] = tex_ptr[16];
    case 31: 
      buf_ptr[62] = tex_ptr[17];
    case 32: 
      buf_ptr[64] = tex_ptr[17];
    case 33: 
      buf_ptr[66] = tex_ptr[18];
    case 34: 
      buf_ptr[68] = tex_ptr[18];
    case 35: 
      buf_ptr[70] = tex_ptr[19];
    case 36: 
      buf_ptr[72] = tex_ptr[19];
    case 37: 
      buf_ptr[74] = tex_ptr[20];
    case 38: 
      buf_ptr[76] = tex_ptr[20];
    case 39: 
      buf_ptr[78] = tex_ptr[21];
    case 40: 
      buf_ptr[80] = tex_ptr[22];
    case 41: 
      buf_ptr[82] = tex_ptr[22];
    case 42: 
      buf_ptr[84] = tex_ptr[23];
    case 43: 
      buf_ptr[86] = tex_ptr[23];
    case 44: 
      buf_ptr[88] = tex_ptr[24];
    case 45: 
      buf_ptr[90] = tex_ptr[24];
    case 46: 
      buf_ptr[92] = tex_ptr[25];
    case 47: 
      buf_ptr[94] = tex_ptr[25];
    case 48: 
      buf_ptr[96] = tex_ptr[26];
    case 49: 
      buf_ptr[98] = tex_ptr[27];
    case 50: 
      buf_ptr[100] = tex_ptr[27];
    case 51: 
      buf_ptr[102] = tex_ptr[28];
    case 52: 
      buf_ptr[104] = tex_ptr[28];
    case 53: 
      buf_ptr[106] = tex_ptr[29];
    case 54: 
      buf_ptr[108] = tex_ptr[29];
    case 55: 
      buf_ptr[110] = tex_ptr[30];
    case 56: 
      buf_ptr[112] = tex_ptr[30];
    case 57: 
      buf_ptr[114] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_59_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*17)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[4];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[5];
    case 11: 
      buf_ptr[22] = tex_ptr[5];
    case 12: 
      buf_ptr[24] = tex_ptr[6];
    case 13: 
      buf_ptr[26] = tex_ptr[7];
    case 14: 
      buf_ptr[28] = tex_ptr[7];
    case 15: 
      buf_ptr[30] = tex_ptr[8];
    case 16: 
      buf_ptr[32] = tex_ptr[8];
    case 17: 
      buf_ptr[34] = tex_ptr[9];
    case 18: 
      buf_ptr[36] = tex_ptr[9];
    case 19: 
      buf_ptr[38] = tex_ptr[10];
    case 20: 
      buf_ptr[40] = tex_ptr[10];
    case 21: 
      buf_ptr[42] = tex_ptr[11];
    case 22: 
      buf_ptr[44] = tex_ptr[11];
    case 23: 
      buf_ptr[46] = tex_ptr[12];
    case 24: 
      buf_ptr[48] = tex_ptr[13];
    case 25: 
      buf_ptr[50] = tex_ptr[13];
    case 26: 
      buf_ptr[52] = tex_ptr[14];
    case 27: 
      buf_ptr[54] = tex_ptr[14];
    case 28: 
      buf_ptr[56] = tex_ptr[15];
    case 29: 
      buf_ptr[58] = tex_ptr[15];
    case 30: 
      buf_ptr[60] = tex_ptr[16];
    case 31: 
      buf_ptr[62] = tex_ptr[16];
    case 32: 
      buf_ptr[64] = tex_ptr[17];
    case 33: 
      buf_ptr[66] = tex_ptr[17];
    case 34: 
      buf_ptr[68] = tex_ptr[18];
    case 35: 
      buf_ptr[70] = tex_ptr[18];
    case 36: 
      buf_ptr[72] = tex_ptr[19];
    case 37: 
      buf_ptr[74] = tex_ptr[20];
    case 38: 
      buf_ptr[76] = tex_ptr[20];
    case 39: 
      buf_ptr[78] = tex_ptr[21];
    case 40: 
      buf_ptr[80] = tex_ptr[21];
    case 41: 
      buf_ptr[82] = tex_ptr[22];
    case 42: 
      buf_ptr[84] = tex_ptr[22];
    case 43: 
      buf_ptr[86] = tex_ptr[23];
    case 44: 
      buf_ptr[88] = tex_ptr[23];
    case 45: 
      buf_ptr[90] = tex_ptr[24];
    case 46: 
      buf_ptr[92] = tex_ptr[24];
    case 47: 
      buf_ptr[94] = tex_ptr[25];
    case 48: 
      buf_ptr[96] = tex_ptr[26];
    case 49: 
      buf_ptr[98] = tex_ptr[26];
    case 50: 
      buf_ptr[100] = tex_ptr[27];
    case 51: 
      buf_ptr[102] = tex_ptr[27];
    case 52: 
      buf_ptr[104] = tex_ptr[28];
    case 53: 
      buf_ptr[106] = tex_ptr[28];
    case 54: 
      buf_ptr[108] = tex_ptr[29];
    case 55: 
      buf_ptr[110] = tex_ptr[29];
    case 56: 
      buf_ptr[112] = tex_ptr[30];
    case 57: 
      buf_ptr[114] = tex_ptr[30];
    case 58: 
      buf_ptr[116] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_60_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*17)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[4];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[5];
    case 11: 
      buf_ptr[22] = tex_ptr[5];
    case 12: 
      buf_ptr[24] = tex_ptr[6];
    case 13: 
      buf_ptr[26] = tex_ptr[6];
    case 14: 
      buf_ptr[28] = tex_ptr[7];
    case 15: 
      buf_ptr[30] = tex_ptr[7];
    case 16: 
      buf_ptr[32] = tex_ptr[8];
    case 17: 
      buf_ptr[34] = tex_ptr[9];
    case 18: 
      buf_ptr[36] = tex_ptr[9];
    case 19: 
      buf_ptr[38] = tex_ptr[10];
    case 20: 
      buf_ptr[40] = tex_ptr[10];
    case 21: 
      buf_ptr[42] = tex_ptr[11];
    case 22: 
      buf_ptr[44] = tex_ptr[11];
    case 23: 
      buf_ptr[46] = tex_ptr[12];
    case 24: 
      buf_ptr[48] = tex_ptr[12];
    case 25: 
      buf_ptr[50] = tex_ptr[13];
    case 26: 
      buf_ptr[52] = tex_ptr[13];
    case 27: 
      buf_ptr[54] = tex_ptr[14];
    case 28: 
      buf_ptr[56] = tex_ptr[14];
    case 29: 
      buf_ptr[58] = tex_ptr[15];
    case 30: 
      buf_ptr[60] = tex_ptr[15];
    case 31: 
      buf_ptr[62] = tex_ptr[16];
    case 32: 
      buf_ptr[64] = tex_ptr[17];
    case 33: 
      buf_ptr[66] = tex_ptr[17];
    case 34: 
      buf_ptr[68] = tex_ptr[18];
    case 35: 
      buf_ptr[70] = tex_ptr[18];
    case 36: 
      buf_ptr[72] = tex_ptr[19];
    case 37: 
      buf_ptr[74] = tex_ptr[19];
    case 38: 
      buf_ptr[76] = tex_ptr[20];
    case 39: 
      buf_ptr[78] = tex_ptr[20];
    case 40: 
      buf_ptr[80] = tex_ptr[21];
    case 41: 
      buf_ptr[82] = tex_ptr[21];
    case 42: 
      buf_ptr[84] = tex_ptr[22];
    case 43: 
      buf_ptr[86] = tex_ptr[22];
    case 44: 
      buf_ptr[88] = tex_ptr[23];
    case 45: 
      buf_ptr[90] = tex_ptr[24];
    case 46: 
      buf_ptr[92] = tex_ptr[24];
    case 47: 
      buf_ptr[94] = tex_ptr[25];
    case 48: 
      buf_ptr[96] = tex_ptr[25];
    case 49: 
      buf_ptr[98] = tex_ptr[26];
    case 50: 
      buf_ptr[100] = tex_ptr[26];
    case 51: 
      buf_ptr[102] = tex_ptr[27];
    case 52: 
      buf_ptr[104] = tex_ptr[27];
    case 53: 
      buf_ptr[106] = tex_ptr[28];
    case 54: 
      buf_ptr[108] = tex_ptr[28];
    case 55: 
      buf_ptr[110] = tex_ptr[29];
    case 56: 
      buf_ptr[112] = tex_ptr[29];
    case 57: 
      buf_ptr[114] = tex_ptr[30];
    case 58: 
      buf_ptr[116] = tex_ptr[30];
    case 59: 
      buf_ptr[118] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_61_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*16)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[4];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[5];
    case 11: 
      buf_ptr[22] = tex_ptr[5];
    case 12: 
      buf_ptr[24] = tex_ptr[6];
    case 13: 
      buf_ptr[26] = tex_ptr[6];
    case 14: 
      buf_ptr[28] = tex_ptr[7];
    case 15: 
      buf_ptr[30] = tex_ptr[7];
    case 16: 
      buf_ptr[32] = tex_ptr[8];
    case 17: 
      buf_ptr[34] = tex_ptr[8];
    case 18: 
      buf_ptr[36] = tex_ptr[9];
    case 19: 
      buf_ptr[38] = tex_ptr[9];
    case 20: 
      buf_ptr[40] = tex_ptr[10];
    case 21: 
      buf_ptr[42] = tex_ptr[11];
    case 22: 
      buf_ptr[44] = tex_ptr[11];
    case 23: 
      buf_ptr[46] = tex_ptr[12];
    case 24: 
      buf_ptr[48] = tex_ptr[12];
    case 25: 
      buf_ptr[50] = tex_ptr[13];
    case 26: 
      buf_ptr[52] = tex_ptr[13];
    case 27: 
      buf_ptr[54] = tex_ptr[14];
    case 28: 
      buf_ptr[56] = tex_ptr[14];
    case 29: 
      buf_ptr[58] = tex_ptr[15];
    case 30: 
      buf_ptr[60] = tex_ptr[15];
    case 31: 
      buf_ptr[62] = tex_ptr[16];
    case 32: 
      buf_ptr[64] = tex_ptr[16];
    case 33: 
      buf_ptr[66] = tex_ptr[17];
    case 34: 
      buf_ptr[68] = tex_ptr[17];
    case 35: 
      buf_ptr[70] = tex_ptr[18];
    case 36: 
      buf_ptr[72] = tex_ptr[18];
    case 37: 
      buf_ptr[74] = tex_ptr[19];
    case 38: 
      buf_ptr[76] = tex_ptr[19];
    case 39: 
      buf_ptr[78] = tex_ptr[20];
    case 40: 
      buf_ptr[80] = tex_ptr[20];
    case 41: 
      buf_ptr[82] = tex_ptr[21];
    case 42: 
      buf_ptr[84] = tex_ptr[22];
    case 43: 
      buf_ptr[86] = tex_ptr[22];
    case 44: 
      buf_ptr[88] = tex_ptr[23];
    case 45: 
      buf_ptr[90] = tex_ptr[23];
    case 46: 
      buf_ptr[92] = tex_ptr[24];
    case 47: 
      buf_ptr[94] = tex_ptr[24];
    case 48: 
      buf_ptr[96] = tex_ptr[25];
    case 49: 
      buf_ptr[98] = tex_ptr[25];
    case 50: 
      buf_ptr[100] = tex_ptr[26];
    case 51: 
      buf_ptr[102] = tex_ptr[26];
    case 52: 
      buf_ptr[104] = tex_ptr[27];
    case 53: 
      buf_ptr[106] = tex_ptr[27];
    case 54: 
      buf_ptr[108] = tex_ptr[28];
    case 55: 
      buf_ptr[110] = tex_ptr[28];
    case 56: 
      buf_ptr[112] = tex_ptr[29];
    case 57: 
      buf_ptr[114] = tex_ptr[29];
    case 58: 
      buf_ptr[116] = tex_ptr[30];
    case 59: 
      buf_ptr[118] = tex_ptr[30];
    case 60: 
      buf_ptr[120] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_62_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*16)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[4];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[5];
    case 11: 
      buf_ptr[22] = tex_ptr[5];
    case 12: 
      buf_ptr[24] = tex_ptr[6];
    case 13: 
      buf_ptr[26] = tex_ptr[6];
    case 14: 
      buf_ptr[28] = tex_ptr[7];
    case 15: 
      buf_ptr[30] = tex_ptr[7];
    case 16: 
      buf_ptr[32] = tex_ptr[8];
    case 17: 
      buf_ptr[34] = tex_ptr[8];
    case 18: 
      buf_ptr[36] = tex_ptr[9];
    case 19: 
      buf_ptr[38] = tex_ptr[9];
    case 20: 
      buf_ptr[40] = tex_ptr[10];
    case 21: 
      buf_ptr[42] = tex_ptr[10];
    case 22: 
      buf_ptr[44] = tex_ptr[11];
    case 23: 
      buf_ptr[46] = tex_ptr[11];
    case 24: 
      buf_ptr[48] = tex_ptr[12];
    case 25: 
      buf_ptr[50] = tex_ptr[12];
    case 26: 
      buf_ptr[52] = tex_ptr[13];
    case 27: 
      buf_ptr[54] = tex_ptr[13];
    case 28: 
      buf_ptr[56] = tex_ptr[14];
    case 29: 
      buf_ptr[58] = tex_ptr[14];
    case 30: 
      buf_ptr[60] = tex_ptr[15];
    case 31: 
      buf_ptr[62] = tex_ptr[15];
    case 32: 
      buf_ptr[64] = tex_ptr[16];
    case 33: 
      buf_ptr[66] = tex_ptr[17];
    case 34: 
      buf_ptr[68] = tex_ptr[17];
    case 35: 
      buf_ptr[70] = tex_ptr[18];
    case 36: 
      buf_ptr[72] = tex_ptr[18];
    case 37: 
      buf_ptr[74] = tex_ptr[19];
    case 38: 
      buf_ptr[76] = tex_ptr[19];
    case 39: 
      buf_ptr[78] = tex_ptr[20];
    case 40: 
      buf_ptr[80] = tex_ptr[20];
    case 41: 
      buf_ptr[82] = tex_ptr[21];
    case 42: 
      buf_ptr[84] = tex_ptr[21];
    case 43: 
      buf_ptr[86] = tex_ptr[22];
    case 44: 
      buf_ptr[88] = tex_ptr[22];
    case 45: 
      buf_ptr[90] = tex_ptr[23];
    case 46: 
      buf_ptr[92] = tex_ptr[23];
    case 47: 
      buf_ptr[94] = tex_ptr[24];
    case 48: 
      buf_ptr[96] = tex_ptr[24];
    case 49: 
      buf_ptr[98] = tex_ptr[25];
    case 50: 
      buf_ptr[100] = tex_ptr[25];
    case 51: 
      buf_ptr[102] = tex_ptr[26];
    case 52: 
      buf_ptr[104] = tex_ptr[26];
    case 53: 
      buf_ptr[106] = tex_ptr[27];
    case 54: 
      buf_ptr[108] = tex_ptr[27];
    case 55: 
      buf_ptr[110] = tex_ptr[28];
    case 56: 
      buf_ptr[112] = tex_ptr[28];
    case 57: 
      buf_ptr[114] = tex_ptr[29];
    case 58: 
      buf_ptr[116] = tex_ptr[29];
    case 59: 
      buf_ptr[118] = tex_ptr[30];
    case 60: 
      buf_ptr[120] = tex_ptr[30];
    case 61: 
      buf_ptr[122] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_63_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*16)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[4];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[5];
    case 11: 
      buf_ptr[22] = tex_ptr[5];
    case 12: 
      buf_ptr[24] = tex_ptr[6];
    case 13: 
      buf_ptr[26] = tex_ptr[6];
    case 14: 
      buf_ptr[28] = tex_ptr[7];
    case 15: 
      buf_ptr[30] = tex_ptr[7];
    case 16: 
      buf_ptr[32] = tex_ptr[8];
    case 17: 
      buf_ptr[34] = tex_ptr[8];
    case 18: 
      buf_ptr[36] = tex_ptr[9];
    case 19: 
      buf_ptr[38] = tex_ptr[9];
    case 20: 
      buf_ptr[40] = tex_ptr[10];
    case 21: 
      buf_ptr[42] = tex_ptr[10];
    case 22: 
      buf_ptr[44] = tex_ptr[11];
    case 23: 
      buf_ptr[46] = tex_ptr[11];
    case 24: 
      buf_ptr[48] = tex_ptr[12];
    case 25: 
      buf_ptr[50] = tex_ptr[12];
    case 26: 
      buf_ptr[52] = tex_ptr[13];
    case 27: 
      buf_ptr[54] = tex_ptr[13];
    case 28: 
      buf_ptr[56] = tex_ptr[14];
    case 29: 
      buf_ptr[58] = tex_ptr[14];
    case 30: 
      buf_ptr[60] = tex_ptr[15];
    case 31: 
      buf_ptr[62] = tex_ptr[15];
    case 32: 
      buf_ptr[64] = tex_ptr[16];
    case 33: 
      buf_ptr[66] = tex_ptr[16];
    case 34: 
      buf_ptr[68] = tex_ptr[17];
    case 35: 
      buf_ptr[70] = tex_ptr[17];
    case 36: 
      buf_ptr[72] = tex_ptr[18];
    case 37: 
      buf_ptr[74] = tex_ptr[18];
    case 38: 
      buf_ptr[76] = tex_ptr[19];
    case 39: 
      buf_ptr[78] = tex_ptr[19];
    case 40: 
      buf_ptr[80] = tex_ptr[20];
    case 41: 
      buf_ptr[82] = tex_ptr[20];
    case 42: 
      buf_ptr[84] = tex_ptr[21];
    case 43: 
      buf_ptr[86] = tex_ptr[21];
    case 44: 
      buf_ptr[88] = tex_ptr[22];
    case 45: 
      buf_ptr[90] = tex_ptr[22];
    case 46: 
      buf_ptr[92] = tex_ptr[23];
    case 47: 
      buf_ptr[94] = tex_ptr[23];
    case 48: 
      buf_ptr[96] = tex_ptr[24];
    case 49: 
      buf_ptr[98] = tex_ptr[24];
    case 50: 
      buf_ptr[100] = tex_ptr[25];
    case 51: 
      buf_ptr[102] = tex_ptr[25];
    case 52: 
      buf_ptr[104] = tex_ptr[26];
    case 53: 
      buf_ptr[106] = tex_ptr[26];
    case 54: 
      buf_ptr[108] = tex_ptr[27];
    case 55: 
      buf_ptr[110] = tex_ptr[27];
    case 56: 
      buf_ptr[112] = tex_ptr[28];
    case 57: 
      buf_ptr[114] = tex_ptr[28];
    case 58: 
      buf_ptr[116] = tex_ptr[29];
    case 59: 
      buf_ptr[118] = tex_ptr[29];
    case 60: 
      buf_ptr[120] = tex_ptr[30];
    case 61: 
      buf_ptr[122] = tex_ptr[30];
    case 62: 
      buf_ptr[124] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_64_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*16)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[1];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[2];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[3];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[4];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[5];
    case 11: 
      buf_ptr[22] = tex_ptr[5];
    case 12: 
      buf_ptr[24] = tex_ptr[6];
    case 13: 
      buf_ptr[26] = tex_ptr[6];
    case 14: 
      buf_ptr[28] = tex_ptr[7];
    case 15: 
      buf_ptr[30] = tex_ptr[7];
    case 16: 
      buf_ptr[32] = tex_ptr[8];
    case 17: 
      buf_ptr[34] = tex_ptr[8];
    case 18: 
      buf_ptr[36] = tex_ptr[9];
    case 19: 
      buf_ptr[38] = tex_ptr[9];
    case 20: 
      buf_ptr[40] = tex_ptr[10];
    case 21: 
      buf_ptr[42] = tex_ptr[10];
    case 22: 
      buf_ptr[44] = tex_ptr[11];
    case 23: 
      buf_ptr[46] = tex_ptr[11];
    case 24: 
      buf_ptr[48] = tex_ptr[12];
    case 25: 
      buf_ptr[50] = tex_ptr[12];
    case 26: 
      buf_ptr[52] = tex_ptr[13];
    case 27: 
      buf_ptr[54] = tex_ptr[13];
    case 28: 
      buf_ptr[56] = tex_ptr[14];
    case 29: 
      buf_ptr[58] = tex_ptr[14];
    case 30: 
      buf_ptr[60] = tex_ptr[15];
    case 31: 
      buf_ptr[62] = tex_ptr[15];
    case 32: 
      buf_ptr[64] = tex_ptr[16];
    case 33: 
      buf_ptr[66] = tex_ptr[16];
    case 34: 
      buf_ptr[68] = tex_ptr[17];
    case 35: 
      buf_ptr[70] = tex_ptr[17];
    case 36: 
      buf_ptr[72] = tex_ptr[18];
    case 37: 
      buf_ptr[74] = tex_ptr[18];
    case 38: 
      buf_ptr[76] = tex_ptr[19];
    case 39: 
      buf_ptr[78] = tex_ptr[19];
    case 40: 
      buf_ptr[80] = tex_ptr[20];
    case 41: 
      buf_ptr[82] = tex_ptr[20];
    case 42: 
      buf_ptr[84] = tex_ptr[21];
    case 43: 
      buf_ptr[86] = tex_ptr[21];
    case 44: 
      buf_ptr[88] = tex_ptr[22];
    case 45: 
      buf_ptr[90] = tex_ptr[22];
    case 46: 
      buf_ptr[92] = tex_ptr[23];
    case 47: 
      buf_ptr[94] = tex_ptr[23];
    case 48: 
      buf_ptr[96] = tex_ptr[24];
    case 49: 
      buf_ptr[98] = tex_ptr[24];
    case 50: 
      buf_ptr[100] = tex_ptr[25];
    case 51: 
      buf_ptr[102] = tex_ptr[25];
    case 52: 
      buf_ptr[104] = tex_ptr[26];
    case 53: 
      buf_ptr[106] = tex_ptr[26];
    case 54: 
      buf_ptr[108] = tex_ptr[27];
    case 55: 
      buf_ptr[110] = tex_ptr[27];
    case 56: 
      buf_ptr[112] = tex_ptr[28];
    case 57: 
      buf_ptr[114] = tex_ptr[28];
    case 58: 
      buf_ptr[116] = tex_ptr[29];
    case 59: 
      buf_ptr[118] = tex_ptr[29];
    case 60: 
      buf_ptr[120] = tex_ptr[30];
    case 61: 
      buf_ptr[122] = tex_ptr[30];
    case 62: 
      buf_ptr[124] = tex_ptr[31];
    case 63: 
      buf_ptr[126] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_65_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*15)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[5];
    case 12: 
      buf_ptr[24] = tex_ptr[5];
    case 13: 
      buf_ptr[26] = tex_ptr[6];
    case 14: 
      buf_ptr[28] = tex_ptr[6];
    case 15: 
      buf_ptr[30] = tex_ptr[7];
    case 16: 
      buf_ptr[32] = tex_ptr[7];
    case 17: 
      buf_ptr[34] = tex_ptr[8];
    case 18: 
      buf_ptr[36] = tex_ptr[8];
    case 19: 
      buf_ptr[38] = tex_ptr[9];
    case 20: 
      buf_ptr[40] = tex_ptr[9];
    case 21: 
      buf_ptr[42] = tex_ptr[10];
    case 22: 
      buf_ptr[44] = tex_ptr[10];
    case 23: 
      buf_ptr[46] = tex_ptr[11];
    case 24: 
      buf_ptr[48] = tex_ptr[11];
    case 25: 
      buf_ptr[50] = tex_ptr[12];
    case 26: 
      buf_ptr[52] = tex_ptr[12];
    case 27: 
      buf_ptr[54] = tex_ptr[13];
    case 28: 
      buf_ptr[56] = tex_ptr[13];
    case 29: 
      buf_ptr[58] = tex_ptr[14];
    case 30: 
      buf_ptr[60] = tex_ptr[14];
    case 31: 
      buf_ptr[62] = tex_ptr[15];
    case 32: 
      buf_ptr[64] = tex_ptr[15];
    case 33: 
      buf_ptr[66] = tex_ptr[16];
    case 34: 
      buf_ptr[68] = tex_ptr[16];
    case 35: 
      buf_ptr[70] = tex_ptr[17];
    case 36: 
      buf_ptr[72] = tex_ptr[17];
    case 37: 
      buf_ptr[74] = tex_ptr[18];
    case 38: 
      buf_ptr[76] = tex_ptr[18];
    case 39: 
      buf_ptr[78] = tex_ptr[19];
    case 40: 
      buf_ptr[80] = tex_ptr[19];
    case 41: 
      buf_ptr[82] = tex_ptr[20];
    case 42: 
      buf_ptr[84] = tex_ptr[20];
    case 43: 
      buf_ptr[86] = tex_ptr[21];
    case 44: 
      buf_ptr[88] = tex_ptr[21];
    case 45: 
      buf_ptr[90] = tex_ptr[22];
    case 46: 
      buf_ptr[92] = tex_ptr[22];
    case 47: 
      buf_ptr[94] = tex_ptr[23];
    case 48: 
      buf_ptr[96] = tex_ptr[23];
    case 49: 
      buf_ptr[98] = tex_ptr[24];
    case 50: 
      buf_ptr[100] = tex_ptr[24];
    case 51: 
      buf_ptr[102] = tex_ptr[25];
    case 52: 
      buf_ptr[104] = tex_ptr[25];
    case 53: 
      buf_ptr[106] = tex_ptr[26];
    case 54: 
      buf_ptr[108] = tex_ptr[26];
    case 55: 
      buf_ptr[110] = tex_ptr[27];
    case 56: 
      buf_ptr[112] = tex_ptr[27];
    case 57: 
      buf_ptr[114] = tex_ptr[28];
    case 58: 
      buf_ptr[116] = tex_ptr[28];
    case 59: 
      buf_ptr[118] = tex_ptr[29];
    case 60: 
      buf_ptr[120] = tex_ptr[29];
    case 61: 
      buf_ptr[122] = tex_ptr[30];
    case 62: 
      buf_ptr[124] = tex_ptr[30];
    case 63: 
      buf_ptr[126] = tex_ptr[31];
    case 64: 
      buf_ptr[128] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_66_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*15)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[5];
    case 12: 
      buf_ptr[24] = tex_ptr[5];
    case 13: 
      buf_ptr[26] = tex_ptr[6];
    case 14: 
      buf_ptr[28] = tex_ptr[6];
    case 15: 
      buf_ptr[30] = tex_ptr[7];
    case 16: 
      buf_ptr[32] = tex_ptr[7];
    case 17: 
      buf_ptr[34] = tex_ptr[8];
    case 18: 
      buf_ptr[36] = tex_ptr[8];
    case 19: 
      buf_ptr[38] = tex_ptr[9];
    case 20: 
      buf_ptr[40] = tex_ptr[9];
    case 21: 
      buf_ptr[42] = tex_ptr[10];
    case 22: 
      buf_ptr[44] = tex_ptr[10];
    case 23: 
      buf_ptr[46] = tex_ptr[11];
    case 24: 
      buf_ptr[48] = tex_ptr[11];
    case 25: 
      buf_ptr[50] = tex_ptr[12];
    case 26: 
      buf_ptr[52] = tex_ptr[12];
    case 27: 
      buf_ptr[54] = tex_ptr[13];
    case 28: 
      buf_ptr[56] = tex_ptr[13];
    case 29: 
      buf_ptr[58] = tex_ptr[14];
    case 30: 
      buf_ptr[60] = tex_ptr[14];
    case 31: 
      buf_ptr[62] = tex_ptr[15];
    case 32: 
      buf_ptr[64] = tex_ptr[15];
    case 33: 
      buf_ptr[66] = tex_ptr[15];
    case 34: 
      buf_ptr[68] = tex_ptr[16];
    case 35: 
      buf_ptr[70] = tex_ptr[16];
    case 36: 
      buf_ptr[72] = tex_ptr[17];
    case 37: 
      buf_ptr[74] = tex_ptr[17];
    case 38: 
      buf_ptr[76] = tex_ptr[18];
    case 39: 
      buf_ptr[78] = tex_ptr[18];
    case 40: 
      buf_ptr[80] = tex_ptr[19];
    case 41: 
      buf_ptr[82] = tex_ptr[19];
    case 42: 
      buf_ptr[84] = tex_ptr[20];
    case 43: 
      buf_ptr[86] = tex_ptr[20];
    case 44: 
      buf_ptr[88] = tex_ptr[21];
    case 45: 
      buf_ptr[90] = tex_ptr[21];
    case 46: 
      buf_ptr[92] = tex_ptr[22];
    case 47: 
      buf_ptr[94] = tex_ptr[22];
    case 48: 
      buf_ptr[96] = tex_ptr[23];
    case 49: 
      buf_ptr[98] = tex_ptr[23];
    case 50: 
      buf_ptr[100] = tex_ptr[24];
    case 51: 
      buf_ptr[102] = tex_ptr[24];
    case 52: 
      buf_ptr[104] = tex_ptr[25];
    case 53: 
      buf_ptr[106] = tex_ptr[25];
    case 54: 
      buf_ptr[108] = tex_ptr[26];
    case 55: 
      buf_ptr[110] = tex_ptr[26];
    case 56: 
      buf_ptr[112] = tex_ptr[27];
    case 57: 
      buf_ptr[114] = tex_ptr[27];
    case 58: 
      buf_ptr[116] = tex_ptr[28];
    case 59: 
      buf_ptr[118] = tex_ptr[28];
    case 60: 
      buf_ptr[120] = tex_ptr[29];
    case 61: 
      buf_ptr[122] = tex_ptr[29];
    case 62: 
      buf_ptr[124] = tex_ptr[30];
    case 63: 
      buf_ptr[126] = tex_ptr[30];
    case 64: 
      buf_ptr[128] = tex_ptr[31];
    case 65: 
      buf_ptr[130] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_67_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*15)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[5];
    case 12: 
      buf_ptr[24] = tex_ptr[5];
    case 13: 
      buf_ptr[26] = tex_ptr[6];
    case 14: 
      buf_ptr[28] = tex_ptr[6];
    case 15: 
      buf_ptr[30] = tex_ptr[7];
    case 16: 
      buf_ptr[32] = tex_ptr[7];
    case 17: 
      buf_ptr[34] = tex_ptr[8];
    case 18: 
      buf_ptr[36] = tex_ptr[8];
    case 19: 
      buf_ptr[38] = tex_ptr[9];
    case 20: 
      buf_ptr[40] = tex_ptr[9];
    case 21: 
      buf_ptr[42] = tex_ptr[10];
    case 22: 
      buf_ptr[44] = tex_ptr[10];
    case 23: 
      buf_ptr[46] = tex_ptr[10];
    case 24: 
      buf_ptr[48] = tex_ptr[11];
    case 25: 
      buf_ptr[50] = tex_ptr[11];
    case 26: 
      buf_ptr[52] = tex_ptr[12];
    case 27: 
      buf_ptr[54] = tex_ptr[12];
    case 28: 
      buf_ptr[56] = tex_ptr[13];
    case 29: 
      buf_ptr[58] = tex_ptr[13];
    case 30: 
      buf_ptr[60] = tex_ptr[14];
    case 31: 
      buf_ptr[62] = tex_ptr[14];
    case 32: 
      buf_ptr[64] = tex_ptr[15];
    case 33: 
      buf_ptr[66] = tex_ptr[15];
    case 34: 
      buf_ptr[68] = tex_ptr[16];
    case 35: 
      buf_ptr[70] = tex_ptr[16];
    case 36: 
      buf_ptr[72] = tex_ptr[17];
    case 37: 
      buf_ptr[74] = tex_ptr[17];
    case 38: 
      buf_ptr[76] = tex_ptr[18];
    case 39: 
      buf_ptr[78] = tex_ptr[18];
    case 40: 
      buf_ptr[80] = tex_ptr[19];
    case 41: 
      buf_ptr[82] = tex_ptr[19];
    case 42: 
      buf_ptr[84] = tex_ptr[20];
    case 43: 
      buf_ptr[86] = tex_ptr[20];
    case 44: 
      buf_ptr[88] = tex_ptr[21];
    case 45: 
      buf_ptr[90] = tex_ptr[21];
    case 46: 
      buf_ptr[92] = tex_ptr[21];
    case 47: 
      buf_ptr[94] = tex_ptr[22];
    case 48: 
      buf_ptr[96] = tex_ptr[22];
    case 49: 
      buf_ptr[98] = tex_ptr[23];
    case 50: 
      buf_ptr[100] = tex_ptr[23];
    case 51: 
      buf_ptr[102] = tex_ptr[24];
    case 52: 
      buf_ptr[104] = tex_ptr[24];
    case 53: 
      buf_ptr[106] = tex_ptr[25];
    case 54: 
      buf_ptr[108] = tex_ptr[25];
    case 55: 
      buf_ptr[110] = tex_ptr[26];
    case 56: 
      buf_ptr[112] = tex_ptr[26];
    case 57: 
      buf_ptr[114] = tex_ptr[27];
    case 58: 
      buf_ptr[116] = tex_ptr[27];
    case 59: 
      buf_ptr[118] = tex_ptr[28];
    case 60: 
      buf_ptr[120] = tex_ptr[28];
    case 61: 
      buf_ptr[122] = tex_ptr[29];
    case 62: 
      buf_ptr[124] = tex_ptr[29];
    case 63: 
      buf_ptr[126] = tex_ptr[30];
    case 64: 
      buf_ptr[128] = tex_ptr[30];
    case 65: 
      buf_ptr[130] = tex_ptr[31];
    case 66: 
      buf_ptr[132] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_68_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*15)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[5];
    case 12: 
      buf_ptr[24] = tex_ptr[5];
    case 13: 
      buf_ptr[26] = tex_ptr[6];
    case 14: 
      buf_ptr[28] = tex_ptr[6];
    case 15: 
      buf_ptr[30] = tex_ptr[7];
    case 16: 
      buf_ptr[32] = tex_ptr[7];
    case 17: 
      buf_ptr[34] = tex_ptr[8];
    case 18: 
      buf_ptr[36] = tex_ptr[8];
    case 19: 
      buf_ptr[38] = tex_ptr[8];
    case 20: 
      buf_ptr[40] = tex_ptr[9];
    case 21: 
      buf_ptr[42] = tex_ptr[9];
    case 22: 
      buf_ptr[44] = tex_ptr[10];
    case 23: 
      buf_ptr[46] = tex_ptr[10];
    case 24: 
      buf_ptr[48] = tex_ptr[11];
    case 25: 
      buf_ptr[50] = tex_ptr[11];
    case 26: 
      buf_ptr[52] = tex_ptr[12];
    case 27: 
      buf_ptr[54] = tex_ptr[12];
    case 28: 
      buf_ptr[56] = tex_ptr[13];
    case 29: 
      buf_ptr[58] = tex_ptr[13];
    case 30: 
      buf_ptr[60] = tex_ptr[14];
    case 31: 
      buf_ptr[62] = tex_ptr[14];
    case 32: 
      buf_ptr[64] = tex_ptr[15];
    case 33: 
      buf_ptr[66] = tex_ptr[15];
    case 34: 
      buf_ptr[68] = tex_ptr[16];
    case 35: 
      buf_ptr[70] = tex_ptr[16];
    case 36: 
      buf_ptr[72] = tex_ptr[16];
    case 37: 
      buf_ptr[74] = tex_ptr[17];
    case 38: 
      buf_ptr[76] = tex_ptr[17];
    case 39: 
      buf_ptr[78] = tex_ptr[18];
    case 40: 
      buf_ptr[80] = tex_ptr[18];
    case 41: 
      buf_ptr[82] = tex_ptr[19];
    case 42: 
      buf_ptr[84] = tex_ptr[19];
    case 43: 
      buf_ptr[86] = tex_ptr[20];
    case 44: 
      buf_ptr[88] = tex_ptr[20];
    case 45: 
      buf_ptr[90] = tex_ptr[21];
    case 46: 
      buf_ptr[92] = tex_ptr[21];
    case 47: 
      buf_ptr[94] = tex_ptr[22];
    case 48: 
      buf_ptr[96] = tex_ptr[22];
    case 49: 
      buf_ptr[98] = tex_ptr[23];
    case 50: 
      buf_ptr[100] = tex_ptr[23];
    case 51: 
      buf_ptr[102] = tex_ptr[23];
    case 52: 
      buf_ptr[104] = tex_ptr[24];
    case 53: 
      buf_ptr[106] = tex_ptr[24];
    case 54: 
      buf_ptr[108] = tex_ptr[25];
    case 55: 
      buf_ptr[110] = tex_ptr[25];
    case 56: 
      buf_ptr[112] = tex_ptr[26];
    case 57: 
      buf_ptr[114] = tex_ptr[26];
    case 58: 
      buf_ptr[116] = tex_ptr[27];
    case 59: 
      buf_ptr[118] = tex_ptr[27];
    case 60: 
      buf_ptr[120] = tex_ptr[28];
    case 61: 
      buf_ptr[122] = tex_ptr[28];
    case 62: 
      buf_ptr[124] = tex_ptr[29];
    case 63: 
      buf_ptr[126] = tex_ptr[29];
    case 64: 
      buf_ptr[128] = tex_ptr[30];
    case 65: 
      buf_ptr[130] = tex_ptr[30];
    case 66: 
      buf_ptr[132] = tex_ptr[31];
    case 67: 
      buf_ptr[134] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_69_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*14)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[5];
    case 12: 
      buf_ptr[24] = tex_ptr[5];
    case 13: 
      buf_ptr[26] = tex_ptr[6];
    case 14: 
      buf_ptr[28] = tex_ptr[6];
    case 15: 
      buf_ptr[30] = tex_ptr[6];
    case 16: 
      buf_ptr[32] = tex_ptr[7];
    case 17: 
      buf_ptr[34] = tex_ptr[7];
    case 18: 
      buf_ptr[36] = tex_ptr[8];
    case 19: 
      buf_ptr[38] = tex_ptr[8];
    case 20: 
      buf_ptr[40] = tex_ptr[9];
    case 21: 
      buf_ptr[42] = tex_ptr[9];
    case 22: 
      buf_ptr[44] = tex_ptr[10];
    case 23: 
      buf_ptr[46] = tex_ptr[10];
    case 24: 
      buf_ptr[48] = tex_ptr[11];
    case 25: 
      buf_ptr[50] = tex_ptr[11];
    case 26: 
      buf_ptr[52] = tex_ptr[12];
    case 27: 
      buf_ptr[54] = tex_ptr[12];
    case 28: 
      buf_ptr[56] = tex_ptr[12];
    case 29: 
      buf_ptr[58] = tex_ptr[13];
    case 30: 
      buf_ptr[60] = tex_ptr[13];
    case 31: 
      buf_ptr[62] = tex_ptr[14];
    case 32: 
      buf_ptr[64] = tex_ptr[14];
    case 33: 
      buf_ptr[66] = tex_ptr[15];
    case 34: 
      buf_ptr[68] = tex_ptr[15];
    case 35: 
      buf_ptr[70] = tex_ptr[16];
    case 36: 
      buf_ptr[72] = tex_ptr[16];
    case 37: 
      buf_ptr[74] = tex_ptr[17];
    case 38: 
      buf_ptr[76] = tex_ptr[17];
    case 39: 
      buf_ptr[78] = tex_ptr[18];
    case 40: 
      buf_ptr[80] = tex_ptr[18];
    case 41: 
      buf_ptr[82] = tex_ptr[19];
    case 42: 
      buf_ptr[84] = tex_ptr[19];
    case 43: 
      buf_ptr[86] = tex_ptr[19];
    case 44: 
      buf_ptr[88] = tex_ptr[20];
    case 45: 
      buf_ptr[90] = tex_ptr[20];
    case 46: 
      buf_ptr[92] = tex_ptr[21];
    case 47: 
      buf_ptr[94] = tex_ptr[21];
    case 48: 
      buf_ptr[96] = tex_ptr[22];
    case 49: 
      buf_ptr[98] = tex_ptr[22];
    case 50: 
      buf_ptr[100] = tex_ptr[23];
    case 51: 
      buf_ptr[102] = tex_ptr[23];
    case 52: 
      buf_ptr[104] = tex_ptr[24];
    case 53: 
      buf_ptr[106] = tex_ptr[24];
    case 54: 
      buf_ptr[108] = tex_ptr[25];
    case 55: 
      buf_ptr[110] = tex_ptr[25];
    case 56: 
      buf_ptr[112] = tex_ptr[25];
    case 57: 
      buf_ptr[114] = tex_ptr[26];
    case 58: 
      buf_ptr[116] = tex_ptr[26];
    case 59: 
      buf_ptr[118] = tex_ptr[27];
    case 60: 
      buf_ptr[120] = tex_ptr[27];
    case 61: 
      buf_ptr[122] = tex_ptr[28];
    case 62: 
      buf_ptr[124] = tex_ptr[28];
    case 63: 
      buf_ptr[126] = tex_ptr[29];
    case 64: 
      buf_ptr[128] = tex_ptr[29];
    case 65: 
      buf_ptr[130] = tex_ptr[30];
    case 66: 
      buf_ptr[132] = tex_ptr[30];
    case 67: 
      buf_ptr[134] = tex_ptr[31];
    case 68: 
      buf_ptr[136] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_70_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*14)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[5];
    case 12: 
      buf_ptr[24] = tex_ptr[5];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[6];
    case 15: 
      buf_ptr[30] = tex_ptr[6];
    case 16: 
      buf_ptr[32] = tex_ptr[7];
    case 17: 
      buf_ptr[34] = tex_ptr[7];
    case 18: 
      buf_ptr[36] = tex_ptr[8];
    case 19: 
      buf_ptr[38] = tex_ptr[8];
    case 20: 
      buf_ptr[40] = tex_ptr[9];
    case 21: 
      buf_ptr[42] = tex_ptr[9];
    case 22: 
      buf_ptr[44] = tex_ptr[10];
    case 23: 
      buf_ptr[46] = tex_ptr[10];
    case 24: 
      buf_ptr[48] = tex_ptr[10];
    case 25: 
      buf_ptr[50] = tex_ptr[11];
    case 26: 
      buf_ptr[52] = tex_ptr[11];
    case 27: 
      buf_ptr[54] = tex_ptr[12];
    case 28: 
      buf_ptr[56] = tex_ptr[12];
    case 29: 
      buf_ptr[58] = tex_ptr[13];
    case 30: 
      buf_ptr[60] = tex_ptr[13];
    case 31: 
      buf_ptr[62] = tex_ptr[14];
    case 32: 
      buf_ptr[64] = tex_ptr[14];
    case 33: 
      buf_ptr[66] = tex_ptr[15];
    case 34: 
      buf_ptr[68] = tex_ptr[15];
    case 35: 
      buf_ptr[70] = tex_ptr[16];
    case 36: 
      buf_ptr[72] = tex_ptr[16];
    case 37: 
      buf_ptr[74] = tex_ptr[16];
    case 38: 
      buf_ptr[76] = tex_ptr[17];
    case 39: 
      buf_ptr[78] = tex_ptr[17];
    case 40: 
      buf_ptr[80] = tex_ptr[18];
    case 41: 
      buf_ptr[82] = tex_ptr[18];
    case 42: 
      buf_ptr[84] = tex_ptr[19];
    case 43: 
      buf_ptr[86] = tex_ptr[19];
    case 44: 
      buf_ptr[88] = tex_ptr[20];
    case 45: 
      buf_ptr[90] = tex_ptr[20];
    case 46: 
      buf_ptr[92] = tex_ptr[21];
    case 47: 
      buf_ptr[94] = tex_ptr[21];
    case 48: 
      buf_ptr[96] = tex_ptr[21];
    case 49: 
      buf_ptr[98] = tex_ptr[22];
    case 50: 
      buf_ptr[100] = tex_ptr[22];
    case 51: 
      buf_ptr[102] = tex_ptr[23];
    case 52: 
      buf_ptr[104] = tex_ptr[23];
    case 53: 
      buf_ptr[106] = tex_ptr[24];
    case 54: 
      buf_ptr[108] = tex_ptr[24];
    case 55: 
      buf_ptr[110] = tex_ptr[25];
    case 56: 
      buf_ptr[112] = tex_ptr[25];
    case 57: 
      buf_ptr[114] = tex_ptr[26];
    case 58: 
      buf_ptr[116] = tex_ptr[26];
    case 59: 
      buf_ptr[118] = tex_ptr[26];
    case 60: 
      buf_ptr[120] = tex_ptr[27];
    case 61: 
      buf_ptr[122] = tex_ptr[27];
    case 62: 
      buf_ptr[124] = tex_ptr[28];
    case 63: 
      buf_ptr[126] = tex_ptr[28];
    case 64: 
      buf_ptr[128] = tex_ptr[29];
    case 65: 
      buf_ptr[130] = tex_ptr[29];
    case 66: 
      buf_ptr[132] = tex_ptr[30];
    case 67: 
      buf_ptr[134] = tex_ptr[30];
    case 68: 
      buf_ptr[136] = tex_ptr[31];
    case 69: 
      buf_ptr[138] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_71_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*14)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[5];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[6];
    case 15: 
      buf_ptr[30] = tex_ptr[6];
    case 16: 
      buf_ptr[32] = tex_ptr[7];
    case 17: 
      buf_ptr[34] = tex_ptr[7];
    case 18: 
      buf_ptr[36] = tex_ptr[8];
    case 19: 
      buf_ptr[38] = tex_ptr[8];
    case 20: 
      buf_ptr[40] = tex_ptr[9];
    case 21: 
      buf_ptr[42] = tex_ptr[9];
    case 22: 
      buf_ptr[44] = tex_ptr[9];
    case 23: 
      buf_ptr[46] = tex_ptr[10];
    case 24: 
      buf_ptr[48] = tex_ptr[10];
    case 25: 
      buf_ptr[50] = tex_ptr[11];
    case 26: 
      buf_ptr[52] = tex_ptr[11];
    case 27: 
      buf_ptr[54] = tex_ptr[12];
    case 28: 
      buf_ptr[56] = tex_ptr[12];
    case 29: 
      buf_ptr[58] = tex_ptr[13];
    case 30: 
      buf_ptr[60] = tex_ptr[13];
    case 31: 
      buf_ptr[62] = tex_ptr[13];
    case 32: 
      buf_ptr[64] = tex_ptr[14];
    case 33: 
      buf_ptr[66] = tex_ptr[14];
    case 34: 
      buf_ptr[68] = tex_ptr[15];
    case 35: 
      buf_ptr[70] = tex_ptr[15];
    case 36: 
      buf_ptr[72] = tex_ptr[16];
    case 37: 
      buf_ptr[74] = tex_ptr[16];
    case 38: 
      buf_ptr[76] = tex_ptr[17];
    case 39: 
      buf_ptr[78] = tex_ptr[17];
    case 40: 
      buf_ptr[80] = tex_ptr[18];
    case 41: 
      buf_ptr[82] = tex_ptr[18];
    case 42: 
      buf_ptr[84] = tex_ptr[18];
    case 43: 
      buf_ptr[86] = tex_ptr[19];
    case 44: 
      buf_ptr[88] = tex_ptr[19];
    case 45: 
      buf_ptr[90] = tex_ptr[20];
    case 46: 
      buf_ptr[92] = tex_ptr[20];
    case 47: 
      buf_ptr[94] = tex_ptr[21];
    case 48: 
      buf_ptr[96] = tex_ptr[21];
    case 49: 
      buf_ptr[98] = tex_ptr[22];
    case 50: 
      buf_ptr[100] = tex_ptr[22];
    case 51: 
      buf_ptr[102] = tex_ptr[22];
    case 52: 
      buf_ptr[104] = tex_ptr[23];
    case 53: 
      buf_ptr[106] = tex_ptr[23];
    case 54: 
      buf_ptr[108] = tex_ptr[24];
    case 55: 
      buf_ptr[110] = tex_ptr[24];
    case 56: 
      buf_ptr[112] = tex_ptr[25];
    case 57: 
      buf_ptr[114] = tex_ptr[25];
    case 58: 
      buf_ptr[116] = tex_ptr[26];
    case 59: 
      buf_ptr[118] = tex_ptr[26];
    case 60: 
      buf_ptr[120] = tex_ptr[27];
    case 61: 
      buf_ptr[122] = tex_ptr[27];
    case 62: 
      buf_ptr[124] = tex_ptr[27];
    case 63: 
      buf_ptr[126] = tex_ptr[28];
    case 64: 
      buf_ptr[128] = tex_ptr[28];
    case 65: 
      buf_ptr[130] = tex_ptr[29];
    case 66: 
      buf_ptr[132] = tex_ptr[29];
    case 67: 
      buf_ptr[134] = tex_ptr[30];
    case 68: 
      buf_ptr[136] = tex_ptr[30];
    case 69: 
      buf_ptr[138] = tex_ptr[31];
    case 70: 
      buf_ptr[140] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_72_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*14)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[4];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[5];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[6];
    case 15: 
      buf_ptr[30] = tex_ptr[6];
    case 16: 
      buf_ptr[32] = tex_ptr[7];
    case 17: 
      buf_ptr[34] = tex_ptr[7];
    case 18: 
      buf_ptr[36] = tex_ptr[8];
    case 19: 
      buf_ptr[38] = tex_ptr[8];
    case 20: 
      buf_ptr[40] = tex_ptr[8];
    case 21: 
      buf_ptr[42] = tex_ptr[9];
    case 22: 
      buf_ptr[44] = tex_ptr[9];
    case 23: 
      buf_ptr[46] = tex_ptr[10];
    case 24: 
      buf_ptr[48] = tex_ptr[10];
    case 25: 
      buf_ptr[50] = tex_ptr[11];
    case 26: 
      buf_ptr[52] = tex_ptr[11];
    case 27: 
      buf_ptr[54] = tex_ptr[12];
    case 28: 
      buf_ptr[56] = tex_ptr[12];
    case 29: 
      buf_ptr[58] = tex_ptr[12];
    case 30: 
      buf_ptr[60] = tex_ptr[13];
    case 31: 
      buf_ptr[62] = tex_ptr[13];
    case 32: 
      buf_ptr[64] = tex_ptr[14];
    case 33: 
      buf_ptr[66] = tex_ptr[14];
    case 34: 
      buf_ptr[68] = tex_ptr[15];
    case 35: 
      buf_ptr[70] = tex_ptr[15];
    case 36: 
      buf_ptr[72] = tex_ptr[16];
    case 37: 
      buf_ptr[74] = tex_ptr[16];
    case 38: 
      buf_ptr[76] = tex_ptr[16];
    case 39: 
      buf_ptr[78] = tex_ptr[17];
    case 40: 
      buf_ptr[80] = tex_ptr[17];
    case 41: 
      buf_ptr[82] = tex_ptr[18];
    case 42: 
      buf_ptr[84] = tex_ptr[18];
    case 43: 
      buf_ptr[86] = tex_ptr[19];
    case 44: 
      buf_ptr[88] = tex_ptr[19];
    case 45: 
      buf_ptr[90] = tex_ptr[19];
    case 46: 
      buf_ptr[92] = tex_ptr[20];
    case 47: 
      buf_ptr[94] = tex_ptr[20];
    case 48: 
      buf_ptr[96] = tex_ptr[21];
    case 49: 
      buf_ptr[98] = tex_ptr[21];
    case 50: 
      buf_ptr[100] = tex_ptr[22];
    case 51: 
      buf_ptr[102] = tex_ptr[22];
    case 52: 
      buf_ptr[104] = tex_ptr[23];
    case 53: 
      buf_ptr[106] = tex_ptr[23];
    case 54: 
      buf_ptr[108] = tex_ptr[23];
    case 55: 
      buf_ptr[110] = tex_ptr[24];
    case 56: 
      buf_ptr[112] = tex_ptr[24];
    case 57: 
      buf_ptr[114] = tex_ptr[25];
    case 58: 
      buf_ptr[116] = tex_ptr[25];
    case 59: 
      buf_ptr[118] = tex_ptr[26];
    case 60: 
      buf_ptr[120] = tex_ptr[26];
    case 61: 
      buf_ptr[122] = tex_ptr[27];
    case 62: 
      buf_ptr[124] = tex_ptr[27];
    case 63: 
      buf_ptr[126] = tex_ptr[27];
    case 64: 
      buf_ptr[128] = tex_ptr[28];
    case 65: 
      buf_ptr[130] = tex_ptr[28];
    case 66: 
      buf_ptr[132] = tex_ptr[29];
    case 67: 
      buf_ptr[134] = tex_ptr[29];
    case 68: 
      buf_ptr[136] = tex_ptr[30];
    case 69: 
      buf_ptr[138] = tex_ptr[30];
    case 70: 
      buf_ptr[140] = tex_ptr[31];
    case 71: 
      buf_ptr[142] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_73_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*14)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[5];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[6];
    case 15: 
      buf_ptr[30] = tex_ptr[6];
    case 16: 
      buf_ptr[32] = tex_ptr[7];
    case 17: 
      buf_ptr[34] = tex_ptr[7];
    case 18: 
      buf_ptr[36] = tex_ptr[7];
    case 19: 
      buf_ptr[38] = tex_ptr[8];
    case 20: 
      buf_ptr[40] = tex_ptr[8];
    case 21: 
      buf_ptr[42] = tex_ptr[9];
    case 22: 
      buf_ptr[44] = tex_ptr[9];
    case 23: 
      buf_ptr[46] = tex_ptr[10];
    case 24: 
      buf_ptr[48] = tex_ptr[10];
    case 25: 
      buf_ptr[50] = tex_ptr[10];
    case 26: 
      buf_ptr[52] = tex_ptr[11];
    case 27: 
      buf_ptr[54] = tex_ptr[11];
    case 28: 
      buf_ptr[56] = tex_ptr[12];
    case 29: 
      buf_ptr[58] = tex_ptr[12];
    case 30: 
      buf_ptr[60] = tex_ptr[13];
    case 31: 
      buf_ptr[62] = tex_ptr[13];
    case 32: 
      buf_ptr[64] = tex_ptr[14];
    case 33: 
      buf_ptr[66] = tex_ptr[14];
    case 34: 
      buf_ptr[68] = tex_ptr[14];
    case 35: 
      buf_ptr[70] = tex_ptr[15];
    case 36: 
      buf_ptr[72] = tex_ptr[15];
    case 37: 
      buf_ptr[74] = tex_ptr[16];
    case 38: 
      buf_ptr[76] = tex_ptr[16];
    case 39: 
      buf_ptr[78] = tex_ptr[17];
    case 40: 
      buf_ptr[80] = tex_ptr[17];
    case 41: 
      buf_ptr[82] = tex_ptr[17];
    case 42: 
      buf_ptr[84] = tex_ptr[18];
    case 43: 
      buf_ptr[86] = tex_ptr[18];
    case 44: 
      buf_ptr[88] = tex_ptr[19];
    case 45: 
      buf_ptr[90] = tex_ptr[19];
    case 46: 
      buf_ptr[92] = tex_ptr[20];
    case 47: 
      buf_ptr[94] = tex_ptr[20];
    case 48: 
      buf_ptr[96] = tex_ptr[21];
    case 49: 
      buf_ptr[98] = tex_ptr[21];
    case 50: 
      buf_ptr[100] = tex_ptr[21];
    case 51: 
      buf_ptr[102] = tex_ptr[22];
    case 52: 
      buf_ptr[104] = tex_ptr[22];
    case 53: 
      buf_ptr[106] = tex_ptr[23];
    case 54: 
      buf_ptr[108] = tex_ptr[23];
    case 55: 
      buf_ptr[110] = tex_ptr[24];
    case 56: 
      buf_ptr[112] = tex_ptr[24];
    case 57: 
      buf_ptr[114] = tex_ptr[24];
    case 58: 
      buf_ptr[116] = tex_ptr[25];
    case 59: 
      buf_ptr[118] = tex_ptr[25];
    case 60: 
      buf_ptr[120] = tex_ptr[26];
    case 61: 
      buf_ptr[122] = tex_ptr[26];
    case 62: 
      buf_ptr[124] = tex_ptr[27];
    case 63: 
      buf_ptr[126] = tex_ptr[27];
    case 64: 
      buf_ptr[128] = tex_ptr[28];
    case 65: 
      buf_ptr[130] = tex_ptr[28];
    case 66: 
      buf_ptr[132] = tex_ptr[28];
    case 67: 
      buf_ptr[134] = tex_ptr[29];
    case 68: 
      buf_ptr[136] = tex_ptr[29];
    case 69: 
      buf_ptr[138] = tex_ptr[30];
    case 70: 
      buf_ptr[140] = tex_ptr[30];
    case 71: 
      buf_ptr[142] = tex_ptr[31];
    case 72: 
      buf_ptr[144] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_74_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*13)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[3];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[5];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[6];
    case 15: 
      buf_ptr[30] = tex_ptr[6];
    case 16: 
      buf_ptr[32] = tex_ptr[6];
    case 17: 
      buf_ptr[34] = tex_ptr[7];
    case 18: 
      buf_ptr[36] = tex_ptr[7];
    case 19: 
      buf_ptr[38] = tex_ptr[8];
    case 20: 
      buf_ptr[40] = tex_ptr[8];
    case 21: 
      buf_ptr[42] = tex_ptr[9];
    case 22: 
      buf_ptr[44] = tex_ptr[9];
    case 23: 
      buf_ptr[46] = tex_ptr[9];
    case 24: 
      buf_ptr[48] = tex_ptr[10];
    case 25: 
      buf_ptr[50] = tex_ptr[10];
    case 26: 
      buf_ptr[52] = tex_ptr[11];
    case 27: 
      buf_ptr[54] = tex_ptr[11];
    case 28: 
      buf_ptr[56] = tex_ptr[12];
    case 29: 
      buf_ptr[58] = tex_ptr[12];
    case 30: 
      buf_ptr[60] = tex_ptr[12];
    case 31: 
      buf_ptr[62] = tex_ptr[13];
    case 32: 
      buf_ptr[64] = tex_ptr[13];
    case 33: 
      buf_ptr[66] = tex_ptr[14];
    case 34: 
      buf_ptr[68] = tex_ptr[14];
    case 35: 
      buf_ptr[70] = tex_ptr[15];
    case 36: 
      buf_ptr[72] = tex_ptr[15];
    case 37: 
      buf_ptr[74] = tex_ptr[15];
    case 38: 
      buf_ptr[76] = tex_ptr[16];
    case 39: 
      buf_ptr[78] = tex_ptr[16];
    case 40: 
      buf_ptr[80] = tex_ptr[17];
    case 41: 
      buf_ptr[82] = tex_ptr[17];
    case 42: 
      buf_ptr[84] = tex_ptr[18];
    case 43: 
      buf_ptr[86] = tex_ptr[18];
    case 44: 
      buf_ptr[88] = tex_ptr[19];
    case 45: 
      buf_ptr[90] = tex_ptr[19];
    case 46: 
      buf_ptr[92] = tex_ptr[19];
    case 47: 
      buf_ptr[94] = tex_ptr[20];
    case 48: 
      buf_ptr[96] = tex_ptr[20];
    case 49: 
      buf_ptr[98] = tex_ptr[21];
    case 50: 
      buf_ptr[100] = tex_ptr[21];
    case 51: 
      buf_ptr[102] = tex_ptr[22];
    case 52: 
      buf_ptr[104] = tex_ptr[22];
    case 53: 
      buf_ptr[106] = tex_ptr[22];
    case 54: 
      buf_ptr[108] = tex_ptr[23];
    case 55: 
      buf_ptr[110] = tex_ptr[23];
    case 56: 
      buf_ptr[112] = tex_ptr[24];
    case 57: 
      buf_ptr[114] = tex_ptr[24];
    case 58: 
      buf_ptr[116] = tex_ptr[25];
    case 59: 
      buf_ptr[118] = tex_ptr[25];
    case 60: 
      buf_ptr[120] = tex_ptr[25];
    case 61: 
      buf_ptr[122] = tex_ptr[26];
    case 62: 
      buf_ptr[124] = tex_ptr[26];
    case 63: 
      buf_ptr[126] = tex_ptr[27];
    case 64: 
      buf_ptr[128] = tex_ptr[27];
    case 65: 
      buf_ptr[130] = tex_ptr[28];
    case 66: 
      buf_ptr[132] = tex_ptr[28];
    case 67: 
      buf_ptr[134] = tex_ptr[28];
    case 68: 
      buf_ptr[136] = tex_ptr[29];
    case 69: 
      buf_ptr[138] = tex_ptr[29];
    case 70: 
      buf_ptr[140] = tex_ptr[30];
    case 71: 
      buf_ptr[142] = tex_ptr[30];
    case 72: 
      buf_ptr[144] = tex_ptr[31];
    case 73: 
      buf_ptr[146] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_75_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*13)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[5];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[6];
    case 16: 
      buf_ptr[32] = tex_ptr[6];
    case 17: 
      buf_ptr[34] = tex_ptr[7];
    case 18: 
      buf_ptr[36] = tex_ptr[7];
    case 19: 
      buf_ptr[38] = tex_ptr[8];
    case 20: 
      buf_ptr[40] = tex_ptr[8];
    case 21: 
      buf_ptr[42] = tex_ptr[8];
    case 22: 
      buf_ptr[44] = tex_ptr[9];
    case 23: 
      buf_ptr[46] = tex_ptr[9];
    case 24: 
      buf_ptr[48] = tex_ptr[10];
    case 25: 
      buf_ptr[50] = tex_ptr[10];
    case 26: 
      buf_ptr[52] = tex_ptr[11];
    case 27: 
      buf_ptr[54] = tex_ptr[11];
    case 28: 
      buf_ptr[56] = tex_ptr[11];
    case 29: 
      buf_ptr[58] = tex_ptr[12];
    case 30: 
      buf_ptr[60] = tex_ptr[12];
    case 31: 
      buf_ptr[62] = tex_ptr[13];
    case 32: 
      buf_ptr[64] = tex_ptr[13];
    case 33: 
      buf_ptr[66] = tex_ptr[14];
    case 34: 
      buf_ptr[68] = tex_ptr[14];
    case 35: 
      buf_ptr[70] = tex_ptr[14];
    case 36: 
      buf_ptr[72] = tex_ptr[15];
    case 37: 
      buf_ptr[74] = tex_ptr[15];
    case 38: 
      buf_ptr[76] = tex_ptr[16];
    case 39: 
      buf_ptr[78] = tex_ptr[16];
    case 40: 
      buf_ptr[80] = tex_ptr[17];
    case 41: 
      buf_ptr[82] = tex_ptr[17];
    case 42: 
      buf_ptr[84] = tex_ptr[17];
    case 43: 
      buf_ptr[86] = tex_ptr[18];
    case 44: 
      buf_ptr[88] = tex_ptr[18];
    case 45: 
      buf_ptr[90] = tex_ptr[19];
    case 46: 
      buf_ptr[92] = tex_ptr[19];
    case 47: 
      buf_ptr[94] = tex_ptr[20];
    case 48: 
      buf_ptr[96] = tex_ptr[20];
    case 49: 
      buf_ptr[98] = tex_ptr[20];
    case 50: 
      buf_ptr[100] = tex_ptr[21];
    case 51: 
      buf_ptr[102] = tex_ptr[21];
    case 52: 
      buf_ptr[104] = tex_ptr[22];
    case 53: 
      buf_ptr[106] = tex_ptr[22];
    case 54: 
      buf_ptr[108] = tex_ptr[23];
    case 55: 
      buf_ptr[110] = tex_ptr[23];
    case 56: 
      buf_ptr[112] = tex_ptr[23];
    case 57: 
      buf_ptr[114] = tex_ptr[24];
    case 58: 
      buf_ptr[116] = tex_ptr[24];
    case 59: 
      buf_ptr[118] = tex_ptr[25];
    case 60: 
      buf_ptr[120] = tex_ptr[25];
    case 61: 
      buf_ptr[122] = tex_ptr[26];
    case 62: 
      buf_ptr[124] = tex_ptr[26];
    case 63: 
      buf_ptr[126] = tex_ptr[26];
    case 64: 
      buf_ptr[128] = tex_ptr[27];
    case 65: 
      buf_ptr[130] = tex_ptr[27];
    case 66: 
      buf_ptr[132] = tex_ptr[28];
    case 67: 
      buf_ptr[134] = tex_ptr[28];
    case 68: 
      buf_ptr[136] = tex_ptr[29];
    case 69: 
      buf_ptr[138] = tex_ptr[29];
    case 70: 
      buf_ptr[140] = tex_ptr[29];
    case 71: 
      buf_ptr[142] = tex_ptr[30];
    case 72: 
      buf_ptr[144] = tex_ptr[30];
    case 73: 
      buf_ptr[146] = tex_ptr[31];
    case 74: 
      buf_ptr[148] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_76_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*13)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[5];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[6];
    case 16: 
      buf_ptr[32] = tex_ptr[6];
    case 17: 
      buf_ptr[34] = tex_ptr[7];
    case 18: 
      buf_ptr[36] = tex_ptr[7];
    case 19: 
      buf_ptr[38] = tex_ptr[7];
    case 20: 
      buf_ptr[40] = tex_ptr[8];
    case 21: 
      buf_ptr[42] = tex_ptr[8];
    case 22: 
      buf_ptr[44] = tex_ptr[9];
    case 23: 
      buf_ptr[46] = tex_ptr[9];
    case 24: 
      buf_ptr[48] = tex_ptr[10];
    case 25: 
      buf_ptr[50] = tex_ptr[10];
    case 26: 
      buf_ptr[52] = tex_ptr[10];
    case 27: 
      buf_ptr[54] = tex_ptr[11];
    case 28: 
      buf_ptr[56] = tex_ptr[11];
    case 29: 
      buf_ptr[58] = tex_ptr[12];
    case 30: 
      buf_ptr[60] = tex_ptr[12];
    case 31: 
      buf_ptr[62] = tex_ptr[13];
    case 32: 
      buf_ptr[64] = tex_ptr[13];
    case 33: 
      buf_ptr[66] = tex_ptr[13];
    case 34: 
      buf_ptr[68] = tex_ptr[14];
    case 35: 
      buf_ptr[70] = tex_ptr[14];
    case 36: 
      buf_ptr[72] = tex_ptr[15];
    case 37: 
      buf_ptr[74] = tex_ptr[15];
    case 38: 
      buf_ptr[76] = tex_ptr[15];
    case 39: 
      buf_ptr[78] = tex_ptr[16];
    case 40: 
      buf_ptr[80] = tex_ptr[16];
    case 41: 
      buf_ptr[82] = tex_ptr[17];
    case 42: 
      buf_ptr[84] = tex_ptr[17];
    case 43: 
      buf_ptr[86] = tex_ptr[18];
    case 44: 
      buf_ptr[88] = tex_ptr[18];
    case 45: 
      buf_ptr[90] = tex_ptr[18];
    case 46: 
      buf_ptr[92] = tex_ptr[19];
    case 47: 
      buf_ptr[94] = tex_ptr[19];
    case 48: 
      buf_ptr[96] = tex_ptr[20];
    case 49: 
      buf_ptr[98] = tex_ptr[20];
    case 50: 
      buf_ptr[100] = tex_ptr[21];
    case 51: 
      buf_ptr[102] = tex_ptr[21];
    case 52: 
      buf_ptr[104] = tex_ptr[21];
    case 53: 
      buf_ptr[106] = tex_ptr[22];
    case 54: 
      buf_ptr[108] = tex_ptr[22];
    case 55: 
      buf_ptr[110] = tex_ptr[23];
    case 56: 
      buf_ptr[112] = tex_ptr[23];
    case 57: 
      buf_ptr[114] = tex_ptr[24];
    case 58: 
      buf_ptr[116] = tex_ptr[24];
    case 59: 
      buf_ptr[118] = tex_ptr[24];
    case 60: 
      buf_ptr[120] = tex_ptr[25];
    case 61: 
      buf_ptr[122] = tex_ptr[25];
    case 62: 
      buf_ptr[124] = tex_ptr[26];
    case 63: 
      buf_ptr[126] = tex_ptr[26];
    case 64: 
      buf_ptr[128] = tex_ptr[26];
    case 65: 
      buf_ptr[130] = tex_ptr[27];
    case 66: 
      buf_ptr[132] = tex_ptr[27];
    case 67: 
      buf_ptr[134] = tex_ptr[28];
    case 68: 
      buf_ptr[136] = tex_ptr[28];
    case 69: 
      buf_ptr[138] = tex_ptr[29];
    case 70: 
      buf_ptr[140] = tex_ptr[29];
    case 71: 
      buf_ptr[142] = tex_ptr[29];
    case 72: 
      buf_ptr[144] = tex_ptr[30];
    case 73: 
      buf_ptr[146] = tex_ptr[30];
    case 74: 
      buf_ptr[148] = tex_ptr[31];
    case 75: 
      buf_ptr[150] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_77_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*13)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[6];
    case 16: 
      buf_ptr[32] = tex_ptr[6];
    case 17: 
      buf_ptr[34] = tex_ptr[7];
    case 18: 
      buf_ptr[36] = tex_ptr[7];
    case 19: 
      buf_ptr[38] = tex_ptr[7];
    case 20: 
      buf_ptr[40] = tex_ptr[8];
    case 21: 
      buf_ptr[42] = tex_ptr[8];
    case 22: 
      buf_ptr[44] = tex_ptr[9];
    case 23: 
      buf_ptr[46] = tex_ptr[9];
    case 24: 
      buf_ptr[48] = tex_ptr[9];
    case 25: 
      buf_ptr[50] = tex_ptr[10];
    case 26: 
      buf_ptr[52] = tex_ptr[10];
    case 27: 
      buf_ptr[54] = tex_ptr[11];
    case 28: 
      buf_ptr[56] = tex_ptr[11];
    case 29: 
      buf_ptr[58] = tex_ptr[12];
    case 30: 
      buf_ptr[60] = tex_ptr[12];
    case 31: 
      buf_ptr[62] = tex_ptr[12];
    case 32: 
      buf_ptr[64] = tex_ptr[13];
    case 33: 
      buf_ptr[66] = tex_ptr[13];
    case 34: 
      buf_ptr[68] = tex_ptr[14];
    case 35: 
      buf_ptr[70] = tex_ptr[14];
    case 36: 
      buf_ptr[72] = tex_ptr[14];
    case 37: 
      buf_ptr[74] = tex_ptr[15];
    case 38: 
      buf_ptr[76] = tex_ptr[15];
    case 39: 
      buf_ptr[78] = tex_ptr[16];
    case 40: 
      buf_ptr[80] = tex_ptr[16];
    case 41: 
      buf_ptr[82] = tex_ptr[17];
    case 42: 
      buf_ptr[84] = tex_ptr[17];
    case 43: 
      buf_ptr[86] = tex_ptr[17];
    case 44: 
      buf_ptr[88] = tex_ptr[18];
    case 45: 
      buf_ptr[90] = tex_ptr[18];
    case 46: 
      buf_ptr[92] = tex_ptr[19];
    case 47: 
      buf_ptr[94] = tex_ptr[19];
    case 48: 
      buf_ptr[96] = tex_ptr[19];
    case 49: 
      buf_ptr[98] = tex_ptr[20];
    case 50: 
      buf_ptr[100] = tex_ptr[20];
    case 51: 
      buf_ptr[102] = tex_ptr[21];
    case 52: 
      buf_ptr[104] = tex_ptr[21];
    case 53: 
      buf_ptr[106] = tex_ptr[22];
    case 54: 
      buf_ptr[108] = tex_ptr[22];
    case 55: 
      buf_ptr[110] = tex_ptr[22];
    case 56: 
      buf_ptr[112] = tex_ptr[23];
    case 57: 
      buf_ptr[114] = tex_ptr[23];
    case 58: 
      buf_ptr[116] = tex_ptr[24];
    case 59: 
      buf_ptr[118] = tex_ptr[24];
    case 60: 
      buf_ptr[120] = tex_ptr[24];
    case 61: 
      buf_ptr[122] = tex_ptr[25];
    case 62: 
      buf_ptr[124] = tex_ptr[25];
    case 63: 
      buf_ptr[126] = tex_ptr[26];
    case 64: 
      buf_ptr[128] = tex_ptr[26];
    case 65: 
      buf_ptr[130] = tex_ptr[27];
    case 66: 
      buf_ptr[132] = tex_ptr[27];
    case 67: 
      buf_ptr[134] = tex_ptr[27];
    case 68: 
      buf_ptr[136] = tex_ptr[28];
    case 69: 
      buf_ptr[138] = tex_ptr[28];
    case 70: 
      buf_ptr[140] = tex_ptr[29];
    case 71: 
      buf_ptr[142] = tex_ptr[29];
    case 72: 
      buf_ptr[144] = tex_ptr[29];
    case 73: 
      buf_ptr[146] = tex_ptr[30];
    case 74: 
      buf_ptr[148] = tex_ptr[30];
    case 75: 
      buf_ptr[150] = tex_ptr[31];
    case 76: 
      buf_ptr[152] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_78_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*13)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[6];
    case 16: 
      buf_ptr[32] = tex_ptr[6];
    case 17: 
      buf_ptr[34] = tex_ptr[6];
    case 18: 
      buf_ptr[36] = tex_ptr[7];
    case 19: 
      buf_ptr[38] = tex_ptr[7];
    case 20: 
      buf_ptr[40] = tex_ptr[8];
    case 21: 
      buf_ptr[42] = tex_ptr[8];
    case 22: 
      buf_ptr[44] = tex_ptr[9];
    case 23: 
      buf_ptr[46] = tex_ptr[9];
    case 24: 
      buf_ptr[48] = tex_ptr[9];
    case 25: 
      buf_ptr[50] = tex_ptr[10];
    case 26: 
      buf_ptr[52] = tex_ptr[10];
    case 27: 
      buf_ptr[54] = tex_ptr[11];
    case 28: 
      buf_ptr[56] = tex_ptr[11];
    case 29: 
      buf_ptr[58] = tex_ptr[11];
    case 30: 
      buf_ptr[60] = tex_ptr[12];
    case 31: 
      buf_ptr[62] = tex_ptr[12];
    case 32: 
      buf_ptr[64] = tex_ptr[13];
    case 33: 
      buf_ptr[66] = tex_ptr[13];
    case 34: 
      buf_ptr[68] = tex_ptr[13];
    case 35: 
      buf_ptr[70] = tex_ptr[14];
    case 36: 
      buf_ptr[72] = tex_ptr[14];
    case 37: 
      buf_ptr[74] = tex_ptr[15];
    case 38: 
      buf_ptr[76] = tex_ptr[15];
    case 39: 
      buf_ptr[78] = tex_ptr[16];
    case 40: 
      buf_ptr[80] = tex_ptr[16];
    case 41: 
      buf_ptr[82] = tex_ptr[16];
    case 42: 
      buf_ptr[84] = tex_ptr[17];
    case 43: 
      buf_ptr[86] = tex_ptr[17];
    case 44: 
      buf_ptr[88] = tex_ptr[18];
    case 45: 
      buf_ptr[90] = tex_ptr[18];
    case 46: 
      buf_ptr[92] = tex_ptr[18];
    case 47: 
      buf_ptr[94] = tex_ptr[19];
    case 48: 
      buf_ptr[96] = tex_ptr[19];
    case 49: 
      buf_ptr[98] = tex_ptr[20];
    case 50: 
      buf_ptr[100] = tex_ptr[20];
    case 51: 
      buf_ptr[102] = tex_ptr[20];
    case 52: 
      buf_ptr[104] = tex_ptr[21];
    case 53: 
      buf_ptr[106] = tex_ptr[21];
    case 54: 
      buf_ptr[108] = tex_ptr[22];
    case 55: 
      buf_ptr[110] = tex_ptr[22];
    case 56: 
      buf_ptr[112] = tex_ptr[22];
    case 57: 
      buf_ptr[114] = tex_ptr[23];
    case 58: 
      buf_ptr[116] = tex_ptr[23];
    case 59: 
      buf_ptr[118] = tex_ptr[24];
    case 60: 
      buf_ptr[120] = tex_ptr[24];
    case 61: 
      buf_ptr[122] = tex_ptr[25];
    case 62: 
      buf_ptr[124] = tex_ptr[25];
    case 63: 
      buf_ptr[126] = tex_ptr[25];
    case 64: 
      buf_ptr[128] = tex_ptr[26];
    case 65: 
      buf_ptr[130] = tex_ptr[26];
    case 66: 
      buf_ptr[132] = tex_ptr[27];
    case 67: 
      buf_ptr[134] = tex_ptr[27];
    case 68: 
      buf_ptr[136] = tex_ptr[27];
    case 69: 
      buf_ptr[138] = tex_ptr[28];
    case 70: 
      buf_ptr[140] = tex_ptr[28];
    case 71: 
      buf_ptr[142] = tex_ptr[29];
    case 72: 
      buf_ptr[144] = tex_ptr[29];
    case 73: 
      buf_ptr[146] = tex_ptr[29];
    case 74: 
      buf_ptr[148] = tex_ptr[30];
    case 75: 
      buf_ptr[150] = tex_ptr[30];
    case 76: 
      buf_ptr[152] = tex_ptr[31];
    case 77: 
      buf_ptr[154] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_79_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*12)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[4];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[6];
    case 16: 
      buf_ptr[32] = tex_ptr[6];
    case 17: 
      buf_ptr[34] = tex_ptr[6];
    case 18: 
      buf_ptr[36] = tex_ptr[7];
    case 19: 
      buf_ptr[38] = tex_ptr[7];
    case 20: 
      buf_ptr[40] = tex_ptr[8];
    case 21: 
      buf_ptr[42] = tex_ptr[8];
    case 22: 
      buf_ptr[44] = tex_ptr[8];
    case 23: 
      buf_ptr[46] = tex_ptr[9];
    case 24: 
      buf_ptr[48] = tex_ptr[9];
    case 25: 
      buf_ptr[50] = tex_ptr[10];
    case 26: 
      buf_ptr[52] = tex_ptr[10];
    case 27: 
      buf_ptr[54] = tex_ptr[10];
    case 28: 
      buf_ptr[56] = tex_ptr[11];
    case 29: 
      buf_ptr[58] = tex_ptr[11];
    case 30: 
      buf_ptr[60] = tex_ptr[12];
    case 31: 
      buf_ptr[62] = tex_ptr[12];
    case 32: 
      buf_ptr[64] = tex_ptr[12];
    case 33: 
      buf_ptr[66] = tex_ptr[13];
    case 34: 
      buf_ptr[68] = tex_ptr[13];
    case 35: 
      buf_ptr[70] = tex_ptr[14];
    case 36: 
      buf_ptr[72] = tex_ptr[14];
    case 37: 
      buf_ptr[74] = tex_ptr[14];
    case 38: 
      buf_ptr[76] = tex_ptr[15];
    case 39: 
      buf_ptr[78] = tex_ptr[15];
    case 40: 
      buf_ptr[80] = tex_ptr[16];
    case 41: 
      buf_ptr[82] = tex_ptr[16];
    case 42: 
      buf_ptr[84] = tex_ptr[17];
    case 43: 
      buf_ptr[86] = tex_ptr[17];
    case 44: 
      buf_ptr[88] = tex_ptr[17];
    case 45: 
      buf_ptr[90] = tex_ptr[18];
    case 46: 
      buf_ptr[92] = tex_ptr[18];
    case 47: 
      buf_ptr[94] = tex_ptr[19];
    case 48: 
      buf_ptr[96] = tex_ptr[19];
    case 49: 
      buf_ptr[98] = tex_ptr[19];
    case 50: 
      buf_ptr[100] = tex_ptr[20];
    case 51: 
      buf_ptr[102] = tex_ptr[20];
    case 52: 
      buf_ptr[104] = tex_ptr[21];
    case 53: 
      buf_ptr[106] = tex_ptr[21];
    case 54: 
      buf_ptr[108] = tex_ptr[21];
    case 55: 
      buf_ptr[110] = tex_ptr[22];
    case 56: 
      buf_ptr[112] = tex_ptr[22];
    case 57: 
      buf_ptr[114] = tex_ptr[23];
    case 58: 
      buf_ptr[116] = tex_ptr[23];
    case 59: 
      buf_ptr[118] = tex_ptr[23];
    case 60: 
      buf_ptr[120] = tex_ptr[24];
    case 61: 
      buf_ptr[122] = tex_ptr[24];
    case 62: 
      buf_ptr[124] = tex_ptr[25];
    case 63: 
      buf_ptr[126] = tex_ptr[25];
    case 64: 
      buf_ptr[128] = tex_ptr[25];
    case 65: 
      buf_ptr[130] = tex_ptr[26];
    case 66: 
      buf_ptr[132] = tex_ptr[26];
    case 67: 
      buf_ptr[134] = tex_ptr[27];
    case 68: 
      buf_ptr[136] = tex_ptr[27];
    case 69: 
      buf_ptr[138] = tex_ptr[27];
    case 70: 
      buf_ptr[140] = tex_ptr[28];
    case 71: 
      buf_ptr[142] = tex_ptr[28];
    case 72: 
      buf_ptr[144] = tex_ptr[29];
    case 73: 
      buf_ptr[146] = tex_ptr[29];
    case 74: 
      buf_ptr[148] = tex_ptr[29];
    case 75: 
      buf_ptr[150] = tex_ptr[30];
    case 76: 
      buf_ptr[152] = tex_ptr[30];
    case 77: 
      buf_ptr[154] = tex_ptr[31];
    case 78: 
      buf_ptr[156] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_80_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*12)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[2];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[6];
    case 16: 
      buf_ptr[32] = tex_ptr[6];
    case 17: 
      buf_ptr[34] = tex_ptr[6];
    case 18: 
      buf_ptr[36] = tex_ptr[7];
    case 19: 
      buf_ptr[38] = tex_ptr[7];
    case 20: 
      buf_ptr[40] = tex_ptr[8];
    case 21: 
      buf_ptr[42] = tex_ptr[8];
    case 22: 
      buf_ptr[44] = tex_ptr[8];
    case 23: 
      buf_ptr[46] = tex_ptr[9];
    case 24: 
      buf_ptr[48] = tex_ptr[9];
    case 25: 
      buf_ptr[50] = tex_ptr[10];
    case 26: 
      buf_ptr[52] = tex_ptr[10];
    case 27: 
      buf_ptr[54] = tex_ptr[10];
    case 28: 
      buf_ptr[56] = tex_ptr[11];
    case 29: 
      buf_ptr[58] = tex_ptr[11];
    case 30: 
      buf_ptr[60] = tex_ptr[12];
    case 31: 
      buf_ptr[62] = tex_ptr[12];
    case 32: 
      buf_ptr[64] = tex_ptr[12];
    case 33: 
      buf_ptr[66] = tex_ptr[13];
    case 34: 
      buf_ptr[68] = tex_ptr[13];
    case 35: 
      buf_ptr[70] = tex_ptr[14];
    case 36: 
      buf_ptr[72] = tex_ptr[14];
    case 37: 
      buf_ptr[74] = tex_ptr[14];
    case 38: 
      buf_ptr[76] = tex_ptr[15];
    case 39: 
      buf_ptr[78] = tex_ptr[15];
    case 40: 
      buf_ptr[80] = tex_ptr[16];
    case 41: 
      buf_ptr[82] = tex_ptr[16];
    case 42: 
      buf_ptr[84] = tex_ptr[16];
    case 43: 
      buf_ptr[86] = tex_ptr[17];
    case 44: 
      buf_ptr[88] = tex_ptr[17];
    case 45: 
      buf_ptr[90] = tex_ptr[18];
    case 46: 
      buf_ptr[92] = tex_ptr[18];
    case 47: 
      buf_ptr[94] = tex_ptr[18];
    case 48: 
      buf_ptr[96] = tex_ptr[19];
    case 49: 
      buf_ptr[98] = tex_ptr[19];
    case 50: 
      buf_ptr[100] = tex_ptr[19];
    case 51: 
      buf_ptr[102] = tex_ptr[20];
    case 52: 
      buf_ptr[104] = tex_ptr[20];
    case 53: 
      buf_ptr[106] = tex_ptr[21];
    case 54: 
      buf_ptr[108] = tex_ptr[21];
    case 55: 
      buf_ptr[110] = tex_ptr[21];
    case 56: 
      buf_ptr[112] = tex_ptr[22];
    case 57: 
      buf_ptr[114] = tex_ptr[22];
    case 58: 
      buf_ptr[116] = tex_ptr[23];
    case 59: 
      buf_ptr[118] = tex_ptr[23];
    case 60: 
      buf_ptr[120] = tex_ptr[23];
    case 61: 
      buf_ptr[122] = tex_ptr[24];
    case 62: 
      buf_ptr[124] = tex_ptr[24];
    case 63: 
      buf_ptr[126] = tex_ptr[25];
    case 64: 
      buf_ptr[128] = tex_ptr[25];
    case 65: 
      buf_ptr[130] = tex_ptr[25];
    case 66: 
      buf_ptr[132] = tex_ptr[26];
    case 67: 
      buf_ptr[134] = tex_ptr[26];
    case 68: 
      buf_ptr[136] = tex_ptr[27];
    case 69: 
      buf_ptr[138] = tex_ptr[27];
    case 70: 
      buf_ptr[140] = tex_ptr[27];
    case 71: 
      buf_ptr[142] = tex_ptr[28];
    case 72: 
      buf_ptr[144] = tex_ptr[28];
    case 73: 
      buf_ptr[146] = tex_ptr[29];
    case 74: 
      buf_ptr[148] = tex_ptr[29];
    case 75: 
      buf_ptr[150] = tex_ptr[29];
    case 76: 
      buf_ptr[152] = tex_ptr[30];
    case 77: 
      buf_ptr[154] = tex_ptr[30];
    case 78: 
      buf_ptr[156] = tex_ptr[31];
    case 79: 
      buf_ptr[158] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_81_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*12)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[6];
    case 17: 
      buf_ptr[34] = tex_ptr[6];
    case 18: 
      buf_ptr[36] = tex_ptr[7];
    case 19: 
      buf_ptr[38] = tex_ptr[7];
    case 20: 
      buf_ptr[40] = tex_ptr[7];
    case 21: 
      buf_ptr[42] = tex_ptr[8];
    case 22: 
      buf_ptr[44] = tex_ptr[8];
    case 23: 
      buf_ptr[46] = tex_ptr[9];
    case 24: 
      buf_ptr[48] = tex_ptr[9];
    case 25: 
      buf_ptr[50] = tex_ptr[9];
    case 26: 
      buf_ptr[52] = tex_ptr[10];
    case 27: 
      buf_ptr[54] = tex_ptr[10];
    case 28: 
      buf_ptr[56] = tex_ptr[11];
    case 29: 
      buf_ptr[58] = tex_ptr[11];
    case 30: 
      buf_ptr[60] = tex_ptr[11];
    case 31: 
      buf_ptr[62] = tex_ptr[12];
    case 32: 
      buf_ptr[64] = tex_ptr[12];
    case 33: 
      buf_ptr[66] = tex_ptr[13];
    case 34: 
      buf_ptr[68] = tex_ptr[13];
    case 35: 
      buf_ptr[70] = tex_ptr[13];
    case 36: 
      buf_ptr[72] = tex_ptr[14];
    case 37: 
      buf_ptr[74] = tex_ptr[14];
    case 38: 
      buf_ptr[76] = tex_ptr[15];
    case 39: 
      buf_ptr[78] = tex_ptr[15];
    case 40: 
      buf_ptr[80] = tex_ptr[15];
    case 41: 
      buf_ptr[82] = tex_ptr[16];
    case 42: 
      buf_ptr[84] = tex_ptr[16];
    case 43: 
      buf_ptr[86] = tex_ptr[16];
    case 44: 
      buf_ptr[88] = tex_ptr[17];
    case 45: 
      buf_ptr[90] = tex_ptr[17];
    case 46: 
      buf_ptr[92] = tex_ptr[18];
    case 47: 
      buf_ptr[94] = tex_ptr[18];
    case 48: 
      buf_ptr[96] = tex_ptr[18];
    case 49: 
      buf_ptr[98] = tex_ptr[19];
    case 50: 
      buf_ptr[100] = tex_ptr[19];
    case 51: 
      buf_ptr[102] = tex_ptr[20];
    case 52: 
      buf_ptr[104] = tex_ptr[20];
    case 53: 
      buf_ptr[106] = tex_ptr[20];
    case 54: 
      buf_ptr[108] = tex_ptr[21];
    case 55: 
      buf_ptr[110] = tex_ptr[21];
    case 56: 
      buf_ptr[112] = tex_ptr[22];
    case 57: 
      buf_ptr[114] = tex_ptr[22];
    case 58: 
      buf_ptr[116] = tex_ptr[22];
    case 59: 
      buf_ptr[118] = tex_ptr[23];
    case 60: 
      buf_ptr[120] = tex_ptr[23];
    case 61: 
      buf_ptr[122] = tex_ptr[24];
    case 62: 
      buf_ptr[124] = tex_ptr[24];
    case 63: 
      buf_ptr[126] = tex_ptr[24];
    case 64: 
      buf_ptr[128] = tex_ptr[25];
    case 65: 
      buf_ptr[130] = tex_ptr[25];
    case 66: 
      buf_ptr[132] = tex_ptr[26];
    case 67: 
      buf_ptr[134] = tex_ptr[26];
    case 68: 
      buf_ptr[136] = tex_ptr[26];
    case 69: 
      buf_ptr[138] = tex_ptr[27];
    case 70: 
      buf_ptr[140] = tex_ptr[27];
    case 71: 
      buf_ptr[142] = tex_ptr[28];
    case 72: 
      buf_ptr[144] = tex_ptr[28];
    case 73: 
      buf_ptr[146] = tex_ptr[28];
    case 74: 
      buf_ptr[148] = tex_ptr[29];
    case 75: 
      buf_ptr[150] = tex_ptr[29];
    case 76: 
      buf_ptr[152] = tex_ptr[30];
    case 77: 
      buf_ptr[154] = tex_ptr[30];
    case 78: 
      buf_ptr[156] = tex_ptr[30];
    case 79: 
      buf_ptr[158] = tex_ptr[31];
    case 80: 
      buf_ptr[160] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_82_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*12)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[6];
    case 17: 
      buf_ptr[34] = tex_ptr[6];
    case 18: 
      buf_ptr[36] = tex_ptr[7];
    case 19: 
      buf_ptr[38] = tex_ptr[7];
    case 20: 
      buf_ptr[40] = tex_ptr[7];
    case 21: 
      buf_ptr[42] = tex_ptr[8];
    case 22: 
      buf_ptr[44] = tex_ptr[8];
    case 23: 
      buf_ptr[46] = tex_ptr[8];
    case 24: 
      buf_ptr[48] = tex_ptr[9];
    case 25: 
      buf_ptr[50] = tex_ptr[9];
    case 26: 
      buf_ptr[52] = tex_ptr[10];
    case 27: 
      buf_ptr[54] = tex_ptr[10];
    case 28: 
      buf_ptr[56] = tex_ptr[10];
    case 29: 
      buf_ptr[58] = tex_ptr[11];
    case 30: 
      buf_ptr[60] = tex_ptr[11];
    case 31: 
      buf_ptr[62] = tex_ptr[12];
    case 32: 
      buf_ptr[64] = tex_ptr[12];
    case 33: 
      buf_ptr[66] = tex_ptr[12];
    case 34: 
      buf_ptr[68] = tex_ptr[13];
    case 35: 
      buf_ptr[70] = tex_ptr[13];
    case 36: 
      buf_ptr[72] = tex_ptr[14];
    case 37: 
      buf_ptr[74] = tex_ptr[14];
    case 38: 
      buf_ptr[76] = tex_ptr[14];
    case 39: 
      buf_ptr[78] = tex_ptr[15];
    case 40: 
      buf_ptr[80] = tex_ptr[15];
    case 41: 
      buf_ptr[82] = tex_ptr[16];
    case 42: 
      buf_ptr[84] = tex_ptr[16];
    case 43: 
      buf_ptr[86] = tex_ptr[16];
    case 44: 
      buf_ptr[88] = tex_ptr[17];
    case 45: 
      buf_ptr[90] = tex_ptr[17];
    case 46: 
      buf_ptr[92] = tex_ptr[17];
    case 47: 
      buf_ptr[94] = tex_ptr[18];
    case 48: 
      buf_ptr[96] = tex_ptr[18];
    case 49: 
      buf_ptr[98] = tex_ptr[19];
    case 50: 
      buf_ptr[100] = tex_ptr[19];
    case 51: 
      buf_ptr[102] = tex_ptr[19];
    case 52: 
      buf_ptr[104] = tex_ptr[20];
    case 53: 
      buf_ptr[106] = tex_ptr[20];
    case 54: 
      buf_ptr[108] = tex_ptr[21];
    case 55: 
      buf_ptr[110] = tex_ptr[21];
    case 56: 
      buf_ptr[112] = tex_ptr[21];
    case 57: 
      buf_ptr[114] = tex_ptr[22];
    case 58: 
      buf_ptr[116] = tex_ptr[22];
    case 59: 
      buf_ptr[118] = tex_ptr[23];
    case 60: 
      buf_ptr[120] = tex_ptr[23];
    case 61: 
      buf_ptr[122] = tex_ptr[23];
    case 62: 
      buf_ptr[124] = tex_ptr[24];
    case 63: 
      buf_ptr[126] = tex_ptr[24];
    case 64: 
      buf_ptr[128] = tex_ptr[24];
    case 65: 
      buf_ptr[130] = tex_ptr[25];
    case 66: 
      buf_ptr[132] = tex_ptr[25];
    case 67: 
      buf_ptr[134] = tex_ptr[26];
    case 68: 
      buf_ptr[136] = tex_ptr[26];
    case 69: 
      buf_ptr[138] = tex_ptr[26];
    case 70: 
      buf_ptr[140] = tex_ptr[27];
    case 71: 
      buf_ptr[142] = tex_ptr[27];
    case 72: 
      buf_ptr[144] = tex_ptr[28];
    case 73: 
      buf_ptr[146] = tex_ptr[28];
    case 74: 
      buf_ptr[148] = tex_ptr[28];
    case 75: 
      buf_ptr[150] = tex_ptr[29];
    case 76: 
      buf_ptr[152] = tex_ptr[29];
    case 77: 
      buf_ptr[154] = tex_ptr[30];
    case 78: 
      buf_ptr[156] = tex_ptr[30];
    case 79: 
      buf_ptr[158] = tex_ptr[30];
    case 80: 
      buf_ptr[160] = tex_ptr[31];
    case 81: 
      buf_ptr[162] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_83_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*12)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[5];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[6];
    case 17: 
      buf_ptr[34] = tex_ptr[6];
    case 18: 
      buf_ptr[36] = tex_ptr[6];
    case 19: 
      buf_ptr[38] = tex_ptr[7];
    case 20: 
      buf_ptr[40] = tex_ptr[7];
    case 21: 
      buf_ptr[42] = tex_ptr[8];
    case 22: 
      buf_ptr[44] = tex_ptr[8];
    case 23: 
      buf_ptr[46] = tex_ptr[8];
    case 24: 
      buf_ptr[48] = tex_ptr[9];
    case 25: 
      buf_ptr[50] = tex_ptr[9];
    case 26: 
      buf_ptr[52] = tex_ptr[10];
    case 27: 
      buf_ptr[54] = tex_ptr[10];
    case 28: 
      buf_ptr[56] = tex_ptr[10];
    case 29: 
      buf_ptr[58] = tex_ptr[11];
    case 30: 
      buf_ptr[60] = tex_ptr[11];
    case 31: 
      buf_ptr[62] = tex_ptr[11];
    case 32: 
      buf_ptr[64] = tex_ptr[12];
    case 33: 
      buf_ptr[66] = tex_ptr[12];
    case 34: 
      buf_ptr[68] = tex_ptr[13];
    case 35: 
      buf_ptr[70] = tex_ptr[13];
    case 36: 
      buf_ptr[72] = tex_ptr[13];
    case 37: 
      buf_ptr[74] = tex_ptr[14];
    case 38: 
      buf_ptr[76] = tex_ptr[14];
    case 39: 
      buf_ptr[78] = tex_ptr[15];
    case 40: 
      buf_ptr[80] = tex_ptr[15];
    case 41: 
      buf_ptr[82] = tex_ptr[15];
    case 42: 
      buf_ptr[84] = tex_ptr[16];
    case 43: 
      buf_ptr[86] = tex_ptr[16];
    case 44: 
      buf_ptr[88] = tex_ptr[16];
    case 45: 
      buf_ptr[90] = tex_ptr[17];
    case 46: 
      buf_ptr[92] = tex_ptr[17];
    case 47: 
      buf_ptr[94] = tex_ptr[18];
    case 48: 
      buf_ptr[96] = tex_ptr[18];
    case 49: 
      buf_ptr[98] = tex_ptr[18];
    case 50: 
      buf_ptr[100] = tex_ptr[19];
    case 51: 
      buf_ptr[102] = tex_ptr[19];
    case 52: 
      buf_ptr[104] = tex_ptr[20];
    case 53: 
      buf_ptr[106] = tex_ptr[20];
    case 54: 
      buf_ptr[108] = tex_ptr[20];
    case 55: 
      buf_ptr[110] = tex_ptr[21];
    case 56: 
      buf_ptr[112] = tex_ptr[21];
    case 57: 
      buf_ptr[114] = tex_ptr[21];
    case 58: 
      buf_ptr[116] = tex_ptr[22];
    case 59: 
      buf_ptr[118] = tex_ptr[22];
    case 60: 
      buf_ptr[120] = tex_ptr[23];
    case 61: 
      buf_ptr[122] = tex_ptr[23];
    case 62: 
      buf_ptr[124] = tex_ptr[23];
    case 63: 
      buf_ptr[126] = tex_ptr[24];
    case 64: 
      buf_ptr[128] = tex_ptr[24];
    case 65: 
      buf_ptr[130] = tex_ptr[25];
    case 66: 
      buf_ptr[132] = tex_ptr[25];
    case 67: 
      buf_ptr[134] = tex_ptr[25];
    case 68: 
      buf_ptr[136] = tex_ptr[26];
    case 69: 
      buf_ptr[138] = tex_ptr[26];
    case 70: 
      buf_ptr[140] = tex_ptr[26];
    case 71: 
      buf_ptr[142] = tex_ptr[27];
    case 72: 
      buf_ptr[144] = tex_ptr[27];
    case 73: 
      buf_ptr[146] = tex_ptr[28];
    case 74: 
      buf_ptr[148] = tex_ptr[28];
    case 75: 
      buf_ptr[150] = tex_ptr[28];
    case 76: 
      buf_ptr[152] = tex_ptr[29];
    case 77: 
      buf_ptr[154] = tex_ptr[29];
    case 78: 
      buf_ptr[156] = tex_ptr[30];
    case 79: 
      buf_ptr[158] = tex_ptr[30];
    case 80: 
      buf_ptr[160] = tex_ptr[30];
    case 81: 
      buf_ptr[162] = tex_ptr[31];
    case 82: 
      buf_ptr[164] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_84_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*12)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[6];
    case 17: 
      buf_ptr[34] = tex_ptr[6];
    case 18: 
      buf_ptr[36] = tex_ptr[6];
    case 19: 
      buf_ptr[38] = tex_ptr[7];
    case 20: 
      buf_ptr[40] = tex_ptr[7];
    case 21: 
      buf_ptr[42] = tex_ptr[8];
    case 22: 
      buf_ptr[44] = tex_ptr[8];
    case 23: 
      buf_ptr[46] = tex_ptr[8];
    case 24: 
      buf_ptr[48] = tex_ptr[9];
    case 25: 
      buf_ptr[50] = tex_ptr[9];
    case 26: 
      buf_ptr[52] = tex_ptr[9];
    case 27: 
      buf_ptr[54] = tex_ptr[10];
    case 28: 
      buf_ptr[56] = tex_ptr[10];
    case 29: 
      buf_ptr[58] = tex_ptr[11];
    case 30: 
      buf_ptr[60] = tex_ptr[11];
    case 31: 
      buf_ptr[62] = tex_ptr[11];
    case 32: 
      buf_ptr[64] = tex_ptr[12];
    case 33: 
      buf_ptr[66] = tex_ptr[12];
    case 34: 
      buf_ptr[68] = tex_ptr[12];
    case 35: 
      buf_ptr[70] = tex_ptr[13];
    case 36: 
      buf_ptr[72] = tex_ptr[13];
    case 37: 
      buf_ptr[74] = tex_ptr[14];
    case 38: 
      buf_ptr[76] = tex_ptr[14];
    case 39: 
      buf_ptr[78] = tex_ptr[14];
    case 40: 
      buf_ptr[80] = tex_ptr[15];
    case 41: 
      buf_ptr[82] = tex_ptr[15];
    case 42: 
      buf_ptr[84] = tex_ptr[16];
    case 43: 
      buf_ptr[86] = tex_ptr[16];
    case 44: 
      buf_ptr[88] = tex_ptr[16];
    case 45: 
      buf_ptr[90] = tex_ptr[17];
    case 46: 
      buf_ptr[92] = tex_ptr[17];
    case 47: 
      buf_ptr[94] = tex_ptr[17];
    case 48: 
      buf_ptr[96] = tex_ptr[18];
    case 49: 
      buf_ptr[98] = tex_ptr[18];
    case 50: 
      buf_ptr[100] = tex_ptr[19];
    case 51: 
      buf_ptr[102] = tex_ptr[19];
    case 52: 
      buf_ptr[104] = tex_ptr[19];
    case 53: 
      buf_ptr[106] = tex_ptr[20];
    case 54: 
      buf_ptr[108] = tex_ptr[20];
    case 55: 
      buf_ptr[110] = tex_ptr[20];
    case 56: 
      buf_ptr[112] = tex_ptr[21];
    case 57: 
      buf_ptr[114] = tex_ptr[21];
    case 58: 
      buf_ptr[116] = tex_ptr[22];
    case 59: 
      buf_ptr[118] = tex_ptr[22];
    case 60: 
      buf_ptr[120] = tex_ptr[22];
    case 61: 
      buf_ptr[122] = tex_ptr[23];
    case 62: 
      buf_ptr[124] = tex_ptr[23];
    case 63: 
      buf_ptr[126] = tex_ptr[23];
    case 64: 
      buf_ptr[128] = tex_ptr[24];
    case 65: 
      buf_ptr[130] = tex_ptr[24];
    case 66: 
      buf_ptr[132] = tex_ptr[25];
    case 67: 
      buf_ptr[134] = tex_ptr[25];
    case 68: 
      buf_ptr[136] = tex_ptr[25];
    case 69: 
      buf_ptr[138] = tex_ptr[26];
    case 70: 
      buf_ptr[140] = tex_ptr[26];
    case 71: 
      buf_ptr[142] = tex_ptr[27];
    case 72: 
      buf_ptr[144] = tex_ptr[27];
    case 73: 
      buf_ptr[146] = tex_ptr[27];
    case 74: 
      buf_ptr[148] = tex_ptr[28];
    case 75: 
      buf_ptr[150] = tex_ptr[28];
    case 76: 
      buf_ptr[152] = tex_ptr[28];
    case 77: 
      buf_ptr[154] = tex_ptr[29];
    case 78: 
      buf_ptr[156] = tex_ptr[29];
    case 79: 
      buf_ptr[158] = tex_ptr[30];
    case 80: 
      buf_ptr[160] = tex_ptr[30];
    case 81: 
      buf_ptr[162] = tex_ptr[30];
    case 82: 
      buf_ptr[164] = tex_ptr[31];
    case 83: 
      buf_ptr[166] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_85_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*12)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[3];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[6];
    case 17: 
      buf_ptr[34] = tex_ptr[6];
    case 18: 
      buf_ptr[36] = tex_ptr[6];
    case 19: 
      buf_ptr[38] = tex_ptr[7];
    case 20: 
      buf_ptr[40] = tex_ptr[7];
    case 21: 
      buf_ptr[42] = tex_ptr[7];
    case 22: 
      buf_ptr[44] = tex_ptr[8];
    case 23: 
      buf_ptr[46] = tex_ptr[8];
    case 24: 
      buf_ptr[48] = tex_ptr[9];
    case 25: 
      buf_ptr[50] = tex_ptr[9];
    case 26: 
      buf_ptr[52] = tex_ptr[9];
    case 27: 
      buf_ptr[54] = tex_ptr[10];
    case 28: 
      buf_ptr[56] = tex_ptr[10];
    case 29: 
      buf_ptr[58] = tex_ptr[10];
    case 30: 
      buf_ptr[60] = tex_ptr[11];
    case 31: 
      buf_ptr[62] = tex_ptr[11];
    case 32: 
      buf_ptr[64] = tex_ptr[12];
    case 33: 
      buf_ptr[66] = tex_ptr[12];
    case 34: 
      buf_ptr[68] = tex_ptr[12];
    case 35: 
      buf_ptr[70] = tex_ptr[13];
    case 36: 
      buf_ptr[72] = tex_ptr[13];
    case 37: 
      buf_ptr[74] = tex_ptr[13];
    case 38: 
      buf_ptr[76] = tex_ptr[14];
    case 39: 
      buf_ptr[78] = tex_ptr[14];
    case 40: 
      buf_ptr[80] = tex_ptr[15];
    case 41: 
      buf_ptr[82] = tex_ptr[15];
    case 42: 
      buf_ptr[84] = tex_ptr[15];
    case 43: 
      buf_ptr[86] = tex_ptr[16];
    case 44: 
      buf_ptr[88] = tex_ptr[16];
    case 45: 
      buf_ptr[90] = tex_ptr[16];
    case 46: 
      buf_ptr[92] = tex_ptr[17];
    case 47: 
      buf_ptr[94] = tex_ptr[17];
    case 48: 
      buf_ptr[96] = tex_ptr[18];
    case 49: 
      buf_ptr[98] = tex_ptr[18];
    case 50: 
      buf_ptr[100] = tex_ptr[18];
    case 51: 
      buf_ptr[102] = tex_ptr[19];
    case 52: 
      buf_ptr[104] = tex_ptr[19];
    case 53: 
      buf_ptr[106] = tex_ptr[19];
    case 54: 
      buf_ptr[108] = tex_ptr[20];
    case 55: 
      buf_ptr[110] = tex_ptr[20];
    case 56: 
      buf_ptr[112] = tex_ptr[21];
    case 57: 
      buf_ptr[114] = tex_ptr[21];
    case 58: 
      buf_ptr[116] = tex_ptr[21];
    case 59: 
      buf_ptr[118] = tex_ptr[22];
    case 60: 
      buf_ptr[120] = tex_ptr[22];
    case 61: 
      buf_ptr[122] = tex_ptr[22];
    case 62: 
      buf_ptr[124] = tex_ptr[23];
    case 63: 
      buf_ptr[126] = tex_ptr[23];
    case 64: 
      buf_ptr[128] = tex_ptr[24];
    case 65: 
      buf_ptr[130] = tex_ptr[24];
    case 66: 
      buf_ptr[132] = tex_ptr[24];
    case 67: 
      buf_ptr[134] = tex_ptr[25];
    case 68: 
      buf_ptr[136] = tex_ptr[25];
    case 69: 
      buf_ptr[138] = tex_ptr[25];
    case 70: 
      buf_ptr[140] = tex_ptr[26];
    case 71: 
      buf_ptr[142] = tex_ptr[26];
    case 72: 
      buf_ptr[144] = tex_ptr[27];
    case 73: 
      buf_ptr[146] = tex_ptr[27];
    case 74: 
      buf_ptr[148] = tex_ptr[27];
    case 75: 
      buf_ptr[150] = tex_ptr[28];
    case 76: 
      buf_ptr[152] = tex_ptr[28];
    case 77: 
      buf_ptr[154] = tex_ptr[28];
    case 78: 
      buf_ptr[156] = tex_ptr[29];
    case 79: 
      buf_ptr[158] = tex_ptr[29];
    case 80: 
      buf_ptr[160] = tex_ptr[30];
    case 81: 
      buf_ptr[162] = tex_ptr[30];
    case 82: 
      buf_ptr[164] = tex_ptr[30];
    case 83: 
      buf_ptr[166] = tex_ptr[31];
    case 84: 
      buf_ptr[168] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_86_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*11)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[6];
    case 18: 
      buf_ptr[36] = tex_ptr[6];
    case 19: 
      buf_ptr[38] = tex_ptr[7];
    case 20: 
      buf_ptr[40] = tex_ptr[7];
    case 21: 
      buf_ptr[42] = tex_ptr[7];
    case 22: 
      buf_ptr[44] = tex_ptr[8];
    case 23: 
      buf_ptr[46] = tex_ptr[8];
    case 24: 
      buf_ptr[48] = tex_ptr[8];
    case 25: 
      buf_ptr[50] = tex_ptr[9];
    case 26: 
      buf_ptr[52] = tex_ptr[9];
    case 27: 
      buf_ptr[54] = tex_ptr[10];
    case 28: 
      buf_ptr[56] = tex_ptr[10];
    case 29: 
      buf_ptr[58] = tex_ptr[10];
    case 30: 
      buf_ptr[60] = tex_ptr[11];
    case 31: 
      buf_ptr[62] = tex_ptr[11];
    case 32: 
      buf_ptr[64] = tex_ptr[11];
    case 33: 
      buf_ptr[66] = tex_ptr[12];
    case 34: 
      buf_ptr[68] = tex_ptr[12];
    case 35: 
      buf_ptr[70] = tex_ptr[13];
    case 36: 
      buf_ptr[72] = tex_ptr[13];
    case 37: 
      buf_ptr[74] = tex_ptr[13];
    case 38: 
      buf_ptr[76] = tex_ptr[14];
    case 39: 
      buf_ptr[78] = tex_ptr[14];
    case 40: 
      buf_ptr[80] = tex_ptr[14];
    case 41: 
      buf_ptr[82] = tex_ptr[15];
    case 42: 
      buf_ptr[84] = tex_ptr[15];
    case 43: 
      buf_ptr[86] = tex_ptr[16];
    case 44: 
      buf_ptr[88] = tex_ptr[16];
    case 45: 
      buf_ptr[90] = tex_ptr[16];
    case 46: 
      buf_ptr[92] = tex_ptr[17];
    case 47: 
      buf_ptr[94] = tex_ptr[17];
    case 48: 
      buf_ptr[96] = tex_ptr[17];
    case 49: 
      buf_ptr[98] = tex_ptr[18];
    case 50: 
      buf_ptr[100] = tex_ptr[18];
    case 51: 
      buf_ptr[102] = tex_ptr[18];
    case 52: 
      buf_ptr[104] = tex_ptr[19];
    case 53: 
      buf_ptr[106] = tex_ptr[19];
    case 54: 
      buf_ptr[108] = tex_ptr[20];
    case 55: 
      buf_ptr[110] = tex_ptr[20];
    case 56: 
      buf_ptr[112] = tex_ptr[20];
    case 57: 
      buf_ptr[114] = tex_ptr[21];
    case 58: 
      buf_ptr[116] = tex_ptr[21];
    case 59: 
      buf_ptr[118] = tex_ptr[21];
    case 60: 
      buf_ptr[120] = tex_ptr[22];
    case 61: 
      buf_ptr[122] = tex_ptr[22];
    case 62: 
      buf_ptr[124] = tex_ptr[23];
    case 63: 
      buf_ptr[126] = tex_ptr[23];
    case 64: 
      buf_ptr[128] = tex_ptr[23];
    case 65: 
      buf_ptr[130] = tex_ptr[24];
    case 66: 
      buf_ptr[132] = tex_ptr[24];
    case 67: 
      buf_ptr[134] = tex_ptr[24];
    case 68: 
      buf_ptr[136] = tex_ptr[25];
    case 69: 
      buf_ptr[138] = tex_ptr[25];
    case 70: 
      buf_ptr[140] = tex_ptr[26];
    case 71: 
      buf_ptr[142] = tex_ptr[26];
    case 72: 
      buf_ptr[144] = tex_ptr[26];
    case 73: 
      buf_ptr[146] = tex_ptr[27];
    case 74: 
      buf_ptr[148] = tex_ptr[27];
    case 75: 
      buf_ptr[150] = tex_ptr[27];
    case 76: 
      buf_ptr[152] = tex_ptr[28];
    case 77: 
      buf_ptr[154] = tex_ptr[28];
    case 78: 
      buf_ptr[156] = tex_ptr[29];
    case 79: 
      buf_ptr[158] = tex_ptr[29];
    case 80: 
      buf_ptr[160] = tex_ptr[29];
    case 81: 
      buf_ptr[162] = tex_ptr[30];
    case 82: 
      buf_ptr[164] = tex_ptr[30];
    case 83: 
      buf_ptr[166] = tex_ptr[30];
    case 84: 
      buf_ptr[168] = tex_ptr[31];
    case 85: 
      buf_ptr[170] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_87_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*11)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[6];
    case 18: 
      buf_ptr[36] = tex_ptr[6];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[7];
    case 21: 
      buf_ptr[42] = tex_ptr[7];
    case 22: 
      buf_ptr[44] = tex_ptr[8];
    case 23: 
      buf_ptr[46] = tex_ptr[8];
    case 24: 
      buf_ptr[48] = tex_ptr[8];
    case 25: 
      buf_ptr[50] = tex_ptr[9];
    case 26: 
      buf_ptr[52] = tex_ptr[9];
    case 27: 
      buf_ptr[54] = tex_ptr[9];
    case 28: 
      buf_ptr[56] = tex_ptr[10];
    case 29: 
      buf_ptr[58] = tex_ptr[10];
    case 30: 
      buf_ptr[60] = tex_ptr[11];
    case 31: 
      buf_ptr[62] = tex_ptr[11];
    case 32: 
      buf_ptr[64] = tex_ptr[11];
    case 33: 
      buf_ptr[66] = tex_ptr[12];
    case 34: 
      buf_ptr[68] = tex_ptr[12];
    case 35: 
      buf_ptr[70] = tex_ptr[12];
    case 36: 
      buf_ptr[72] = tex_ptr[13];
    case 37: 
      buf_ptr[74] = tex_ptr[13];
    case 38: 
      buf_ptr[76] = tex_ptr[13];
    case 39: 
      buf_ptr[78] = tex_ptr[14];
    case 40: 
      buf_ptr[80] = tex_ptr[14];
    case 41: 
      buf_ptr[82] = tex_ptr[15];
    case 42: 
      buf_ptr[84] = tex_ptr[15];
    case 43: 
      buf_ptr[86] = tex_ptr[15];
    case 44: 
      buf_ptr[88] = tex_ptr[16];
    case 45: 
      buf_ptr[90] = tex_ptr[16];
    case 46: 
      buf_ptr[92] = tex_ptr[16];
    case 47: 
      buf_ptr[94] = tex_ptr[17];
    case 48: 
      buf_ptr[96] = tex_ptr[17];
    case 49: 
      buf_ptr[98] = tex_ptr[18];
    case 50: 
      buf_ptr[100] = tex_ptr[18];
    case 51: 
      buf_ptr[102] = tex_ptr[18];
    case 52: 
      buf_ptr[104] = tex_ptr[19];
    case 53: 
      buf_ptr[106] = tex_ptr[19];
    case 54: 
      buf_ptr[108] = tex_ptr[19];
    case 55: 
      buf_ptr[110] = tex_ptr[20];
    case 56: 
      buf_ptr[112] = tex_ptr[20];
    case 57: 
      buf_ptr[114] = tex_ptr[20];
    case 58: 
      buf_ptr[116] = tex_ptr[21];
    case 59: 
      buf_ptr[118] = tex_ptr[21];
    case 60: 
      buf_ptr[120] = tex_ptr[22];
    case 61: 
      buf_ptr[122] = tex_ptr[22];
    case 62: 
      buf_ptr[124] = tex_ptr[22];
    case 63: 
      buf_ptr[126] = tex_ptr[23];
    case 64: 
      buf_ptr[128] = tex_ptr[23];
    case 65: 
      buf_ptr[130] = tex_ptr[23];
    case 66: 
      buf_ptr[132] = tex_ptr[24];
    case 67: 
      buf_ptr[134] = tex_ptr[24];
    case 68: 
      buf_ptr[136] = tex_ptr[25];
    case 69: 
      buf_ptr[138] = tex_ptr[25];
    case 70: 
      buf_ptr[140] = tex_ptr[25];
    case 71: 
      buf_ptr[142] = tex_ptr[26];
    case 72: 
      buf_ptr[144] = tex_ptr[26];
    case 73: 
      buf_ptr[146] = tex_ptr[26];
    case 74: 
      buf_ptr[148] = tex_ptr[27];
    case 75: 
      buf_ptr[150] = tex_ptr[27];
    case 76: 
      buf_ptr[152] = tex_ptr[27];
    case 77: 
      buf_ptr[154] = tex_ptr[28];
    case 78: 
      buf_ptr[156] = tex_ptr[28];
    case 79: 
      buf_ptr[158] = tex_ptr[29];
    case 80: 
      buf_ptr[160] = tex_ptr[29];
    case 81: 
      buf_ptr[162] = tex_ptr[29];
    case 82: 
      buf_ptr[164] = tex_ptr[30];
    case 83: 
      buf_ptr[166] = tex_ptr[30];
    case 84: 
      buf_ptr[168] = tex_ptr[30];
    case 85: 
      buf_ptr[170] = tex_ptr[31];
    case 86: 
      buf_ptr[172] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_88_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*11)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[4];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[6];
    case 18: 
      buf_ptr[36] = tex_ptr[6];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[7];
    case 21: 
      buf_ptr[42] = tex_ptr[7];
    case 22: 
      buf_ptr[44] = tex_ptr[7];
    case 23: 
      buf_ptr[46] = tex_ptr[8];
    case 24: 
      buf_ptr[48] = tex_ptr[8];
    case 25: 
      buf_ptr[50] = tex_ptr[9];
    case 26: 
      buf_ptr[52] = tex_ptr[9];
    case 27: 
      buf_ptr[54] = tex_ptr[9];
    case 28: 
      buf_ptr[56] = tex_ptr[10];
    case 29: 
      buf_ptr[58] = tex_ptr[10];
    case 30: 
      buf_ptr[60] = tex_ptr[10];
    case 31: 
      buf_ptr[62] = tex_ptr[11];
    case 32: 
      buf_ptr[64] = tex_ptr[11];
    case 33: 
      buf_ptr[66] = tex_ptr[11];
    case 34: 
      buf_ptr[68] = tex_ptr[12];
    case 35: 
      buf_ptr[70] = tex_ptr[12];
    case 36: 
      buf_ptr[72] = tex_ptr[13];
    case 37: 
      buf_ptr[74] = tex_ptr[13];
    case 38: 
      buf_ptr[76] = tex_ptr[13];
    case 39: 
      buf_ptr[78] = tex_ptr[14];
    case 40: 
      buf_ptr[80] = tex_ptr[14];
    case 41: 
      buf_ptr[82] = tex_ptr[14];
    case 42: 
      buf_ptr[84] = tex_ptr[15];
    case 43: 
      buf_ptr[86] = tex_ptr[15];
    case 44: 
      buf_ptr[88] = tex_ptr[15];
    case 45: 
      buf_ptr[90] = tex_ptr[16];
    case 46: 
      buf_ptr[92] = tex_ptr[16];
    case 47: 
      buf_ptr[94] = tex_ptr[17];
    case 48: 
      buf_ptr[96] = tex_ptr[17];
    case 49: 
      buf_ptr[98] = tex_ptr[17];
    case 50: 
      buf_ptr[100] = tex_ptr[18];
    case 51: 
      buf_ptr[102] = tex_ptr[18];
    case 52: 
      buf_ptr[104] = tex_ptr[18];
    case 53: 
      buf_ptr[106] = tex_ptr[19];
    case 54: 
      buf_ptr[108] = tex_ptr[19];
    case 55: 
      buf_ptr[110] = tex_ptr[19];
    case 56: 
      buf_ptr[112] = tex_ptr[20];
    case 57: 
      buf_ptr[114] = tex_ptr[20];
    case 58: 
      buf_ptr[116] = tex_ptr[21];
    case 59: 
      buf_ptr[118] = tex_ptr[21];
    case 60: 
      buf_ptr[120] = tex_ptr[21];
    case 61: 
      buf_ptr[122] = tex_ptr[22];
    case 62: 
      buf_ptr[124] = tex_ptr[22];
    case 63: 
      buf_ptr[126] = tex_ptr[22];
    case 64: 
      buf_ptr[128] = tex_ptr[23];
    case 65: 
      buf_ptr[130] = tex_ptr[23];
    case 66: 
      buf_ptr[132] = tex_ptr[23];
    case 67: 
      buf_ptr[134] = tex_ptr[24];
    case 68: 
      buf_ptr[136] = tex_ptr[24];
    case 69: 
      buf_ptr[138] = tex_ptr[25];
    case 70: 
      buf_ptr[140] = tex_ptr[25];
    case 71: 
      buf_ptr[142] = tex_ptr[25];
    case 72: 
      buf_ptr[144] = tex_ptr[26];
    case 73: 
      buf_ptr[146] = tex_ptr[26];
    case 74: 
      buf_ptr[148] = tex_ptr[26];
    case 75: 
      buf_ptr[150] = tex_ptr[27];
    case 76: 
      buf_ptr[152] = tex_ptr[27];
    case 77: 
      buf_ptr[154] = tex_ptr[27];
    case 78: 
      buf_ptr[156] = tex_ptr[28];
    case 79: 
      buf_ptr[158] = tex_ptr[28];
    case 80: 
      buf_ptr[160] = tex_ptr[29];
    case 81: 
      buf_ptr[162] = tex_ptr[29];
    case 82: 
      buf_ptr[164] = tex_ptr[29];
    case 83: 
      buf_ptr[166] = tex_ptr[30];
    case 84: 
      buf_ptr[168] = tex_ptr[30];
    case 85: 
      buf_ptr[170] = tex_ptr[30];
    case 86: 
      buf_ptr[172] = tex_ptr[31];
    case 87: 
      buf_ptr[174] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_89_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*11)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[3];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[5];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[6];
    case 18: 
      buf_ptr[36] = tex_ptr[6];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[7];
    case 21: 
      buf_ptr[42] = tex_ptr[7];
    case 22: 
      buf_ptr[44] = tex_ptr[7];
    case 23: 
      buf_ptr[46] = tex_ptr[8];
    case 24: 
      buf_ptr[48] = tex_ptr[8];
    case 25: 
      buf_ptr[50] = tex_ptr[8];
    case 26: 
      buf_ptr[52] = tex_ptr[9];
    case 27: 
      buf_ptr[54] = tex_ptr[9];
    case 28: 
      buf_ptr[56] = tex_ptr[10];
    case 29: 
      buf_ptr[58] = tex_ptr[10];
    case 30: 
      buf_ptr[60] = tex_ptr[10];
    case 31: 
      buf_ptr[62] = tex_ptr[11];
    case 32: 
      buf_ptr[64] = tex_ptr[11];
    case 33: 
      buf_ptr[66] = tex_ptr[11];
    case 34: 
      buf_ptr[68] = tex_ptr[12];
    case 35: 
      buf_ptr[70] = tex_ptr[12];
    case 36: 
      buf_ptr[72] = tex_ptr[12];
    case 37: 
      buf_ptr[74] = tex_ptr[13];
    case 38: 
      buf_ptr[76] = tex_ptr[13];
    case 39: 
      buf_ptr[78] = tex_ptr[14];
    case 40: 
      buf_ptr[80] = tex_ptr[14];
    case 41: 
      buf_ptr[82] = tex_ptr[14];
    case 42: 
      buf_ptr[84] = tex_ptr[15];
    case 43: 
      buf_ptr[86] = tex_ptr[15];
    case 44: 
      buf_ptr[88] = tex_ptr[15];
    case 45: 
      buf_ptr[90] = tex_ptr[16];
    case 46: 
      buf_ptr[92] = tex_ptr[16];
    case 47: 
      buf_ptr[94] = tex_ptr[16];
    case 48: 
      buf_ptr[96] = tex_ptr[17];
    case 49: 
      buf_ptr[98] = tex_ptr[17];
    case 50: 
      buf_ptr[100] = tex_ptr[17];
    case 51: 
      buf_ptr[102] = tex_ptr[18];
    case 52: 
      buf_ptr[104] = tex_ptr[18];
    case 53: 
      buf_ptr[106] = tex_ptr[19];
    case 54: 
      buf_ptr[108] = tex_ptr[19];
    case 55: 
      buf_ptr[110] = tex_ptr[19];
    case 56: 
      buf_ptr[112] = tex_ptr[20];
    case 57: 
      buf_ptr[114] = tex_ptr[20];
    case 58: 
      buf_ptr[116] = tex_ptr[20];
    case 59: 
      buf_ptr[118] = tex_ptr[21];
    case 60: 
      buf_ptr[120] = tex_ptr[21];
    case 61: 
      buf_ptr[122] = tex_ptr[21];
    case 62: 
      buf_ptr[124] = tex_ptr[22];
    case 63: 
      buf_ptr[126] = tex_ptr[22];
    case 64: 
      buf_ptr[128] = tex_ptr[23];
    case 65: 
      buf_ptr[130] = tex_ptr[23];
    case 66: 
      buf_ptr[132] = tex_ptr[23];
    case 67: 
      buf_ptr[134] = tex_ptr[24];
    case 68: 
      buf_ptr[136] = tex_ptr[24];
    case 69: 
      buf_ptr[138] = tex_ptr[24];
    case 70: 
      buf_ptr[140] = tex_ptr[25];
    case 71: 
      buf_ptr[142] = tex_ptr[25];
    case 72: 
      buf_ptr[144] = tex_ptr[25];
    case 73: 
      buf_ptr[146] = tex_ptr[26];
    case 74: 
      buf_ptr[148] = tex_ptr[26];
    case 75: 
      buf_ptr[150] = tex_ptr[26];
    case 76: 
      buf_ptr[152] = tex_ptr[27];
    case 77: 
      buf_ptr[154] = tex_ptr[27];
    case 78: 
      buf_ptr[156] = tex_ptr[28];
    case 79: 
      buf_ptr[158] = tex_ptr[28];
    case 80: 
      buf_ptr[160] = tex_ptr[28];
    case 81: 
      buf_ptr[162] = tex_ptr[29];
    case 82: 
      buf_ptr[164] = tex_ptr[29];
    case 83: 
      buf_ptr[166] = tex_ptr[29];
    case 84: 
      buf_ptr[168] = tex_ptr[30];
    case 85: 
      buf_ptr[170] = tex_ptr[30];
    case 86: 
      buf_ptr[172] = tex_ptr[30];
    case 87: 
      buf_ptr[174] = tex_ptr[31];
    case 88: 
      buf_ptr[176] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_90_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*11)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[3];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[4];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[6];
    case 18: 
      buf_ptr[36] = tex_ptr[6];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[7];
    case 21: 
      buf_ptr[42] = tex_ptr[7];
    case 22: 
      buf_ptr[44] = tex_ptr[7];
    case 23: 
      buf_ptr[46] = tex_ptr[8];
    case 24: 
      buf_ptr[48] = tex_ptr[8];
    case 25: 
      buf_ptr[50] = tex_ptr[8];
    case 26: 
      buf_ptr[52] = tex_ptr[9];
    case 27: 
      buf_ptr[54] = tex_ptr[9];
    case 28: 
      buf_ptr[56] = tex_ptr[9];
    case 29: 
      buf_ptr[58] = tex_ptr[10];
    case 30: 
      buf_ptr[60] = tex_ptr[10];
    case 31: 
      buf_ptr[62] = tex_ptr[11];
    case 32: 
      buf_ptr[64] = tex_ptr[11];
    case 33: 
      buf_ptr[66] = tex_ptr[11];
    case 34: 
      buf_ptr[68] = tex_ptr[12];
    case 35: 
      buf_ptr[70] = tex_ptr[12];
    case 36: 
      buf_ptr[72] = tex_ptr[12];
    case 37: 
      buf_ptr[74] = tex_ptr[13];
    case 38: 
      buf_ptr[76] = tex_ptr[13];
    case 39: 
      buf_ptr[78] = tex_ptr[13];
    case 40: 
      buf_ptr[80] = tex_ptr[14];
    case 41: 
      buf_ptr[82] = tex_ptr[14];
    case 42: 
      buf_ptr[84] = tex_ptr[14];
    case 43: 
      buf_ptr[86] = tex_ptr[15];
    case 44: 
      buf_ptr[88] = tex_ptr[15];
    case 45: 
      buf_ptr[90] = tex_ptr[16];
    case 46: 
      buf_ptr[92] = tex_ptr[16];
    case 47: 
      buf_ptr[94] = tex_ptr[16];
    case 48: 
      buf_ptr[96] = tex_ptr[17];
    case 49: 
      buf_ptr[98] = tex_ptr[17];
    case 50: 
      buf_ptr[100] = tex_ptr[17];
    case 51: 
      buf_ptr[102] = tex_ptr[18];
    case 52: 
      buf_ptr[104] = tex_ptr[18];
    case 53: 
      buf_ptr[106] = tex_ptr[18];
    case 54: 
      buf_ptr[108] = tex_ptr[19];
    case 55: 
      buf_ptr[110] = tex_ptr[19];
    case 56: 
      buf_ptr[112] = tex_ptr[19];
    case 57: 
      buf_ptr[114] = tex_ptr[20];
    case 58: 
      buf_ptr[116] = tex_ptr[20];
    case 59: 
      buf_ptr[118] = tex_ptr[20];
    case 60: 
      buf_ptr[120] = tex_ptr[21];
    case 61: 
      buf_ptr[122] = tex_ptr[21];
    case 62: 
      buf_ptr[124] = tex_ptr[22];
    case 63: 
      buf_ptr[126] = tex_ptr[22];
    case 64: 
      buf_ptr[128] = tex_ptr[22];
    case 65: 
      buf_ptr[130] = tex_ptr[23];
    case 66: 
      buf_ptr[132] = tex_ptr[23];
    case 67: 
      buf_ptr[134] = tex_ptr[23];
    case 68: 
      buf_ptr[136] = tex_ptr[24];
    case 69: 
      buf_ptr[138] = tex_ptr[24];
    case 70: 
      buf_ptr[140] = tex_ptr[24];
    case 71: 
      buf_ptr[142] = tex_ptr[25];
    case 72: 
      buf_ptr[144] = tex_ptr[25];
    case 73: 
      buf_ptr[146] = tex_ptr[25];
    case 74: 
      buf_ptr[148] = tex_ptr[26];
    case 75: 
      buf_ptr[150] = tex_ptr[26];
    case 76: 
      buf_ptr[152] = tex_ptr[27];
    case 77: 
      buf_ptr[154] = tex_ptr[27];
    case 78: 
      buf_ptr[156] = tex_ptr[27];
    case 79: 
      buf_ptr[158] = tex_ptr[28];
    case 80: 
      buf_ptr[160] = tex_ptr[28];
    case 81: 
      buf_ptr[162] = tex_ptr[28];
    case 82: 
      buf_ptr[164] = tex_ptr[29];
    case 83: 
      buf_ptr[166] = tex_ptr[29];
    case 84: 
      buf_ptr[168] = tex_ptr[29];
    case 85: 
      buf_ptr[170] = tex_ptr[30];
    case 86: 
      buf_ptr[172] = tex_ptr[30];
    case 87: 
      buf_ptr[174] = tex_ptr[30];
    case 88: 
      buf_ptr[176] = tex_ptr[31];
    case 89: 
      buf_ptr[178] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_91_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*11)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[3];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[4];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[5];
    case 18: 
      buf_ptr[36] = tex_ptr[6];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[7];
    case 21: 
      buf_ptr[42] = tex_ptr[7];
    case 22: 
      buf_ptr[44] = tex_ptr[7];
    case 23: 
      buf_ptr[46] = tex_ptr[8];
    case 24: 
      buf_ptr[48] = tex_ptr[8];
    case 25: 
      buf_ptr[50] = tex_ptr[8];
    case 26: 
      buf_ptr[52] = tex_ptr[9];
    case 27: 
      buf_ptr[54] = tex_ptr[9];
    case 28: 
      buf_ptr[56] = tex_ptr[9];
    case 29: 
      buf_ptr[58] = tex_ptr[10];
    case 30: 
      buf_ptr[60] = tex_ptr[10];
    case 31: 
      buf_ptr[62] = tex_ptr[10];
    case 32: 
      buf_ptr[64] = tex_ptr[11];
    case 33: 
      buf_ptr[66] = tex_ptr[11];
    case 34: 
      buf_ptr[68] = tex_ptr[11];
    case 35: 
      buf_ptr[70] = tex_ptr[12];
    case 36: 
      buf_ptr[72] = tex_ptr[12];
    case 37: 
      buf_ptr[74] = tex_ptr[13];
    case 38: 
      buf_ptr[76] = tex_ptr[13];
    case 39: 
      buf_ptr[78] = tex_ptr[13];
    case 40: 
      buf_ptr[80] = tex_ptr[14];
    case 41: 
      buf_ptr[82] = tex_ptr[14];
    case 42: 
      buf_ptr[84] = tex_ptr[14];
    case 43: 
      buf_ptr[86] = tex_ptr[15];
    case 44: 
      buf_ptr[88] = tex_ptr[15];
    case 45: 
      buf_ptr[90] = tex_ptr[15];
    case 46: 
      buf_ptr[92] = tex_ptr[16];
    case 47: 
      buf_ptr[94] = tex_ptr[16];
    case 48: 
      buf_ptr[96] = tex_ptr[16];
    case 49: 
      buf_ptr[98] = tex_ptr[17];
    case 50: 
      buf_ptr[100] = tex_ptr[17];
    case 51: 
      buf_ptr[102] = tex_ptr[17];
    case 52: 
      buf_ptr[104] = tex_ptr[18];
    case 53: 
      buf_ptr[106] = tex_ptr[18];
    case 54: 
      buf_ptr[108] = tex_ptr[18];
    case 55: 
      buf_ptr[110] = tex_ptr[19];
    case 56: 
      buf_ptr[112] = tex_ptr[19];
    case 57: 
      buf_ptr[114] = tex_ptr[20];
    case 58: 
      buf_ptr[116] = tex_ptr[20];
    case 59: 
      buf_ptr[118] = tex_ptr[20];
    case 60: 
      buf_ptr[120] = tex_ptr[21];
    case 61: 
      buf_ptr[122] = tex_ptr[21];
    case 62: 
      buf_ptr[124] = tex_ptr[21];
    case 63: 
      buf_ptr[126] = tex_ptr[22];
    case 64: 
      buf_ptr[128] = tex_ptr[22];
    case 65: 
      buf_ptr[130] = tex_ptr[22];
    case 66: 
      buf_ptr[132] = tex_ptr[23];
    case 67: 
      buf_ptr[134] = tex_ptr[23];
    case 68: 
      buf_ptr[136] = tex_ptr[23];
    case 69: 
      buf_ptr[138] = tex_ptr[24];
    case 70: 
      buf_ptr[140] = tex_ptr[24];
    case 71: 
      buf_ptr[142] = tex_ptr[24];
    case 72: 
      buf_ptr[144] = tex_ptr[25];
    case 73: 
      buf_ptr[146] = tex_ptr[25];
    case 74: 
      buf_ptr[148] = tex_ptr[26];
    case 75: 
      buf_ptr[150] = tex_ptr[26];
    case 76: 
      buf_ptr[152] = tex_ptr[26];
    case 77: 
      buf_ptr[154] = tex_ptr[27];
    case 78: 
      buf_ptr[156] = tex_ptr[27];
    case 79: 
      buf_ptr[158] = tex_ptr[27];
    case 80: 
      buf_ptr[160] = tex_ptr[28];
    case 81: 
      buf_ptr[162] = tex_ptr[28];
    case 82: 
      buf_ptr[164] = tex_ptr[28];
    case 83: 
      buf_ptr[166] = tex_ptr[29];
    case 84: 
      buf_ptr[168] = tex_ptr[29];
    case 85: 
      buf_ptr[170] = tex_ptr[29];
    case 86: 
      buf_ptr[172] = tex_ptr[30];
    case 87: 
      buf_ptr[174] = tex_ptr[30];
    case 88: 
      buf_ptr[176] = tex_ptr[30];
    case 89: 
      buf_ptr[178] = tex_ptr[31];
    case 90: 
      buf_ptr[180] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_92_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*11)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[3];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[4];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[5];
    case 18: 
      buf_ptr[36] = tex_ptr[6];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[6];
    case 21: 
      buf_ptr[42] = tex_ptr[7];
    case 22: 
      buf_ptr[44] = tex_ptr[7];
    case 23: 
      buf_ptr[46] = tex_ptr[7];
    case 24: 
      buf_ptr[48] = tex_ptr[8];
    case 25: 
      buf_ptr[50] = tex_ptr[8];
    case 26: 
      buf_ptr[52] = tex_ptr[9];
    case 27: 
      buf_ptr[54] = tex_ptr[9];
    case 28: 
      buf_ptr[56] = tex_ptr[9];
    case 29: 
      buf_ptr[58] = tex_ptr[10];
    case 30: 
      buf_ptr[60] = tex_ptr[10];
    case 31: 
      buf_ptr[62] = tex_ptr[10];
    case 32: 
      buf_ptr[64] = tex_ptr[11];
    case 33: 
      buf_ptr[66] = tex_ptr[11];
    case 34: 
      buf_ptr[68] = tex_ptr[11];
    case 35: 
      buf_ptr[70] = tex_ptr[12];
    case 36: 
      buf_ptr[72] = tex_ptr[12];
    case 37: 
      buf_ptr[74] = tex_ptr[12];
    case 38: 
      buf_ptr[76] = tex_ptr[13];
    case 39: 
      buf_ptr[78] = tex_ptr[13];
    case 40: 
      buf_ptr[80] = tex_ptr[13];
    case 41: 
      buf_ptr[82] = tex_ptr[14];
    case 42: 
      buf_ptr[84] = tex_ptr[14];
    case 43: 
      buf_ptr[86] = tex_ptr[14];
    case 44: 
      buf_ptr[88] = tex_ptr[15];
    case 45: 
      buf_ptr[90] = tex_ptr[15];
    case 46: 
      buf_ptr[92] = tex_ptr[15];
    case 47: 
      buf_ptr[94] = tex_ptr[16];
    case 48: 
      buf_ptr[96] = tex_ptr[16];
    case 49: 
      buf_ptr[98] = tex_ptr[17];
    case 50: 
      buf_ptr[100] = tex_ptr[17];
    case 51: 
      buf_ptr[102] = tex_ptr[17];
    case 52: 
      buf_ptr[104] = tex_ptr[18];
    case 53: 
      buf_ptr[106] = tex_ptr[18];
    case 54: 
      buf_ptr[108] = tex_ptr[18];
    case 55: 
      buf_ptr[110] = tex_ptr[19];
    case 56: 
      buf_ptr[112] = tex_ptr[19];
    case 57: 
      buf_ptr[114] = tex_ptr[19];
    case 58: 
      buf_ptr[116] = tex_ptr[20];
    case 59: 
      buf_ptr[118] = tex_ptr[20];
    case 60: 
      buf_ptr[120] = tex_ptr[20];
    case 61: 
      buf_ptr[122] = tex_ptr[21];
    case 62: 
      buf_ptr[124] = tex_ptr[21];
    case 63: 
      buf_ptr[126] = tex_ptr[21];
    case 64: 
      buf_ptr[128] = tex_ptr[22];
    case 65: 
      buf_ptr[130] = tex_ptr[22];
    case 66: 
      buf_ptr[132] = tex_ptr[22];
    case 67: 
      buf_ptr[134] = tex_ptr[23];
    case 68: 
      buf_ptr[136] = tex_ptr[23];
    case 69: 
      buf_ptr[138] = tex_ptr[24];
    case 70: 
      buf_ptr[140] = tex_ptr[24];
    case 71: 
      buf_ptr[142] = tex_ptr[24];
    case 72: 
      buf_ptr[144] = tex_ptr[25];
    case 73: 
      buf_ptr[146] = tex_ptr[25];
    case 74: 
      buf_ptr[148] = tex_ptr[25];
    case 75: 
      buf_ptr[150] = tex_ptr[26];
    case 76: 
      buf_ptr[152] = tex_ptr[26];
    case 77: 
      buf_ptr[154] = tex_ptr[26];
    case 78: 
      buf_ptr[156] = tex_ptr[27];
    case 79: 
      buf_ptr[158] = tex_ptr[27];
    case 80: 
      buf_ptr[160] = tex_ptr[27];
    case 81: 
      buf_ptr[162] = tex_ptr[28];
    case 82: 
      buf_ptr[164] = tex_ptr[28];
    case 83: 
      buf_ptr[166] = tex_ptr[28];
    case 84: 
      buf_ptr[168] = tex_ptr[29];
    case 85: 
      buf_ptr[170] = tex_ptr[29];
    case 86: 
      buf_ptr[172] = tex_ptr[29];
    case 87: 
      buf_ptr[174] = tex_ptr[30];
    case 88: 
      buf_ptr[176] = tex_ptr[30];
    case 89: 
      buf_ptr[178] = tex_ptr[30];
    case 90: 
      buf_ptr[180] = tex_ptr[31];
    case 91: 
      buf_ptr[182] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_93_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*11)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[3];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[4];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[5];
    case 18: 
      buf_ptr[36] = tex_ptr[6];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[6];
    case 21: 
      buf_ptr[42] = tex_ptr[7];
    case 22: 
      buf_ptr[44] = tex_ptr[7];
    case 23: 
      buf_ptr[46] = tex_ptr[7];
    case 24: 
      buf_ptr[48] = tex_ptr[8];
    case 25: 
      buf_ptr[50] = tex_ptr[8];
    case 26: 
      buf_ptr[52] = tex_ptr[8];
    case 27: 
      buf_ptr[54] = tex_ptr[9];
    case 28: 
      buf_ptr[56] = tex_ptr[9];
    case 29: 
      buf_ptr[58] = tex_ptr[9];
    case 30: 
      buf_ptr[60] = tex_ptr[10];
    case 31: 
      buf_ptr[62] = tex_ptr[10];
    case 32: 
      buf_ptr[64] = tex_ptr[11];
    case 33: 
      buf_ptr[66] = tex_ptr[11];
    case 34: 
      buf_ptr[68] = tex_ptr[11];
    case 35: 
      buf_ptr[70] = tex_ptr[12];
    case 36: 
      buf_ptr[72] = tex_ptr[12];
    case 37: 
      buf_ptr[74] = tex_ptr[12];
    case 38: 
      buf_ptr[76] = tex_ptr[13];
    case 39: 
      buf_ptr[78] = tex_ptr[13];
    case 40: 
      buf_ptr[80] = tex_ptr[13];
    case 41: 
      buf_ptr[82] = tex_ptr[14];
    case 42: 
      buf_ptr[84] = tex_ptr[14];
    case 43: 
      buf_ptr[86] = tex_ptr[14];
    case 44: 
      buf_ptr[88] = tex_ptr[15];
    case 45: 
      buf_ptr[90] = tex_ptr[15];
    case 46: 
      buf_ptr[92] = tex_ptr[15];
    case 47: 
      buf_ptr[94] = tex_ptr[16];
    case 48: 
      buf_ptr[96] = tex_ptr[16];
    case 49: 
      buf_ptr[98] = tex_ptr[16];
    case 50: 
      buf_ptr[100] = tex_ptr[17];
    case 51: 
      buf_ptr[102] = tex_ptr[17];
    case 52: 
      buf_ptr[104] = tex_ptr[17];
    case 53: 
      buf_ptr[106] = tex_ptr[18];
    case 54: 
      buf_ptr[108] = tex_ptr[18];
    case 55: 
      buf_ptr[110] = tex_ptr[18];
    case 56: 
      buf_ptr[112] = tex_ptr[19];
    case 57: 
      buf_ptr[114] = tex_ptr[19];
    case 58: 
      buf_ptr[116] = tex_ptr[19];
    case 59: 
      buf_ptr[118] = tex_ptr[20];
    case 60: 
      buf_ptr[120] = tex_ptr[20];
    case 61: 
      buf_ptr[122] = tex_ptr[20];
    case 62: 
      buf_ptr[124] = tex_ptr[21];
    case 63: 
      buf_ptr[126] = tex_ptr[21];
    case 64: 
      buf_ptr[128] = tex_ptr[22];
    case 65: 
      buf_ptr[130] = tex_ptr[22];
    case 66: 
      buf_ptr[132] = tex_ptr[22];
    case 67: 
      buf_ptr[134] = tex_ptr[23];
    case 68: 
      buf_ptr[136] = tex_ptr[23];
    case 69: 
      buf_ptr[138] = tex_ptr[23];
    case 70: 
      buf_ptr[140] = tex_ptr[24];
    case 71: 
      buf_ptr[142] = tex_ptr[24];
    case 72: 
      buf_ptr[144] = tex_ptr[24];
    case 73: 
      buf_ptr[146] = tex_ptr[25];
    case 74: 
      buf_ptr[148] = tex_ptr[25];
    case 75: 
      buf_ptr[150] = tex_ptr[25];
    case 76: 
      buf_ptr[152] = tex_ptr[26];
    case 77: 
      buf_ptr[154] = tex_ptr[26];
    case 78: 
      buf_ptr[156] = tex_ptr[26];
    case 79: 
      buf_ptr[158] = tex_ptr[27];
    case 80: 
      buf_ptr[160] = tex_ptr[27];
    case 81: 
      buf_ptr[162] = tex_ptr[27];
    case 82: 
      buf_ptr[164] = tex_ptr[28];
    case 83: 
      buf_ptr[166] = tex_ptr[28];
    case 84: 
      buf_ptr[168] = tex_ptr[28];
    case 85: 
      buf_ptr[170] = tex_ptr[29];
    case 86: 
      buf_ptr[172] = tex_ptr[29];
    case 87: 
      buf_ptr[174] = tex_ptr[29];
    case 88: 
      buf_ptr[176] = tex_ptr[30];
    case 89: 
      buf_ptr[178] = tex_ptr[30];
    case 90: 
      buf_ptr[180] = tex_ptr[30];
    case 91: 
      buf_ptr[182] = tex_ptr[31];
    case 92: 
      buf_ptr[184] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_94_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*10)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[3];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[4];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[5];
    case 18: 
      buf_ptr[36] = tex_ptr[6];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[6];
    case 21: 
      buf_ptr[42] = tex_ptr[7];
    case 22: 
      buf_ptr[44] = tex_ptr[7];
    case 23: 
      buf_ptr[46] = tex_ptr[7];
    case 24: 
      buf_ptr[48] = tex_ptr[8];
    case 25: 
      buf_ptr[50] = tex_ptr[8];
    case 26: 
      buf_ptr[52] = tex_ptr[8];
    case 27: 
      buf_ptr[54] = tex_ptr[9];
    case 28: 
      buf_ptr[56] = tex_ptr[9];
    case 29: 
      buf_ptr[58] = tex_ptr[9];
    case 30: 
      buf_ptr[60] = tex_ptr[10];
    case 31: 
      buf_ptr[62] = tex_ptr[10];
    case 32: 
      buf_ptr[64] = tex_ptr[10];
    case 33: 
      buf_ptr[66] = tex_ptr[11];
    case 34: 
      buf_ptr[68] = tex_ptr[11];
    case 35: 
      buf_ptr[70] = tex_ptr[11];
    case 36: 
      buf_ptr[72] = tex_ptr[12];
    case 37: 
      buf_ptr[74] = tex_ptr[12];
    case 38: 
      buf_ptr[76] = tex_ptr[12];
    case 39: 
      buf_ptr[78] = tex_ptr[13];
    case 40: 
      buf_ptr[80] = tex_ptr[13];
    case 41: 
      buf_ptr[82] = tex_ptr[13];
    case 42: 
      buf_ptr[84] = tex_ptr[14];
    case 43: 
      buf_ptr[86] = tex_ptr[14];
    case 44: 
      buf_ptr[88] = tex_ptr[14];
    case 45: 
      buf_ptr[90] = tex_ptr[15];
    case 46: 
      buf_ptr[92] = tex_ptr[15];
    case 47: 
      buf_ptr[94] = tex_ptr[16];
    case 48: 
      buf_ptr[96] = tex_ptr[16];
    case 49: 
      buf_ptr[98] = tex_ptr[16];
    case 50: 
      buf_ptr[100] = tex_ptr[17];
    case 51: 
      buf_ptr[102] = tex_ptr[17];
    case 52: 
      buf_ptr[104] = tex_ptr[17];
    case 53: 
      buf_ptr[106] = tex_ptr[18];
    case 54: 
      buf_ptr[108] = tex_ptr[18];
    case 55: 
      buf_ptr[110] = tex_ptr[18];
    case 56: 
      buf_ptr[112] = tex_ptr[19];
    case 57: 
      buf_ptr[114] = tex_ptr[19];
    case 58: 
      buf_ptr[116] = tex_ptr[19];
    case 59: 
      buf_ptr[118] = tex_ptr[20];
    case 60: 
      buf_ptr[120] = tex_ptr[20];
    case 61: 
      buf_ptr[122] = tex_ptr[20];
    case 62: 
      buf_ptr[124] = tex_ptr[21];
    case 63: 
      buf_ptr[126] = tex_ptr[21];
    case 64: 
      buf_ptr[128] = tex_ptr[21];
    case 65: 
      buf_ptr[130] = tex_ptr[22];
    case 66: 
      buf_ptr[132] = tex_ptr[22];
    case 67: 
      buf_ptr[134] = tex_ptr[22];
    case 68: 
      buf_ptr[136] = tex_ptr[23];
    case 69: 
      buf_ptr[138] = tex_ptr[23];
    case 70: 
      buf_ptr[140] = tex_ptr[23];
    case 71: 
      buf_ptr[142] = tex_ptr[24];
    case 72: 
      buf_ptr[144] = tex_ptr[24];
    case 73: 
      buf_ptr[146] = tex_ptr[24];
    case 74: 
      buf_ptr[148] = tex_ptr[25];
    case 75: 
      buf_ptr[150] = tex_ptr[25];
    case 76: 
      buf_ptr[152] = tex_ptr[25];
    case 77: 
      buf_ptr[154] = tex_ptr[26];
    case 78: 
      buf_ptr[156] = tex_ptr[26];
    case 79: 
      buf_ptr[158] = tex_ptr[26];
    case 80: 
      buf_ptr[160] = tex_ptr[27];
    case 81: 
      buf_ptr[162] = tex_ptr[27];
    case 82: 
      buf_ptr[164] = tex_ptr[27];
    case 83: 
      buf_ptr[166] = tex_ptr[28];
    case 84: 
      buf_ptr[168] = tex_ptr[28];
    case 85: 
      buf_ptr[170] = tex_ptr[28];
    case 86: 
      buf_ptr[172] = tex_ptr[29];
    case 87: 
      buf_ptr[174] = tex_ptr[29];
    case 88: 
      buf_ptr[176] = tex_ptr[29];
    case 89: 
      buf_ptr[178] = tex_ptr[30];
    case 90: 
      buf_ptr[180] = tex_ptr[30];
    case 91: 
      buf_ptr[182] = tex_ptr[30];
    case 92: 
      buf_ptr[184] = tex_ptr[31];
    case 93: 
      buf_ptr[186] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_95_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*10)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[2];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[3];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[4];
    case 15: 
      buf_ptr[30] = tex_ptr[5];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[5];
    case 18: 
      buf_ptr[36] = tex_ptr[6];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[6];
    case 21: 
      buf_ptr[42] = tex_ptr[7];
    case 22: 
      buf_ptr[44] = tex_ptr[7];
    case 23: 
      buf_ptr[46] = tex_ptr[7];
    case 24: 
      buf_ptr[48] = tex_ptr[8];
    case 25: 
      buf_ptr[50] = tex_ptr[8];
    case 26: 
      buf_ptr[52] = tex_ptr[8];
    case 27: 
      buf_ptr[54] = tex_ptr[9];
    case 28: 
      buf_ptr[56] = tex_ptr[9];
    case 29: 
      buf_ptr[58] = tex_ptr[9];
    case 30: 
      buf_ptr[60] = tex_ptr[10];
    case 31: 
      buf_ptr[62] = tex_ptr[10];
    case 32: 
      buf_ptr[64] = tex_ptr[10];
    case 33: 
      buf_ptr[66] = tex_ptr[11];
    case 34: 
      buf_ptr[68] = tex_ptr[11];
    case 35: 
      buf_ptr[70] = tex_ptr[11];
    case 36: 
      buf_ptr[72] = tex_ptr[12];
    case 37: 
      buf_ptr[74] = tex_ptr[12];
    case 38: 
      buf_ptr[76] = tex_ptr[12];
    case 39: 
      buf_ptr[78] = tex_ptr[13];
    case 40: 
      buf_ptr[80] = tex_ptr[13];
    case 41: 
      buf_ptr[82] = tex_ptr[13];
    case 42: 
      buf_ptr[84] = tex_ptr[14];
    case 43: 
      buf_ptr[86] = tex_ptr[14];
    case 44: 
      buf_ptr[88] = tex_ptr[14];
    case 45: 
      buf_ptr[90] = tex_ptr[15];
    case 46: 
      buf_ptr[92] = tex_ptr[15];
    case 47: 
      buf_ptr[94] = tex_ptr[15];
    case 48: 
      buf_ptr[96] = tex_ptr[16];
    case 49: 
      buf_ptr[98] = tex_ptr[16];
    case 50: 
      buf_ptr[100] = tex_ptr[16];
    case 51: 
      buf_ptr[102] = tex_ptr[17];
    case 52: 
      buf_ptr[104] = tex_ptr[17];
    case 53: 
      buf_ptr[106] = tex_ptr[17];
    case 54: 
      buf_ptr[108] = tex_ptr[18];
    case 55: 
      buf_ptr[110] = tex_ptr[18];
    case 56: 
      buf_ptr[112] = tex_ptr[18];
    case 57: 
      buf_ptr[114] = tex_ptr[19];
    case 58: 
      buf_ptr[116] = tex_ptr[19];
    case 59: 
      buf_ptr[118] = tex_ptr[19];
    case 60: 
      buf_ptr[120] = tex_ptr[20];
    case 61: 
      buf_ptr[122] = tex_ptr[20];
    case 62: 
      buf_ptr[124] = tex_ptr[20];
    case 63: 
      buf_ptr[126] = tex_ptr[21];
    case 64: 
      buf_ptr[128] = tex_ptr[21];
    case 65: 
      buf_ptr[130] = tex_ptr[21];
    case 66: 
      buf_ptr[132] = tex_ptr[22];
    case 67: 
      buf_ptr[134] = tex_ptr[22];
    case 68: 
      buf_ptr[136] = tex_ptr[22];
    case 69: 
      buf_ptr[138] = tex_ptr[23];
    case 70: 
      buf_ptr[140] = tex_ptr[23];
    case 71: 
      buf_ptr[142] = tex_ptr[23];
    case 72: 
      buf_ptr[144] = tex_ptr[24];
    case 73: 
      buf_ptr[146] = tex_ptr[24];
    case 74: 
      buf_ptr[148] = tex_ptr[24];
    case 75: 
      buf_ptr[150] = tex_ptr[25];
    case 76: 
      buf_ptr[152] = tex_ptr[25];
    case 77: 
      buf_ptr[154] = tex_ptr[25];
    case 78: 
      buf_ptr[156] = tex_ptr[26];
    case 79: 
      buf_ptr[158] = tex_ptr[26];
    case 80: 
      buf_ptr[160] = tex_ptr[26];
    case 81: 
      buf_ptr[162] = tex_ptr[27];
    case 82: 
      buf_ptr[164] = tex_ptr[27];
    case 83: 
      buf_ptr[166] = tex_ptr[27];
    case 84: 
      buf_ptr[168] = tex_ptr[28];
    case 85: 
      buf_ptr[170] = tex_ptr[28];
    case 86: 
      buf_ptr[172] = tex_ptr[28];
    case 87: 
      buf_ptr[174] = tex_ptr[29];
    case 88: 
      buf_ptr[176] = tex_ptr[29];
    case 89: 
      buf_ptr[178] = tex_ptr[29];
    case 90: 
      buf_ptr[180] = tex_ptr[30];
    case 91: 
      buf_ptr[182] = tex_ptr[30];
    case 92: 
      buf_ptr[184] = tex_ptr[30];
    case 93: 
      buf_ptr[186] = tex_ptr[31];
    case 94: 
      buf_ptr[188] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_96_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*10)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[1];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[1];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[3];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[3];
    case 12: 
      buf_ptr[24] = tex_ptr[4];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[4];
    case 15: 
      buf_ptr[30] = tex_ptr[4];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[5];
    case 18: 
      buf_ptr[36] = tex_ptr[5];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[6];
    case 21: 
      buf_ptr[42] = tex_ptr[6];
    case 22: 
      buf_ptr[44] = tex_ptr[7];
    case 23: 
      buf_ptr[46] = tex_ptr[7];
    case 24: 
      buf_ptr[48] = tex_ptr[7];
    case 25: 
      buf_ptr[50] = tex_ptr[8];
    case 26: 
      buf_ptr[52] = tex_ptr[8];
    case 27: 
      buf_ptr[54] = tex_ptr[8];
    case 28: 
      buf_ptr[56] = tex_ptr[9];
    case 29: 
      buf_ptr[58] = tex_ptr[9];
    case 30: 
      buf_ptr[60] = tex_ptr[10];
    case 31: 
      buf_ptr[62] = tex_ptr[10];
    case 32: 
      buf_ptr[64] = tex_ptr[10];
    case 33: 
      buf_ptr[66] = tex_ptr[11];
    case 34: 
      buf_ptr[68] = tex_ptr[11];
    case 35: 
      buf_ptr[70] = tex_ptr[11];
    case 36: 
      buf_ptr[72] = tex_ptr[12];
    case 37: 
      buf_ptr[74] = tex_ptr[12];
    case 38: 
      buf_ptr[76] = tex_ptr[12];
    case 39: 
      buf_ptr[78] = tex_ptr[13];
    case 40: 
      buf_ptr[80] = tex_ptr[13];
    case 41: 
      buf_ptr[82] = tex_ptr[13];
    case 42: 
      buf_ptr[84] = tex_ptr[14];
    case 43: 
      buf_ptr[86] = tex_ptr[14];
    case 44: 
      buf_ptr[88] = tex_ptr[14];
    case 45: 
      buf_ptr[90] = tex_ptr[15];
    case 46: 
      buf_ptr[92] = tex_ptr[15];
    case 47: 
      buf_ptr[94] = tex_ptr[15];
    case 48: 
      buf_ptr[96] = tex_ptr[16];
    case 49: 
      buf_ptr[98] = tex_ptr[16];
    case 50: 
      buf_ptr[100] = tex_ptr[16];
    case 51: 
      buf_ptr[102] = tex_ptr[17];
    case 52: 
      buf_ptr[104] = tex_ptr[17];
    case 53: 
      buf_ptr[106] = tex_ptr[17];
    case 54: 
      buf_ptr[108] = tex_ptr[18];
    case 55: 
      buf_ptr[110] = tex_ptr[18];
    case 56: 
      buf_ptr[112] = tex_ptr[18];
    case 57: 
      buf_ptr[114] = tex_ptr[19];
    case 58: 
      buf_ptr[116] = tex_ptr[19];
    case 59: 
      buf_ptr[118] = tex_ptr[19];
    case 60: 
      buf_ptr[120] = tex_ptr[19];
    case 61: 
      buf_ptr[122] = tex_ptr[20];
    case 62: 
      buf_ptr[124] = tex_ptr[20];
    case 63: 
      buf_ptr[126] = tex_ptr[20];
    case 64: 
      buf_ptr[128] = tex_ptr[21];
    case 65: 
      buf_ptr[130] = tex_ptr[21];
    case 66: 
      buf_ptr[132] = tex_ptr[21];
    case 67: 
      buf_ptr[134] = tex_ptr[22];
    case 68: 
      buf_ptr[136] = tex_ptr[22];
    case 69: 
      buf_ptr[138] = tex_ptr[22];
    case 70: 
      buf_ptr[140] = tex_ptr[23];
    case 71: 
      buf_ptr[142] = tex_ptr[23];
    case 72: 
      buf_ptr[144] = tex_ptr[23];
    case 73: 
      buf_ptr[146] = tex_ptr[24];
    case 74: 
      buf_ptr[148] = tex_ptr[24];
    case 75: 
      buf_ptr[150] = tex_ptr[24];
    case 76: 
      buf_ptr[152] = tex_ptr[25];
    case 77: 
      buf_ptr[154] = tex_ptr[25];
    case 78: 
      buf_ptr[156] = tex_ptr[25];
    case 79: 
      buf_ptr[158] = tex_ptr[26];
    case 80: 
      buf_ptr[160] = tex_ptr[26];
    case 81: 
      buf_ptr[162] = tex_ptr[26];
    case 82: 
      buf_ptr[164] = tex_ptr[27];
    case 83: 
      buf_ptr[166] = tex_ptr[27];
    case 84: 
      buf_ptr[168] = tex_ptr[27];
    case 85: 
      buf_ptr[170] = tex_ptr[28];
    case 86: 
      buf_ptr[172] = tex_ptr[28];
    case 87: 
      buf_ptr[174] = tex_ptr[28];
    case 88: 
      buf_ptr[176] = tex_ptr[29];
    case 89: 
      buf_ptr[178] = tex_ptr[29];
    case 90: 
      buf_ptr[180] = tex_ptr[29];
    case 91: 
      buf_ptr[182] = tex_ptr[30];
    case 92: 
      buf_ptr[184] = tex_ptr[30];
    case 93: 
      buf_ptr[186] = tex_ptr[30];
    case 94: 
      buf_ptr[188] = tex_ptr[31];
    case 95: 
      buf_ptr[190] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_97_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*10)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[0];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[1];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[2];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[3];
    case 12: 
      buf_ptr[24] = tex_ptr[3];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[4];
    case 15: 
      buf_ptr[30] = tex_ptr[4];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[5];
    case 18: 
      buf_ptr[36] = tex_ptr[5];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[6];
    case 21: 
      buf_ptr[42] = tex_ptr[6];
    case 22: 
      buf_ptr[44] = tex_ptr[7];
    case 23: 
      buf_ptr[46] = tex_ptr[7];
    case 24: 
      buf_ptr[48] = tex_ptr[7];
    case 25: 
      buf_ptr[50] = tex_ptr[8];
    case 26: 
      buf_ptr[52] = tex_ptr[8];
    case 27: 
      buf_ptr[54] = tex_ptr[8];
    case 28: 
      buf_ptr[56] = tex_ptr[9];
    case 29: 
      buf_ptr[58] = tex_ptr[9];
    case 30: 
      buf_ptr[60] = tex_ptr[9];
    case 31: 
      buf_ptr[62] = tex_ptr[10];
    case 32: 
      buf_ptr[64] = tex_ptr[10];
    case 33: 
      buf_ptr[66] = tex_ptr[10];
    case 34: 
      buf_ptr[68] = tex_ptr[11];
    case 35: 
      buf_ptr[70] = tex_ptr[11];
    case 36: 
      buf_ptr[72] = tex_ptr[11];
    case 37: 
      buf_ptr[74] = tex_ptr[12];
    case 38: 
      buf_ptr[76] = tex_ptr[12];
    case 39: 
      buf_ptr[78] = tex_ptr[12];
    case 40: 
      buf_ptr[80] = tex_ptr[13];
    case 41: 
      buf_ptr[82] = tex_ptr[13];
    case 42: 
      buf_ptr[84] = tex_ptr[13];
    case 43: 
      buf_ptr[86] = tex_ptr[14];
    case 44: 
      buf_ptr[88] = tex_ptr[14];
    case 45: 
      buf_ptr[90] = tex_ptr[14];
    case 46: 
      buf_ptr[92] = tex_ptr[15];
    case 47: 
      buf_ptr[94] = tex_ptr[15];
    case 48: 
      buf_ptr[96] = tex_ptr[15];
    case 49: 
      buf_ptr[98] = tex_ptr[16];
    case 50: 
      buf_ptr[100] = tex_ptr[16];
    case 51: 
      buf_ptr[102] = tex_ptr[16];
    case 52: 
      buf_ptr[104] = tex_ptr[17];
    case 53: 
      buf_ptr[106] = tex_ptr[17];
    case 54: 
      buf_ptr[108] = tex_ptr[17];
    case 55: 
      buf_ptr[110] = tex_ptr[18];
    case 56: 
      buf_ptr[112] = tex_ptr[18];
    case 57: 
      buf_ptr[114] = tex_ptr[18];
    case 58: 
      buf_ptr[116] = tex_ptr[19];
    case 59: 
      buf_ptr[118] = tex_ptr[19];
    case 60: 
      buf_ptr[120] = tex_ptr[19];
    case 61: 
      buf_ptr[122] = tex_ptr[20];
    case 62: 
      buf_ptr[124] = tex_ptr[20];
    case 63: 
      buf_ptr[126] = tex_ptr[20];
    case 64: 
      buf_ptr[128] = tex_ptr[21];
    case 65: 
      buf_ptr[130] = tex_ptr[21];
    case 66: 
      buf_ptr[132] = tex_ptr[21];
    case 67: 
      buf_ptr[134] = tex_ptr[22];
    case 68: 
      buf_ptr[136] = tex_ptr[22];
    case 69: 
      buf_ptr[138] = tex_ptr[22];
    case 70: 
      buf_ptr[140] = tex_ptr[23];
    case 71: 
      buf_ptr[142] = tex_ptr[23];
    case 72: 
      buf_ptr[144] = tex_ptr[23];
    case 73: 
      buf_ptr[146] = tex_ptr[24];
    case 74: 
      buf_ptr[148] = tex_ptr[24];
    case 75: 
      buf_ptr[150] = tex_ptr[24];
    case 76: 
      buf_ptr[152] = tex_ptr[25];
    case 77: 
      buf_ptr[154] = tex_ptr[25];
    case 78: 
      buf_ptr[156] = tex_ptr[25];
    case 79: 
      buf_ptr[158] = tex_ptr[26];
    case 80: 
      buf_ptr[160] = tex_ptr[26];
    case 81: 
      buf_ptr[162] = tex_ptr[26];
    case 82: 
      buf_ptr[164] = tex_ptr[27];
    case 83: 
      buf_ptr[166] = tex_ptr[27];
    case 84: 
      buf_ptr[168] = tex_ptr[27];
    case 85: 
      buf_ptr[170] = tex_ptr[28];
    case 86: 
      buf_ptr[172] = tex_ptr[28];
    case 87: 
      buf_ptr[174] = tex_ptr[28];
    case 88: 
      buf_ptr[176] = tex_ptr[29];
    case 89: 
      buf_ptr[178] = tex_ptr[29];
    case 90: 
      buf_ptr[180] = tex_ptr[29];
    case 91: 
      buf_ptr[182] = tex_ptr[30];
    case 92: 
      buf_ptr[184] = tex_ptr[30];
    case 93: 
      buf_ptr[186] = tex_ptr[30];
    case 94: 
      buf_ptr[188] = tex_ptr[31];
    case 95: 
      buf_ptr[190] = tex_ptr[31];
    case 96: 
      buf_ptr[192] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_98_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*10)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[0];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[1];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[2];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[3];
    case 12: 
      buf_ptr[24] = tex_ptr[3];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[4];
    case 15: 
      buf_ptr[30] = tex_ptr[4];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[5];
    case 18: 
      buf_ptr[36] = tex_ptr[5];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[6];
    case 21: 
      buf_ptr[42] = tex_ptr[6];
    case 22: 
      buf_ptr[44] = tex_ptr[7];
    case 23: 
      buf_ptr[46] = tex_ptr[7];
    case 24: 
      buf_ptr[48] = tex_ptr[7];
    case 25: 
      buf_ptr[50] = tex_ptr[8];
    case 26: 
      buf_ptr[52] = tex_ptr[8];
    case 27: 
      buf_ptr[54] = tex_ptr[8];
    case 28: 
      buf_ptr[56] = tex_ptr[9];
    case 29: 
      buf_ptr[58] = tex_ptr[9];
    case 30: 
      buf_ptr[60] = tex_ptr[9];
    case 31: 
      buf_ptr[62] = tex_ptr[10];
    case 32: 
      buf_ptr[64] = tex_ptr[10];
    case 33: 
      buf_ptr[66] = tex_ptr[10];
    case 34: 
      buf_ptr[68] = tex_ptr[11];
    case 35: 
      buf_ptr[70] = tex_ptr[11];
    case 36: 
      buf_ptr[72] = tex_ptr[11];
    case 37: 
      buf_ptr[74] = tex_ptr[12];
    case 38: 
      buf_ptr[76] = tex_ptr[12];
    case 39: 
      buf_ptr[78] = tex_ptr[12];
    case 40: 
      buf_ptr[80] = tex_ptr[13];
    case 41: 
      buf_ptr[82] = tex_ptr[13];
    case 42: 
      buf_ptr[84] = tex_ptr[13];
    case 43: 
      buf_ptr[86] = tex_ptr[14];
    case 44: 
      buf_ptr[88] = tex_ptr[14];
    case 45: 
      buf_ptr[90] = tex_ptr[14];
    case 46: 
      buf_ptr[92] = tex_ptr[15];
    case 47: 
      buf_ptr[94] = tex_ptr[15];
    case 48: 
      buf_ptr[96] = tex_ptr[15];
    case 49: 
      buf_ptr[98] = tex_ptr[16];
    case 50: 
      buf_ptr[100] = tex_ptr[16];
    case 51: 
      buf_ptr[102] = tex_ptr[16];
    case 52: 
      buf_ptr[104] = tex_ptr[16];
    case 53: 
      buf_ptr[106] = tex_ptr[17];
    case 54: 
      buf_ptr[108] = tex_ptr[17];
    case 55: 
      buf_ptr[110] = tex_ptr[17];
    case 56: 
      buf_ptr[112] = tex_ptr[18];
    case 57: 
      buf_ptr[114] = tex_ptr[18];
    case 58: 
      buf_ptr[116] = tex_ptr[18];
    case 59: 
      buf_ptr[118] = tex_ptr[19];
    case 60: 
      buf_ptr[120] = tex_ptr[19];
    case 61: 
      buf_ptr[122] = tex_ptr[19];
    case 62: 
      buf_ptr[124] = tex_ptr[20];
    case 63: 
      buf_ptr[126] = tex_ptr[20];
    case 64: 
      buf_ptr[128] = tex_ptr[20];
    case 65: 
      buf_ptr[130] = tex_ptr[21];
    case 66: 
      buf_ptr[132] = tex_ptr[21];
    case 67: 
      buf_ptr[134] = tex_ptr[21];
    case 68: 
      buf_ptr[136] = tex_ptr[22];
    case 69: 
      buf_ptr[138] = tex_ptr[22];
    case 70: 
      buf_ptr[140] = tex_ptr[22];
    case 71: 
      buf_ptr[142] = tex_ptr[23];
    case 72: 
      buf_ptr[144] = tex_ptr[23];
    case 73: 
      buf_ptr[146] = tex_ptr[23];
    case 74: 
      buf_ptr[148] = tex_ptr[24];
    case 75: 
      buf_ptr[150] = tex_ptr[24];
    case 76: 
      buf_ptr[152] = tex_ptr[24];
    case 77: 
      buf_ptr[154] = tex_ptr[25];
    case 78: 
      buf_ptr[156] = tex_ptr[25];
    case 79: 
      buf_ptr[158] = tex_ptr[25];
    case 80: 
      buf_ptr[160] = tex_ptr[26];
    case 81: 
      buf_ptr[162] = tex_ptr[26];
    case 82: 
      buf_ptr[164] = tex_ptr[26];
    case 83: 
      buf_ptr[166] = tex_ptr[27];
    case 84: 
      buf_ptr[168] = tex_ptr[27];
    case 85: 
      buf_ptr[170] = tex_ptr[27];
    case 86: 
      buf_ptr[172] = tex_ptr[28];
    case 87: 
      buf_ptr[174] = tex_ptr[28];
    case 88: 
      buf_ptr[176] = tex_ptr[28];
    case 89: 
      buf_ptr[178] = tex_ptr[29];
    case 90: 
      buf_ptr[180] = tex_ptr[29];
    case 91: 
      buf_ptr[182] = tex_ptr[29];
    case 92: 
      buf_ptr[184] = tex_ptr[30];
    case 93: 
      buf_ptr[186] = tex_ptr[30];
    case 94: 
      buf_ptr[188] = tex_ptr[30];
    case 95: 
      buf_ptr[190] = tex_ptr[31];
    case 96: 
      buf_ptr[192] = tex_ptr[31];
    case 97: 
      buf_ptr[194] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_99_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*10)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[0];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[1];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[2];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[3];
    case 12: 
      buf_ptr[24] = tex_ptr[3];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[4];
    case 15: 
      buf_ptr[30] = tex_ptr[4];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[5];
    case 18: 
      buf_ptr[36] = tex_ptr[5];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[6];
    case 21: 
      buf_ptr[42] = tex_ptr[6];
    case 22: 
      buf_ptr[44] = tex_ptr[7];
    case 23: 
      buf_ptr[46] = tex_ptr[7];
    case 24: 
      buf_ptr[48] = tex_ptr[7];
    case 25: 
      buf_ptr[50] = tex_ptr[8];
    case 26: 
      buf_ptr[52] = tex_ptr[8];
    case 27: 
      buf_ptr[54] = tex_ptr[8];
    case 28: 
      buf_ptr[56] = tex_ptr[9];
    case 29: 
      buf_ptr[58] = tex_ptr[9];
    case 30: 
      buf_ptr[60] = tex_ptr[9];
    case 31: 
      buf_ptr[62] = tex_ptr[10];
    case 32: 
      buf_ptr[64] = tex_ptr[10];
    case 33: 
      buf_ptr[66] = tex_ptr[10];
    case 34: 
      buf_ptr[68] = tex_ptr[10];
    case 35: 
      buf_ptr[70] = tex_ptr[11];
    case 36: 
      buf_ptr[72] = tex_ptr[11];
    case 37: 
      buf_ptr[74] = tex_ptr[11];
    case 38: 
      buf_ptr[76] = tex_ptr[12];
    case 39: 
      buf_ptr[78] = tex_ptr[12];
    case 40: 
      buf_ptr[80] = tex_ptr[12];
    case 41: 
      buf_ptr[82] = tex_ptr[13];
    case 42: 
      buf_ptr[84] = tex_ptr[13];
    case 43: 
      buf_ptr[86] = tex_ptr[13];
    case 44: 
      buf_ptr[88] = tex_ptr[14];
    case 45: 
      buf_ptr[90] = tex_ptr[14];
    case 46: 
      buf_ptr[92] = tex_ptr[14];
    case 47: 
      buf_ptr[94] = tex_ptr[15];
    case 48: 
      buf_ptr[96] = tex_ptr[15];
    case 49: 
      buf_ptr[98] = tex_ptr[15];
    case 50: 
      buf_ptr[100] = tex_ptr[16];
    case 51: 
      buf_ptr[102] = tex_ptr[16];
    case 52: 
      buf_ptr[104] = tex_ptr[16];
    case 53: 
      buf_ptr[106] = tex_ptr[17];
    case 54: 
      buf_ptr[108] = tex_ptr[17];
    case 55: 
      buf_ptr[110] = tex_ptr[17];
    case 56: 
      buf_ptr[112] = tex_ptr[18];
    case 57: 
      buf_ptr[114] = tex_ptr[18];
    case 58: 
      buf_ptr[116] = tex_ptr[18];
    case 59: 
      buf_ptr[118] = tex_ptr[19];
    case 60: 
      buf_ptr[120] = tex_ptr[19];
    case 61: 
      buf_ptr[122] = tex_ptr[19];
    case 62: 
      buf_ptr[124] = tex_ptr[20];
    case 63: 
      buf_ptr[126] = tex_ptr[20];
    case 64: 
      buf_ptr[128] = tex_ptr[20];
    case 65: 
      buf_ptr[130] = tex_ptr[21];
    case 66: 
      buf_ptr[132] = tex_ptr[21];
    case 67: 
      buf_ptr[134] = tex_ptr[21];
    case 68: 
      buf_ptr[136] = tex_ptr[21];
    case 69: 
      buf_ptr[138] = tex_ptr[22];
    case 70: 
      buf_ptr[140] = tex_ptr[22];
    case 71: 
      buf_ptr[142] = tex_ptr[22];
    case 72: 
      buf_ptr[144] = tex_ptr[23];
    case 73: 
      buf_ptr[146] = tex_ptr[23];
    case 74: 
      buf_ptr[148] = tex_ptr[23];
    case 75: 
      buf_ptr[150] = tex_ptr[24];
    case 76: 
      buf_ptr[152] = tex_ptr[24];
    case 77: 
      buf_ptr[154] = tex_ptr[24];
    case 78: 
      buf_ptr[156] = tex_ptr[25];
    case 79: 
      buf_ptr[158] = tex_ptr[25];
    case 80: 
      buf_ptr[160] = tex_ptr[25];
    case 81: 
      buf_ptr[162] = tex_ptr[26];
    case 82: 
      buf_ptr[164] = tex_ptr[26];
    case 83: 
      buf_ptr[166] = tex_ptr[26];
    case 84: 
      buf_ptr[168] = tex_ptr[27];
    case 85: 
      buf_ptr[170] = tex_ptr[27];
    case 86: 
      buf_ptr[172] = tex_ptr[27];
    case 87: 
      buf_ptr[174] = tex_ptr[28];
    case 88: 
      buf_ptr[176] = tex_ptr[28];
    case 89: 
      buf_ptr[178] = tex_ptr[28];
    case 90: 
      buf_ptr[180] = tex_ptr[29];
    case 91: 
      buf_ptr[182] = tex_ptr[29];
    case 92: 
      buf_ptr[184] = tex_ptr[29];
    case 93: 
      buf_ptr[186] = tex_ptr[30];
    case 94: 
      buf_ptr[188] = tex_ptr[30];
    case 95: 
      buf_ptr[190] = tex_ptr[30];
    case 96: 
      buf_ptr[192] = tex_ptr[31];
    case 97: 
      buf_ptr[194] = tex_ptr[31];
    case 98: 
      buf_ptr[196] = tex_ptr[31];
  };
  return;
}
void draw_32_tex_to_100_pixels(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) {
  if(skip_bot_pixels) {
    tex_ptr = tex_ptr - ((skip_bot_pixels*10)>>5);
  }
  switch(skip_top_pixels+skip_bot_pixels) {
    case 0: 
      buf_ptr[0] = tex_ptr[0];
    case 1: 
      buf_ptr[2] = tex_ptr[0];
    case 2: 
      buf_ptr[4] = tex_ptr[0];
    case 3: 
      buf_ptr[6] = tex_ptr[0];
    case 4: 
      buf_ptr[8] = tex_ptr[1];
    case 5: 
      buf_ptr[10] = tex_ptr[1];
    case 6: 
      buf_ptr[12] = tex_ptr[1];
    case 7: 
      buf_ptr[14] = tex_ptr[2];
    case 8: 
      buf_ptr[16] = tex_ptr[2];
    case 9: 
      buf_ptr[18] = tex_ptr[2];
    case 10: 
      buf_ptr[20] = tex_ptr[3];
    case 11: 
      buf_ptr[22] = tex_ptr[3];
    case 12: 
      buf_ptr[24] = tex_ptr[3];
    case 13: 
      buf_ptr[26] = tex_ptr[4];
    case 14: 
      buf_ptr[28] = tex_ptr[4];
    case 15: 
      buf_ptr[30] = tex_ptr[4];
    case 16: 
      buf_ptr[32] = tex_ptr[5];
    case 17: 
      buf_ptr[34] = tex_ptr[5];
    case 18: 
      buf_ptr[36] = tex_ptr[5];
    case 19: 
      buf_ptr[38] = tex_ptr[6];
    case 20: 
      buf_ptr[40] = tex_ptr[6];
    case 21: 
      buf_ptr[42] = tex_ptr[6];
    case 22: 
      buf_ptr[44] = tex_ptr[7];
    case 23: 
      buf_ptr[46] = tex_ptr[7];
    case 24: 
      buf_ptr[48] = tex_ptr[7];
    case 25: 
      buf_ptr[50] = tex_ptr[8];
    case 26: 
      buf_ptr[52] = tex_ptr[8];
    case 27: 
      buf_ptr[54] = tex_ptr[8];
    case 28: 
      buf_ptr[56] = tex_ptr[8];
    case 29: 
      buf_ptr[58] = tex_ptr[9];
    case 30: 
      buf_ptr[60] = tex_ptr[9];
    case 31: 
      buf_ptr[62] = tex_ptr[9];
    case 32: 
      buf_ptr[64] = tex_ptr[10];
    case 33: 
      buf_ptr[66] = tex_ptr[10];
    case 34: 
      buf_ptr[68] = tex_ptr[10];
    case 35: 
      buf_ptr[70] = tex_ptr[11];
    case 36: 
      buf_ptr[72] = tex_ptr[11];
    case 37: 
      buf_ptr[74] = tex_ptr[11];
    case 38: 
      buf_ptr[76] = tex_ptr[12];
    case 39: 
      buf_ptr[78] = tex_ptr[12];
    case 40: 
      buf_ptr[80] = tex_ptr[12];
    case 41: 
      buf_ptr[82] = tex_ptr[13];
    case 42: 
      buf_ptr[84] = tex_ptr[13];
    case 43: 
      buf_ptr[86] = tex_ptr[13];
    case 44: 
      buf_ptr[88] = tex_ptr[14];
    case 45: 
      buf_ptr[90] = tex_ptr[14];
    case 46: 
      buf_ptr[92] = tex_ptr[14];
    case 47: 
      buf_ptr[94] = tex_ptr[15];
    case 48: 
      buf_ptr[96] = tex_ptr[15];
    case 49: 
      buf_ptr[98] = tex_ptr[15];
    case 50: 
      buf_ptr[100] = tex_ptr[16];
    case 51: 
      buf_ptr[102] = tex_ptr[16];
    case 52: 
      buf_ptr[104] = tex_ptr[16];
    case 53: 
      buf_ptr[106] = tex_ptr[16];
    case 54: 
      buf_ptr[108] = tex_ptr[17];
    case 55: 
      buf_ptr[110] = tex_ptr[17];
    case 56: 
      buf_ptr[112] = tex_ptr[17];
    case 57: 
      buf_ptr[114] = tex_ptr[18];
    case 58: 
      buf_ptr[116] = tex_ptr[18];
    case 59: 
      buf_ptr[118] = tex_ptr[18];
    case 60: 
      buf_ptr[120] = tex_ptr[19];
    case 61: 
      buf_ptr[122] = tex_ptr[19];
    case 62: 
      buf_ptr[124] = tex_ptr[19];
    case 63: 
      buf_ptr[126] = tex_ptr[20];
    case 64: 
      buf_ptr[128] = tex_ptr[20];
    case 65: 
      buf_ptr[130] = tex_ptr[20];
    case 66: 
      buf_ptr[132] = tex_ptr[21];
    case 67: 
      buf_ptr[134] = tex_ptr[21];
    case 68: 
      buf_ptr[136] = tex_ptr[21];
    case 69: 
      buf_ptr[138] = tex_ptr[22];
    case 70: 
      buf_ptr[140] = tex_ptr[22];
    case 71: 
      buf_ptr[142] = tex_ptr[22];
    case 72: 
      buf_ptr[144] = tex_ptr[23];
    case 73: 
      buf_ptr[146] = tex_ptr[23];
    case 74: 
      buf_ptr[148] = tex_ptr[23];
    case 75: 
      buf_ptr[150] = tex_ptr[24];
    case 76: 
      buf_ptr[152] = tex_ptr[24];
    case 77: 
      buf_ptr[154] = tex_ptr[24];
    case 78: 
      buf_ptr[156] = tex_ptr[24];
    case 79: 
      buf_ptr[158] = tex_ptr[25];
    case 80: 
      buf_ptr[160] = tex_ptr[25];
    case 81: 
      buf_ptr[162] = tex_ptr[25];
    case 82: 
      buf_ptr[164] = tex_ptr[26];
    case 83: 
      buf_ptr[166] = tex_ptr[26];
    case 84: 
      buf_ptr[168] = tex_ptr[26];
    case 85: 
      buf_ptr[170] = tex_ptr[27];
    case 86: 
      buf_ptr[172] = tex_ptr[27];
    case 87: 
      buf_ptr[174] = tex_ptr[27];
    case 88: 
      buf_ptr[176] = tex_ptr[28];
    case 89: 
      buf_ptr[178] = tex_ptr[28];
    case 90: 
      buf_ptr[180] = tex_ptr[28];
    case 91: 
      buf_ptr[182] = tex_ptr[29];
    case 92: 
      buf_ptr[184] = tex_ptr[29];
    case 93: 
      buf_ptr[186] = tex_ptr[29];
    case 94: 
      buf_ptr[188] = tex_ptr[30];
    case 95: 
      buf_ptr[190] = tex_ptr[30];
    case 96: 
      buf_ptr[192] = tex_ptr[30];
    case 97: 
      buf_ptr[194] = tex_ptr[31];
    case 98: 
      buf_ptr[196] = tex_ptr[31];
    case 99: 
      buf_ptr[198] = tex_ptr[31];
  };
  return;
}
void (*jmp[101])(u8* buf_ptr, u8* tex_ptr, s16 skip_top_pixels, s16 skip_bot_pixels) = {
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
};
void vline_texture_c(u8* buf_ptr, u8* tex_ptr, s16 wall_height, s16 skip_top_pixels, s16 skip_bot_pixels) {
  int total_skip = skip_top_pixels + skip_bot_pixels;
  buf_ptr = buf_ptr - (total_skip*2);
  jmp[wall_height](buf_ptr, tex_ptr, skip_top_pixels, skip_bot_pixels);
}
