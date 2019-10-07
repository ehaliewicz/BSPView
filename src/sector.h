#ifndef SUBSECTOR_H
#define SUBSECTOR_H

#include <genesis.h>
#include "common.h"
#include "sector_effect_types.h"

// convex sector

typedef struct sector sector;

typedef struct {      
    u16 v1, v2;     // index of start and end vertices // 4 bytes vs 16 bytes
    //Vect2D_f32 v1;      // start vertex
    //Vect2D_f32 v2;      // end vertex
    u8 lower_color; // if this wall has an attached back sector, this will be used
    u8 middle_color; 
    u8 upper_color; // if this wall has an attached back sector, this will be used
    sector* back_sector; // NULL if no back sector
} wall;


struct sector  {
    fix32 floor_height;
    fix32 ceil_height;
    u8 floor_color;
    u8 ceil_color;
    u16 sectnum;
    s8 light_level;
    sector_effect_type sector_type;
    sector_effect_params sector_params;
    u16 num_walls;
    wall* walls[];
};

#endif