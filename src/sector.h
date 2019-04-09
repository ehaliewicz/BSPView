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
    const sector* facing_sector;
} sidedef;

typedef struct {
    const u16 v1, v2;
    const u8 double_sided; // if not double sided, only has a right side
    const sidedef* left_side;
    const sidedef* right_side;
    const u16 linenum;
} linedef;  // a line on the map, not split for subsectors

typedef struct {
    const u8 left_side;  // left side of the linedef, or right
    const u16 v1, v2;
    const linedef* line;
} seg;


struct sector  {
    fix32 floor_height;
    fix32 ceil_height;
    u8 floor_color;
    u8 ceil_color;
    sector_effect_type sector_type;
    sector_effect_params sector_params;
    const u16 sectnum;
};

typedef struct {
    const sector* sect;
    const u16 num_segs;
    const u16 subsectnum;
    const seg const * segs[];
} subsector;

#endif