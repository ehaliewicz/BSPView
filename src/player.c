#include <genesis.h>

#include "player.h"
#include "common.h"

const player init_ply = {
    .where = {FIX32(10.0), FIX32(18.0), FIX32(10)},
    .velocity = {0,0,0},
    .angle = FIX16(200.0),
    .anglesin = 0,
    .anglecos = 0,
    .health = 100
};

player ply;