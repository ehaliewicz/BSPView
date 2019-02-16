#include <genesis.h>
#include "timing.h"


u32 full_frame_times[NUM_TIMING_TYPES] = {0};

void start_timer(timing_type type) {
    #ifdef TIMING
    startTimer(type);
    #endif
}

void end_timer(timing_type type) {
    #ifdef TIMING
    u32 time = getTimer(type, 1);
    full_frame_times[type] += time;
    #endif
}


void reset_timers() {
    for(int i = 0; i < NUM_TIMING_TYPES; i++) {
        full_frame_times[i] = 0;
    }
}

u32 get_timer(timing_type type) {
    return full_frame_times[type];
}