#ifndef BSP_H
#define BSP_H

#include <genesis.h>
#include "sector.h"

typedef enum {
    NODE, LEAF
} node_type;

typedef enum {
    HORIZONTAL,
    VERTICAL,
    ARBITRARY
} split_axis;

typedef struct bsp_node bsp_node;

typedef struct {
    bsp_node* left;
    bsp_node* right;
    // define splitting plane
    Vect2D_f32 pos;
    Vect2D_f32 dvec;
    int nodenum;
} bsp_inner;

struct bsp_node {
    node_type type;

    union {
        sector* sect;
        bsp_inner inner;
    };
};

void draw_bsp_node(bsp_node* node);

sector* find_player_sector(bsp_node* node);


typedef void (*sector_callback)(sector* sect);

void traverse_all_sectors(bsp_node* node, sector_callback cb);

#endif