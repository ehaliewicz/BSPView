
#include <genesis.h>

#include "player.h"
#include "common.h"
#include "sector.h"
#include "bsp.h"
#include "palette.h"

sector sector1;

wall wall0 = {
    .v1 = {FIX32(0), FIX32(7)},
    .v2 = {FIX32(0), FIX32(0)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall1 = {
    .v1 = {FIX32(0), FIX32(0)},
    .v2 = {FIX32(6), FIX32(0)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall2 = {
    .v1 = {FIX32(6), FIX32(0)},
    .v2 = {FIX32(8), FIX32(2)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall3 = {
    .v1 = {FIX32(8), FIX32(2)},
    .v2 = {FIX32(8), FIX32(5)},
    .lower_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .upper_color = RED_IDX,
    .back_sector = &sector1
};

wall wall4 = {
    .v1 = {FIX32(8), FIX32(5)},
    .v2 = {FIX32(6), FIX32(7)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall5 = {
    .v1 = {FIX32(6), FIX32(7)},
    .v2 = {FIX32(0), FIX32(7)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

sector sector0 = {
    .floor_height = FIX32(0),
    .ceil_height = FIX32(20),
    .floor_color = BLUE_IDX,
    .ceil_color = BLUE_IDX,
    .num_walls = 6,
    .walls = {
        &wall0, &wall1,
        &wall2, &wall3,
        &wall4, &wall5
    },
    .sectnum = 0
};

wall wall6 = {
    .v1 = {FIX32(8), FIX32(5)},
    .v2 = {FIX32(8), FIX32(2)},
    .upper_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = BROWN_IDX,
    .back_sector = &sector0
};

wall wall7 = {
    .v1 = {FIX32(8), FIX32(2)},
    .v2 = {FIX32(15), FIX32(2)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

sector sector2;

wall wall8 = {
    .v1 = {FIX32(15), FIX32(2)},
    .v2 = {FIX32(15), FIX32(5)},
    .upper_color = BROWN_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = BROWN_IDX,
    .back_sector = &sector2
};

wall wall9 = {
    .v1 = {FIX32(15), FIX32(5)},
    .v2 = {FIX32(8), FIX32(5)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

sector sector1 = {
    .floor_height = FIX32(-4),
    .ceil_height = FIX32(16),
    .floor_color = GREEN_IDX,
    .ceil_color = GREEN_IDX,
    .num_walls = 4,
    .walls = {
        &wall6, &wall7,
        &wall8, &wall9
    },
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
        .front = &leaf0,
        .behind = &leaf1,
        .axis = HORIZONTAL,
        .split_pos = FIX32(8),
        .nodenum = 2
    }
};



wall wall10 = {
    .v1 = {FIX32(16), FIX32(5)},
    .v2 = {FIX32(15), FIX32(2)},
    .upper_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = BROWN_IDX,
    .back_sector = &sector1
};

wall wall11 = {
    .v1 = {FIX32(15), FIX32(2)},
    .v2 = {FIX32(18), FIX32(5)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

sector sector3;

wall wall12 = {
    .v1 = {FIX32(18), FIX32(5)},
    .v2 = {FIX32(15), FIX32(5)},
    .upper_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = BROWN_IDX,
    .back_sector = &sector3
};



sector sector2 = {
    .floor_height = FIX32(-6),
    .ceil_height = FIX32(14),
    .floor_color = GREEN_IDX,
    .ceil_color = GREEN_IDX,
    .num_walls = 3,
    .walls = {
        &wall10, &wall11, &wall12
    },
    .sectnum = 2
};

bsp_node leaf2 = {
    .type = LEAF,
    .sect = &sector2
};

wall wall13 = {
    .v1 = {FIX32(15), FIX32(11)},
    .v2 = {FIX32(15), FIX32(5)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall14 = {
    .v1 = {FIX32(15), FIX32(5)},
    .v2 = {FIX32(18), FIX32(5)},
    .upper_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = BROWN_IDX,
    .back_sector = &sector2
};

wall wall15 = {
    .v1 = {FIX32(18), FIX32(5)},
    .v2 = {FIX32(18), FIX32(11)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

sector sector4;

wall wall16 = {
    .v1 = {FIX32(18), FIX32(11)},
    .v2 = {FIX32(15), FIX32(11)},
    .upper_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = BROWN_IDX,
    .back_sector = &sector4
};

sector sector3 = {
    .floor_height = FIX32(-8),
    .ceil_height = FIX32(12),
    .floor_color = GREEN_IDX,
    .ceil_color = GREEN_IDX,
    .num_walls = 4,
    .walls = {
        &wall13, &wall14, &wall15, &wall16
    },
    .sectnum = 3
};

bsp_node leaf3 = {
    .type = LEAF,
    .sect = &sector3
};

bsp_node node3 = {
    .type = NODE,
    .inner = {
        .front = &leaf2,
        .behind = &leaf3,
        .axis = VERTICAL,
        .split_pos = FIX32(5),
        .nodenum = 3
    }
};

bsp_node node1 = {
    .type = NODE,
    .inner = {
        .front = &node2,
        .behind = &node3,
        .axis = HORIZONTAL,
        .split_pos = FIX32(15),
        .nodenum = 1
    }
};

wall wall17 = {
    .v1 = {FIX32(13), FIX32(18)},
    .v2 = {FIX32(13), FIX32(13)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall18 = {
    .v1 = {FIX32(13), FIX32(13)},
    .v2 = {FIX32(15), FIX32(11)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall19 = {
    .v1 = {FIX32(15), FIX32(11)},
    .v2 = {FIX32(18), FIX32(11)},
    .upper_color = RED_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector3
};

wall wall20 = {
    .v1 = {FIX32(18), FIX32(11)},
    .v2 = {FIX32(20), FIX32(13)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall21 = {
    .v1 = {FIX32(20), FIX32(13)},
    .v2 = {FIX32(20), FIX32(18)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

sector sector7;

wall wall22 = {
    .v1 = {FIX32(20), FIX32(18)},
    .v2 = {FIX32(18), FIX32(18)},
    .upper_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = BROWN_IDX,
    .back_sector = &sector7
};

wall wall23 = {
    .v1 = {FIX32(18), FIX32(18)},
    .v2 = {FIX32(15), FIX32(18)},
    .middle_color = YELLOW_IDX,
    .back_sector = NULL
};

sector sector6;

wall wall24 = {
    .v1 = {FIX32(18), FIX32(18)},
    .v2 = {FIX32(13), FIX32(18)},
    .upper_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = BROWN_IDX,
    .back_sector = &sector6
};

sector sector4 = {
    .floor_height = FIX32(-10),
    .ceil_height = FIX32(10),
    .ceil_color = GREEN_IDX,
    .floor_color = GREEN_IDX,
    .num_walls = 8,
    .walls = {
        &wall17, &wall18, &wall19, &wall20,
        &wall21, &wall22, &wall23, &wall24
    },
    .sectnum = 4
};

bsp_node leaf4 = {
    .type = LEAF,
    .sect = &sector4
};

wall wall30 = {
    .v1 = {FIX32(13), FIX32(21)},
    .v2 = {FIX32(13), FIX32(18)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall31 = {
    .v1 = {FIX32(13), FIX32(18)},
    .v2 = {FIX32(15), FIX32(18)},
    .upper_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector4
};

wall wall32 = {
    .v1 = {FIX32(15),   FIX32(18)},
    .v2 = {FIX32(16.5), FIX32(21)},
    .middle_color = YELLOW_IDX,
    .back_sector = NULL
};

sector sector5;

wall wall33 = {
    .v1 = {FIX32(16.5), FIX32(21)},
    .v2 = {FIX32(13),   FIX32(21)},
    .upper_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector5
};

sector sector6 = {
    .floor_height = FIX32(-10),
    .ceil_height = FIX32(10),
    .ceil_color = RED_IDX,
    .floor_color = RED_IDX,
    .num_walls = 4,
    .walls = {
        &wall30, &wall31, &wall32, &wall33
    },
    .sectnum = 6
};

bsp_node leaf6 = {
    .type = LEAF,
    .sect = &sector6
};

wall wall34 = {
    .v1 = {FIX32(16.5), FIX32(21)},
    .v2 = {FIX32(18),   FIX32(18)},
    .middle_color = YELLOW_IDX,
    .back_sector = NULL
};

wall wall35 = {
    .v1 = {FIX32(18), FIX32(18)},
    .v2 = {FIX32(20), FIX32(18)},
    .upper_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector4
};

wall wall36 = {
    .v1 = {FIX32(20), FIX32(18)},
    .v2 = {FIX32(20), FIX32(21)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL

};

wall wall37 = {
    .v1 = {FIX32(20),   FIX32(21)},
    .v2 = {FIX32(16.5), FIX32(21)},
    .upper_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector4

};

sector sector7 = {
    .floor_height = FIX32(-10),
    .ceil_height = FIX32(10),
    .ceil_color = RED_IDX,
    .floor_color = RED_IDX,
    .num_walls = 4,
    .walls = {
        &wall34, &wall35, &wall36, &wall37
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
        .front = &leaf6,
        .behind = &leaf7,
        .axis = HORIZONTAL,
        .split_pos = FIX32(16.5),
        .nodenum = 6
    }
};

wall wall25 = {
    .v1 = {FIX32(15), FIX32(23)},
    .v2 = {FIX32(13), FIX32(21)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall26 = {
    .v1 = {FIX32(13),   FIX32(21)},
    .v2 = {FIX32(16.5), FIX32(21)},
    .upper_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector6
};

wall wall27 = {
    .v1 = {FIX32(16.5), FIX32(21)},
    .v2 = {FIX32(20),   FIX32(21)},
    .upper_color = RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector7
};

wall wall28 = {
    .v1 = {FIX32(20), FIX32(21)},
    .v2 = {FIX32(18), FIX32(23)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};

wall wall29 = {
    .v1 = {FIX32(18), FIX32(23)},
    .v2 = {FIX32(15), FIX32(23)},
    .middle_color = STEEL_IDX,
    .back_sector = NULL
};


sector sector5 = {
    .floor_height = FIX32(-10),
    .ceil_height = FIX32(10),
    .ceil_color = RED_IDX,
    .floor_color = BLUE_IDX,
    .num_walls = 5,
    .walls = {
        &wall25, &wall26, &wall27, &wall28, &wall29
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
        .front = &node6,
        .behind = &leaf5,
        .axis = VERTICAL,
        .split_pos = FIX32(21),
        .nodenum = 5
    }
};

bsp_node node4 = {
    .type = NODE,
    .inner = {
        .front = &leaf4,
        .behind = &node5,
        .axis = VERTICAL,
        .split_pos = FIX32(18),
        .nodenum = 4
    }
};

bsp_node root_node = {
    .type = NODE,
    .inner = {
        .front = &node1,
        .behind = &node4,
        .axis = VERTICAL,
        .split_pos = FIX32(11),
        .nodenum = 0
    }
};

