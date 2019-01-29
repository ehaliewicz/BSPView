#ifndef PLAYER_H
#define PLAYER_H

#include <genesis.h>
#include "common.h"
#include "sector.h"

typedef struct {
    Vect3D_f32 where, velocity;
    fix16 angle;
    fix32 anglesin, anglecos;
    sector* cur_sector;
} player;

extern player ply;


#endif