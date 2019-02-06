#ifndef SUBSECTOR_H
#define SUBSECTOR_H

#include <genesis.h>
#include "common.h"


// convex sector

typedef struct sector sector;

typedef struct {      
    Vect2D_f32 v1;      // start vertex
    Vect2D_f32 v2;      // end vertex
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
    u16 num_walls; // up to 256 walls
    wall* walls[];
};

#endif