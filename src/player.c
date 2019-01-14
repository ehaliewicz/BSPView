#include <genesis.h>

#include "player.h"
#include "common.h"

player ply = {
    .where = {FIX32(-0.5), FIX32(3.593), EYE_HEIGHT},
    .velocity = {0,0,0},
    .angle = 0,
    .anglesin = 0,
    .anglecos = 0
};
