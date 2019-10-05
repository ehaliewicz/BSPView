#ifndef SECTOR_H
#define SECTOR_H

#include <genesis.h>
#include "common.h"
#include "sector_effect_types.h"

typedef struct {
    u8 lower_color; // if this wall has an attached back sector, this will be used
    u8 middle_color; 
    u8 upper_color; // if this wall has an attached back sector, this will be used
    int adj_sector; // -1 if no back sector
} wall;


typedef struct {
    fix16 floor_height;
    fix16 ceil_height;
    u8 floor_color;
    u8 ceil_color;
    u16 sectnum;
    sector_effect_type sector_type;
    sector_effect_params sector_params;
    u16 num_walls;
    Vect2D_f16 *vertices;
    Vect2D_f16 transformed_vertices[32];
    wall* walls;
    int transformed;
} sector;

typedef void (*sector_callback)(sector* sect);

void traverse_all_sectors(sector_callback cb);


void init_drawn_sectors();
void clear_drawn_sectors();
void clear_transformed_sectors();
int draw_sector(int sectnum, s16 left_frustum, s16 right_frustum);


#endif