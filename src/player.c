#include <genesis.h>

#include "player.h"
#include "common.h"

player ply = {
    .where = {FIX32(1.558), FIX32(1.620), BASE_EYE_HEIGHT},
    .velocity = {0,0,0},
    .angle = FIX16(45.0),
    .anglesin = 0,
    .anglecos = 0
};
