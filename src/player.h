#ifndef PLAYER_H
#define PLAYER_H

#include <genesis.h>
#include "common.h"
#include "sector.h"

typedef struct {
    Vect3D_f32 where, velocity;
    fix16 angle;
    fix32 anglesin, anglecos;
    s8 health;
    sector* cur_sector;
    subsector* cur_subsector;
} player;

extern player ply;
extern const player init_ply;


#endif