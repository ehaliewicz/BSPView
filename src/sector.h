#ifndef SUBSECTOR_H
#define SUBSECTOR_H

#include <genesis.h>
#include "common.h"
#include "sector_effect_types.h"

// convex sector

typedef struct sector sector;

typedef struct {
    u8 lower_col;
    u8 middle_col;
    u8 upper_col;
    sector* facing_sector;
} sidedef;

typedef struct {
    u16 v1, v2;
    u8 double_sided; // if not double sided, only has a right side
    sidedef* left_side;
    sidedef* right_side;
    u16 linenum;
} linedef;  // a line on the map, not split for subsectors

typedef struct {
    u8 left_side;  // left side of the linedef, or right
    u16 v1, v2;
    linedef* line;
} seg;


struct sector  {
    fix32 floor_height;
    fix32 ceil_height;
    u8 floor_color;
    u8 ceil_color;
    sector_effect_type sector_type;
    sector_effect_params sector_params;
    u16 sectnum;
};

typedef struct {
    sector* sect;
    u16 num_segs;
    seg* segs[];
} subsector;

#endif