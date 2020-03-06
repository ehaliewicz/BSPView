
#include <genesis.h>

#include "player.h"
#include "common.h"
#include "sector.h"
#include "bsp.h"
#include "palette.h"
#include "sector_effect_types.h"
#include "map.h"

void clear_vertex_cache() {
    for(int i = 0; i < NUM_VERTEXES; i++) {
        vertices_cache[i].info = UNCACHED;
    }
}

#define VERT2(x,y) {FIX16(x), FIX16(y)}

#define FLASH_FRAMES 2
#define NO_FLASH_FRAMES 10

vertex_cache_entry vertices_cache[NUM_VERTEXES];

const Vect2D_f16 vertices[23] = {
    [0] = VERT2(0, 7),    [1] = VERT2(0, 0),
    [2] = VERT2(6, 0),    [3] = VERT2(8, 2),
    [4] = VERT2(8, 5),    [5] = VERT2(6, 7),
    [6] = VERT2(15, 2),   [7] = VERT2(15, 5),
    [8] = VERT2(16, 5),   [9] = VERT2(18, 5),
    [10] = VERT2(15, 11), [11] = VERT2(18, 11),
    [12] = VERT2(11, 18), [13] = VERT2(13, 13),
    [14] = VERT2(20, 13), [15] = VERT2(22, 18),
    [16] = VERT2(17.5, 18), [17] = VERT2(15.5, 18),
    [18] = VERT2(13, 21), [19] = VERT2(16.5, 21),
    [20] = VERT2(20, 21), [21] = VERT2(15, 23),
    [22] = VERT2(18, 23)
};


sector sector1;


wall wall0 = {
    .v1 = 0,
    .v2 = 1,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall1 = {
    .v1 = 1,
    .v2 = 2,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall2 = {
    .v1 = 2,
    .v2 = 3,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall3 = {
    .v1 = 3,
    .v2 = 4,
    .lower_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .upper_color = DARK_STEEL_IDX, //RED_IDX,
    .back_sector = &sector1
};

wall wall4 = {
    .v1 = 4,
    .v2 = 5,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall5 = {
    .v1 = 5,
    .v2 = 0,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

sector sector0 = {
    .floor_height = FIX16(20),
    .ceil_height = FIX16(40),
    .floor_color = DARK_BLUE_IDX,
    .ceil_color = DARK_BLUE_IDX,
    .num_walls = 6,
    .walls = {
        &wall0, &wall1,
        &wall2, &wall3,
        &wall4, &wall5
    },
    .light_level = 1,
    .sectnum = 0,
    .sector_type = SECTOR_UP_DOWN,
    .sector_params = {
        .sector_up_down = {
            .max_floor_height = FIX16(16),
            .min_floor_height = FIX16(-4),
            .frame_delay_at_transition = 20,
        },
        .delay_to = 0,
        .state = GOING_DOWN
    }
};

wall wall6 = {
    .v1 = 4,
    .v2 = 3,
    .upper_color = DARK_STEEL_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = DARK_BROWN_IDX,
    .back_sector = &sector0
};

wall wall7 = {
    .v1 = 3,
    .v2 = 6,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

sector sector2;

wall wall8 = {
    .v1 = 6,
    .v2 = 7,
    .upper_color = DARK_STEEL_IDX, //BROWN_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = DARK_BROWN_IDX,
    .back_sector = &sector2
};

wall wall9 = {
    .v1 = 7,
    .v2 = 4,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

sector sector1 = {
    .floor_height = FIX16(-4),
    .ceil_height = FIX16(16),
    .floor_color = DARK_STEEL_IDX,
    .ceil_color = DARK_STEEL_IDX,
    .num_walls = 4,
    .walls = {
        &wall6, &wall7,
        &wall8, &wall9
    },
    .light_level = 0,
    .sector_type = NO_EFFECT,
    .sectnum = 1
};

bsp_node leaf0 = {
    .type = LEAF,
    .sect = &sector0
};

bsp_node leaf1 = {
    .type = LEAF,
    .sect = &sector1
};


bsp_node node2 = {
    .type = NODE,
    .inner = {
        .left = &leaf0,
        .right = &leaf1,
        .pos = VERT2(8, 5),
        .dvec = VERT2(0, -3),
        .nodenum = 2
    }
};

wall wall10 = {
    .v1 = 8,
    .v2 = 6,
    .upper_color = DARK_STEEL_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = DARK_BROWN_IDX,
    .back_sector = &sector1
};

wall wall11 = {
    .v1 = 6,
    .v2 = 9,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

sector sector3;

wall wall12 = {
    .v1 = 9,
    .v2 = 7,
    .upper_color = DARK_STEEL_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = DARK_BROWN_IDX,
    .back_sector = &sector3
};

sector sector2 = {
    .floor_height = FIX16(-6),
    .ceil_height = FIX16(14),
    .floor_color = STEEL_IDX,
    .ceil_color = STEEL_IDX,
    .num_walls = 3,
    .walls = {
        &wall10, &wall11, &wall12
    },
    .light_level = 1,
    .sector_type = FLICKER,
    .sector_params = {
        .state = NOT_FLICKERING,
        .delay_to = 0
    },
    .sectnum = 2
};

bsp_node leaf2 = {
    .type = LEAF,
    .sect = &sector2
};

wall wall13 = {
    .v1 = 10,
    .v2 = 7,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall14 = {
    .v1 = 7,
    .v2 = 9,
    .upper_color = DARK_STEEL_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = DARK_BROWN_IDX,
    .back_sector = &sector2
};

wall wall15 = {
    .v1 = 9,
    .v2 = 11,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

sector sector4;

wall wall16 = {
    .v1 = 11,
    .v2 = 10,
    .upper_color = DARK_STEEL_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = DARK_BROWN_IDX,
    .back_sector = &sector4
};

sector sector3 = {
    .floor_height = FIX16(-8),
    .ceil_height = FIX16(12),
    .floor_color = DARK_STEEL_IDX,
    .ceil_color = DARK_STEEL_IDX,
    .num_walls = 4,
    .walls = {
        &wall13, &wall14, &wall15, &wall16
    },
    .light_level = 0,
    .sector_type = NO_EFFECT,
    .sectnum = 3
};

bsp_node leaf3 = {
    .type = LEAF,
    .sect = &sector3
};

bsp_node node3 = {
    .type = NODE,
    .inner = {
        .left = &leaf2,
        .right = &leaf3,
        .pos = VERT2(15, 5),
        .dvec = VERT2(3, 0),
        .nodenum = 3
    }
};

bsp_node node1 = {
    .type = NODE,
    .inner = {
        .left = &node2,
        .right = &node3,
        .pos = VERT2(15, 5),
        .dvec = VERT2(0, -3),
        .nodenum = 1
    }
};

wall wall17 = {
    .v1 = 12,
    .v2 = 13,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall18 = {
    .v1 = 13,
    .v2 = 10,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall19 = {
    .v1 = 10,
    .v2 = 11,
    .upper_color = RED_IDX, //RED_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector3
};

wall wall20 = {
    .v1 = 11,
    .v2 = 14,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall21 = {
    .v1 = 14,
    .v2 = 15,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

sector sector7;

wall wall22 = {
    .v1 = 15,
    .v2 = 16,
    .upper_color = DARK_STEEL_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = DARK_BROWN_IDX,
    .back_sector = &sector7
};

wall wall23 = {
    .v1 = 16,
    .v2 = 17,
    .middle_color = LIGHT_GREEN_IDX,
    .back_sector = NULL
};

sector sector6;

wall wall24 = {
    .v1 = 16,
    .v2 = 12,
    .upper_color = DARK_BROWN_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = DARK_BROWN_IDX,
    .back_sector = &sector6
};

sector sector4 = {
    .floor_height = FIX16(-10),
    .ceil_height = FIX16(10),
    .ceil_color = STEEL_IDX, // RED_IDX
    .floor_color = STEEL_IDX,
    .num_walls = 8,
    .walls = {
        &wall17, &wall18, &wall19, &wall20,
        &wall21, &wall22, &wall23, &wall24
    },
    .sectnum = 4,
    .light_level = 1,
    .sector_type = FLICKER,
    .sector_params = {
        .state = FLICKERING,
        .flicker = {
            .normal_light_level = 1
        },
        .delay_to = 0
    },
};

bsp_node leaf4 = {
    .type = LEAF,
    .sect = &sector4
};

wall wall30 = {
    .v1 = 18,
    .v2 = 12,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall31 = {
    .v1 = 12,
    .v2 = 17,
    .upper_color = DARK_BROWN_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector4
};

wall wall32 = {
    .v1 = 17,
    .v2 = 19,
    .middle_color = LIGHT_GREEN_IDX,
    .back_sector = NULL
};

sector sector5;

wall wall33 = {
    .v1 = 19,
    .v2 = 18,
    .upper_color = DARK_STEEL_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector5
};

sector sector6 = {
    .floor_height = FIX16(-10),
    .ceil_height = FIX16(10),
    .ceil_color = STEEL_IDX,
    .floor_color = RED_IDX,
    .num_walls = 4,
    .walls = {
        &wall30, &wall31, &wall32, &wall33
    },
    .light_level = 1,
    .sector_type = LINKED_LIGHT_LEVEL,
    .sector_params = {
        .link = 4,
        .delay_to = 0
    },
    .sectnum = 6
};

bsp_node leaf6 = {
    .type = LEAF,
    .sect = &sector6
};

wall wall34 = {
    .v1 = 19,
    .v2 = 16,
    .middle_color = LIGHT_GREEN_IDX,
    .back_sector = NULL
};

wall wall35 = {
    .v1 = 16,
    .v2 = 15,
    .upper_color = TRANSPARENT_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector4
};

wall wall36 = {
    .v1 = 15,
    .v2 = 20,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall37 = {
    .v1 = 20,
    .v2 = 19,
    .upper_color = TRANSPARENT_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector4
};

sector sector7 = {
    .floor_height = FIX16(-10),
    .ceil_height = FIX16(10),
    .ceil_color = STEEL_IDX,
    .floor_color = RED_IDX,
    .num_walls = 4,
    .walls = {
        &wall34, &wall35, &wall36, &wall37
    },
    .light_level = 1,
    .sector_type = LINKED_LIGHT_LEVEL,
    .sector_params = {
        .link = 4,
        .delay_to = 0
    },
    .sectnum = 7
};

bsp_node leaf7 = {
    .type = LEAF,
    .sect = &sector7
};

bsp_node node6 = {
    .type = NODE,
    .inner = {
        .left = &leaf6,
        .right = &leaf7,
        .pos = VERT2(16.5, 21),
        .dvec = VERT2(0, -3),
        .nodenum = 6
    }
};

wall wall25 = {
    .v1 = 21,
    .v2 = 18,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall26 = {
    .v1 = 18,
    .v2 = 19,
    .upper_color = TRANSPARENT_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector6
};

wall wall27 = {
    .v1 = 19,
    .v2 = 20,
    .upper_color = TRANSPARENT_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector7
};

wall wall28 = {
    .v1 = 20,
    .v2 = 22,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall29 = {
    .v1 = 22,
    .v2 = 21,
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};


sector sector5 = {
    .floor_height = FIX16(-10),
    .ceil_height = FIX16(10),
    .ceil_color = BLUE_IDX,
    .floor_color = BLUE_IDX,
    .num_walls = 5,
    .walls = {
        &wall25, &wall26, &wall27, &wall28, &wall29
    },
    .light_level = 1,
    .sector_type = LINKED_LIGHT_LEVEL,
    .sector_params = {
        .link = 4,
        .delay_to = 0
    },
    .sectnum = 5
};

bsp_node leaf5 = {
    .type = LEAF,
    .sect = &sector5
};

bsp_node node5 = {
    .type = NODE,
    .inner = {
        .left = &node6,
        .right = &leaf5,
        .pos = VERT2(13, 21),
        .dvec = VERT2(7, 0),
        .nodenum = 5
    }
};

bsp_node node4 = {
    .type = NODE,
    .inner = {
        .left = &leaf4,
        .right = &node5,
        .pos = VERT2(13, 18),
        .dvec = VERT2(7, 0),
        .nodenum = 4
    }
};

bsp_node root_node = {
    .type = NODE,
    .inner = {
        .left = &node1,
        .right = &node4,
        .pos = VERT2(15, 11),
        .dvec = VERT2(3, 0),
        .nodenum = 0
    }
};

const sector* sectors[] = {
    &sector0, &sector1, &sector2, &sector3, 
    &sector4, &sector5, &sector6, &sector7};

const int num_sectors = 8;