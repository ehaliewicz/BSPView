#ifndef BSP_H
#define BSP_H

#include <genesis.h>
#include "sector.h"
#include "plane.h"

typedef enum {
    NODE, LEAF
} node_type;


typedef struct bsp_node bsp_node;

typedef struct {
    const bsp_node* left;
    const bsp_node* right;
    const plane split;
    int nodenum;
} bsp_inner;

struct bsp_node {
    node_type type;

    union {
        subsector* subsect;
        bsp_inner inner;
    };
};

int draw_bsp_node(const bsp_node* node);

const sector* find_player_sector();
const subsector* find_player_subsector();

typedef void (*sector_callback)(sector* sect);

void traverse_all_sectors(const sector_callback cb);

#endif