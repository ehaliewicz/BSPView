#include <genesis.h>

#include "player.h"
#include "common.h"

const player init_ply = {
    .where = {FIX32(0.133), FIX32(2.596), FIX32(10)},
    .velocity = {0,0,0},
    .angle = FIX16(45.0),
    .anglesin = 0,
    .anglecos = 0,
    .health = 100
};

player ply;