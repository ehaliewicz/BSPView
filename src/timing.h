#ifndef TIMING_H
#define TIMING_H

#include <genesis.h>

typedef enum {
    BSP_TRAVERSAL = 0,
    WALL_TRANSFORM = 1,
    WALL_CLIP = 2,
    WALL_INTERP = 3,
    WALL_FILL = 4,
    FLAT_FILL = 5,
    BLIT = 6
} timing_type;

#define NUM_TIMING_TYPES 7

void start_timer(timing_type type);
void end_timer(timing_type type);

void reset_timers();
u32 get_timer(timing_type type);

#endif