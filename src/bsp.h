#ifndef BSP_H
#define BSP_H

#include <genesis.h>
#include "sector.h"

typedef enum {
    NODE, LEAF
} node_type;


typedef struct bsp_node bsp_node;

typedef struct {
    const bsp_node* left;
    const bsp_node* right;
    // define splitting plane
    const Vect2D_f32 pos;
    const Vect2D_f32 dvec;
    int nodenum;
} bsp_inner;

struct bsp_node {
    node_type type;

    union {
        subsector* subsect;
        bsp_inner inner;
    };
};

int draw_bsp_node(bsp_node* node);

sector* find_player_sector();
subsector* find_player_subsector();

typedef void (*sector_callback)(sector* sect);

void traverse_all_sectors(sector_callback cb);

#endif