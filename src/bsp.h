#ifndef BSP_H
#define BSP_H

#include <genesis.h>
#include "sector.h"

typedef enum {
    NODE, LEAF
} node_type;

typedef enum {
    HORIZONTAL,
    VERTICAL
} split_axis;

typedef struct bsp_node bsp_node;

typedef struct {
    bsp_node* behind;
    bsp_node* front;
    split_axis axis;
    fix32 split_pos;
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