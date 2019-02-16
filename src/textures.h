#ifndef TEXTURE_H
#define TEXTURE_H

#include <genesis.h>

typedef struct {
    u16 size; // 64 or 128
    u8 data[64];
} texture;


texture brown_wall;
texture steel_wall;

#endif