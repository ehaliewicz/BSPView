#include <genesis.h>

#include "player.h"
#include "common.h"

const player init_ply = {
    .where = {FIX16(0.133), FIX16(2.596), FIX16(10)},
    .velocity = {0,0,0},
    .angle = FIX16(29.0),
    .anglesin = 0,
    .anglecos = 0,
    .health = 100
};

player ply;