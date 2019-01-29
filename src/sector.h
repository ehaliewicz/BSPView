#ifndef SUBSECTOR_H
#define SUBSECTOR_H

#include <genesis.h>
#include "common.h"

/*
typedef struct {
    u8 lower_color;
    u8 mid_color;   // if 0, no middle color
    u8 upper_color;
    u16 sectno;
} side;

typedef struct {
    wall_type type;
    s16 left_side;  // index of sidedef, -1 if no left side
    s16 right_side; // index of sidedef, -1 if no right side
    u16 v1; // index of vertex
    u16 v2;
} line;

// if a sector is split, it will generate segments
// which are the split portions of lines
typedef struct {
    u16 v1;
    u16 v2;
    u16 line;
    u8 direction; 
} segment; // segment of a linedef

typedef struct {
    u16 first_segment; 
    u16 segment_cnt; // N segments stored contiguously from the first
} subsector;

typedef struct {
    fix32 floor_height;
    fix32 ceiling_height;
    u8 ceil_col;
    u8 floor_col;
    u8 light_level;
    u8 type;
    u16 tag_number;
} sector;
*/

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
    u16 num_walls;
    wall* walls[];
};

#endif