#ifndef MAP_H
#define MAP_H

#include "bsp.h"

#define NUM_VERTEXES 23

typedef enum {
    UNCACHED              = 0b00001,
    CACHED_DIST           = 0b00010, // translation and distance calculation done
    CACHED_TRANSFORMATION = 0b00100, // translation, distance, and transformation done
    CACHED_X_PROJECTION   = 0b01000, // translation, distance, transformation, and x projection done
    CACHED_Y_PROJECTION   = 0b10000  // translation, distance, transformation, x projection, and y projection done
} vertex_cache_info;

typedef struct {
    Vect2D_f16 translated_vertex;
    u32 dist;
    Vect2D_f16 transformed_vertex;
    s16 x;
    fix32 yscale;
    vertex_cache_info info;
} vertex_cache_entry;

extern bsp_node root_node;
extern const Vect2D_f16 vertices[];
extern vertex_cache_entry vertices_cache[];
extern const sector* sectors[];
extern const int num_sectors;

void clear_vertex_cache();
 

#endif