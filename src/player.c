#include <genesis.h>

#include "player.h"
#include "common.h"

const player init_ply = {
    .where = {FIX32(1.821), FIX32(1.570), BASE_EYE_HEIGHT},
    .velocity = {0,0,0},
    .angle = FIX16(77.0),
    .anglesin = 0,
    .anglecos = 0,
    .health = 100
};

player ply;