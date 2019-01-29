#include <genesis.h>

#include "player.h"
#include "common.h"

player ply = {
    .where = {FIX32(1.840), FIX32(6.589), EYE_HEIGHT},
    .velocity = {0,0,0},
    .angle = FIX16(-48.0),
    .anglesin = 0,
    .anglecos = 0
};
