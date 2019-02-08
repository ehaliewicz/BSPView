#ifndef SECTOR_EFFECT_TYPES_H
#define SECTOR_EFFECT_TYPES_H

typedef enum {
    SECTOR_UP_DOWN,
    CEILING_UP_DOWN,
    NO_EFFECT
} sector_effect_type;

typedef enum {
    GOING_UP,
    GOING_DOWN
} sector_effect_state;

typedef struct {
    fix32 max_floor_height;
    fix32 min_floor_height;
    u32 frame_delay_at_transition;
    sector_effect_state state;
} sector_up_down_params;

typedef struct {
    fix32 max_ceil_height;
    fix32 min_ceil_height;
    u32 frame_delay_at_transition;
    sector_effect_state state;
} ceiling_up_down_params;

typedef struct {
    union {
        sector_up_down_params sector_up_down;
        ceiling_up_down_params ceiling_up_down;
    };
    u32 delay_to;
} sector_effect_params;


#endif