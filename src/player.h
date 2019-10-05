#ifndef PLAYER_H
#define PLAYER_H

#include <genesis.h>
#include "common.h"
#include "sector.h"

typedef struct {
    Vect3D_f16 where, velocity;
    fix16 angle;
    fix16 anglesin, anglecos;
    int cur_sector;
    s8 health;
} player;

extern player ply;
extern const player init_ply;


#endif