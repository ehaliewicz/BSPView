#ifndef MAP_H
#define MAP_H

#include "bsp.h"


bsp_node root_node;
Vect2D_f32 vertices[6];
Vect2D_f32 vertices_cache[6];

const int num_sectors;
sector sectors[1];

seg seg_split_bottom, seg_split_top;

 

#endif