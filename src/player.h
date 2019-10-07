#ifndef PLAYER_H
#define PLAYER_H

#include <genesis.h>
#include "common.h"
#include "sector.h"

typedef struct {
    Vect3D_f32 where, velocity;
    fix16 angle;
    fix32 anglesin, anglecos;
    fix32 bob_offset;
    fix32 sway_offset;
    sector* cur_sector;
    s8 health;
} player;

extern player ply;
extern const player init_ply;


#endif