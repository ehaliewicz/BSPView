#include <genesis.h>

#include "player.h"
#include "common.h"

player ply = {
    .where = {FIX32(0.453), FIX32(2.061), EYE_HEIGHT},
    .velocity = {0,0,0},
    .angle = FIX16(48),
    .anglesin = 0,
    .anglecos = 0
};
