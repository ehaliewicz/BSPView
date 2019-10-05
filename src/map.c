
#include <genesis.h>

#include "player.h"
#include "common.h"
#include "sector.h"
#include "palette.h"
#include "sector_effect_types.h"

/*
typedef struct {
    u8 lower_color; // if this wall has an attached back sector, this will be used
    u8 middle_color; 
    u8 upper_color; // if this wall has an attached back sector, this will be used
    int adj_sector; // -1 if no adjacent sector
} wall;

*/


#define VECT(x,y) {FIX16(x), FIX16(y)}

Vect3D_f16 sector_0_vertices[9] = {
    VECT(0, 6.6),
    VECT(7, 0),
    VECT(15, 5.5),
    VECT(15, 9.5),
    VECT(15, 10.3),
    VECT(15, 14.3),
    VECT(7, 20),
    VECT(0, 13.2),
    VECT(0, 6.6)
};

Vect3D_f16 sector_1_vertices[5] = {
    VECT(15, 5.5),
    VECT(18, 5.5),
    VECT(18, 9.5),
    VECT(15, 9.5),
    VECT(15, 5.5),
};

Vect3D_f16 sector_2_vertices[5] = {
    VECT(15, 10.3),
    VECT(18, 10.3),
    VECT(18, 14.3),
    VECT(15, 14.3),
    VECT(15, 10.3)
};

Vect3D_f16 sector_3_vertices[10] = {
    VECT(18, 5),
    VECT(30, 5),
    VECT(30, 5.5),
    VECT(30, 14.3),
    VECT(30, 15),
    VECT(18, 15),
    VECT(18, 14.3),
    VECT(18, 10.3),
    VECT(18, 9.5),
    VECT(18, 5.5),
    VECT(18, 5)
};

Vect3D_f16 sector_4_vertices[5] = {
    VECT(30, 5.5),
    VECT(40, 7.5),
    VECT(40, 10.3),
    VECT(30, 14.3),
    VECT(30, 5.5)
};

#undef VECT

const wall sector_0_walls[8] = {
    {
        .middle_color = BROWN_IDX,
        .adj_sector = -1
    },
    {
        .middle_color = BROWN_IDX,
        .adj_sector = -1
    },
    {
        .middle_color = BROWN_IDX,
        .adj_sector = 1,
        .upper_color = BLUE_IDX,
        .lower_color = GREEN_IDX
    },
    {
        .middle_color = BROWN_IDX,
        .adj_sector = -1
    },
    {
        .middle_color = BROWN_IDX,
        .adj_sector = 2,
        .upper_color = BLUE_IDX,
        .lower_color = GREEN_IDX
    },
    {
        .middle_color = BROWN_IDX,
        .adj_sector = -1
    },
    {
        .middle_color = BROWN_IDX,
        .adj_sector = -1
    },
    {
        .middle_color = BROWN_IDX,
        .adj_sector = -1
    }
};

const wall sector_1_walls[4] = {
    {
        .middle_color = DARK_BROWN_IDX,
        .adj_sector = -1
    },
    {
        .middle_color = DARK_BROWN_IDX,
        .adj_sector = 3,
        .upper_color = DARK_STEEL_IDX,
    },
    {
        .middle_color = DARK_BROWN_IDX,
        .adj_sector = -1
    },
    {
        .middle_color = DARK_BROWN_IDX,
        .adj_sector = 0
    }
};

const wall sector_2_walls[4] = {
    {
        .middle_color = DARK_BROWN_IDX,
        .adj_sector = -1
    },
    {
        .middle_color = DARK_BROWN_IDX,
        .adj_sector = 3,
        .upper_color = DARK_STEEL_IDX,
    },
    {
        .middle_color = DARK_BROWN_IDX,
        .adj_sector = -1
    },
    {
        .middle_color = DARK_BROWN_IDX,
        .adj_sector = 0
    }
};

const wall sector_3_walls[10] = {
    {
        .middle_color = RED_IDX,
        .adj_sector = -1,
    },
    {
        .middle_color = RED_IDX,
        .adj_sector = -1,
    },
    {
        .middle_color = RED_IDX,
        .adj_sector = 4,
    },
    {
        .middle_color = RED_IDX,
        .adj_sector = -1,
    },
    {
        .middle_color = RED_IDX,
        .adj_sector = -1,
    },
    {
        .middle_color = RED_IDX,
        .adj_sector = -1,
    },
    {
        .middle_color = RED_IDX,
        .adj_sector = 2,
    },
    {
        .middle_color = RED_IDX,
        .adj_sector = -1,
    },
    {
        .middle_color = RED_IDX,
        .adj_sector = 1,
    },
    {
        .middle_color = RED_IDX,
        .adj_sector = -1,
    }
};

const wall sector_4_walls[4] = {
    {
        .middle_color = BLUE_IDX,
        .adj_sector = -1
    },
    {
        .middle_color = DARK_BLUE_IDX,
        .adj_sector = -1,
    },
    {
        .middle_color = BLUE_IDX,
        .adj_sector = -1,
    },
    {
        .middle_color = BLUE_IDX,
        .adj_sector = 3,
    }
};

sector sectors[5] = { 
    {
        .floor_height = FIX16(0),
        .ceil_height = FIX16(20),
        .floor_color = BLUE_IDX,
        .ceil_color = GREEN_IDX,
        .sectnum = 0,
        .sector_type = NO_EFFECT,
        .num_walls = 8,
        .vertices = sector_0_vertices,
        .walls = sector_0_walls
    },
    {
        .floor_height = FIX16(0),
        .ceil_height = FIX16(20),
        .floor_color = DARK_GREEN_IDX,
        .ceil_color = DARK_BLUE_IDX,
        .sectnum = 1,
        .sector_type = NO_EFFECT,
        .num_walls = 4,
        .vertices = sector_1_vertices,
        .walls = sector_1_walls
    },
    {
        .floor_height = FIX16(0),
        .ceil_height = FIX16(20),
        .floor_color = DARK_GREEN_IDX,
        .ceil_color = DARK_BLUE_IDX,
        .sectnum = 2,
        .sector_type = NO_EFFECT,
        .num_walls = 4,
        .vertices = sector_2_vertices,
        .walls = sector_2_walls
    },
    {
        .floor_height = FIX16(-5),
        .ceil_height = FIX16(25),
        .floor_color = DARK_RED_IDX,
        .ceil_color = DARK_BROWN_IDX,
        .sectnum = 3,
        .sector_type = CEILING_UP_DOWN,
        .sector_params = {
            .ceiling_up_down = {
                .max_ceil_height = FIX16(25),
                .min_ceil_height = FIX16(-5),
                .frame_delay_at_transition = 10,
                .state = GOING_DOWN,
            }
        },
        .num_walls = 8,
        .vertices = sector_3_vertices,
        .walls = sector_3_walls
    },
    {
        .floor_height = FIX16(-10),
        .ceil_height = FIX16(30),
        .floor_color = DARK_BLUE_IDX,
        .ceil_color = DARK_STEEL_IDX,
        .sectnum = 4,
        .sector_type = NO_EFFECT,
        .num_walls = 4,
        .vertices = sector_4_vertices,
        .walls = sector_4_walls
    }
};


const int num_sectors = 5;