#ifndef MAP_H
#define MAP_H

#include "bsp.h"

#define NUM_VERTEXES 23

typedef enum {
    UNCACHED              = 0b0001,
    CACHED_DIST           = 0b0010, // translation and distance calculation done
    CACHED_TRANSFORMATION = 0b0100, // translation, distance, and transformation done
    // CACHED_PROJECTION     = 0b1000  // translation, distance, transformation, and projection done
} vertex_cache_info;

typedef struct {
    Vect2D_f32 translated_vertex;
    Vect2D_f32 transformed_vertex;
    u32 dist;
    vertex_cache_info info;
} vertex_cache_entry;

extern bsp_node root_node;
extern const Vect2D_f32 vertices[];
//extern Vect2D_f32 vertices_cache[];
extern vertex_cache_entry vertices_cache[];

void clear_vertex_cache();
 

#endif