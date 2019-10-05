#include <genesis.h>

#include "player.h"
#include "common.h"

const player init_ply = {
    .where = {FIX16(7), FIX16(7), FIX16(1)},
    .velocity = {0,0,0},
    .angle = FIX16(45.0),
    .anglesin = 0,
    .anglecos = 0,
    .health = 100,
    .cur_sector = 0
};

player ply;