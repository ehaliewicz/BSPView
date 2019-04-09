#include <genesis.h>
#include "common.h"
#include "sector.h"
#include "bsp.h"
#include "palette.h"


#define VERT2(x,y) {FIX32(x), FIX32(y)}


Vect2D_f32 vertices_cache[6];

Vect2D_f32 vertices[6] = {
  [0] = VERT2(0,0),  [1] = VERT2(16, 0), // top left, top right
  [2] = VERT2(8,14), [3] = VERT2(14, 10), // middle left, middle right
  [4] = VERT2(2,24), [5] = VERT2(23, 24) // bottom left, bottom right
};

const int num_sectors = 1;

sector sectors[1] = {
  {
    .floor_height = FIX32(10),
    .ceil_height = FIX32(30),
    .floor_color = BROWN_IDX,
    .ceil_color = TRANSPARENT_IDX,
    .sector_type = NO_EFFECT
  }
};


sidedef wall_side = {
  .middle_col = STEEL_IDX,
  .facing_sector = &sectors[0]
};

sidedef transparent_side = {
  .lower_col = BROWN_IDX,
  .middle_col = TRANSPARENT_IDX,
  .upper_col = GREEN_IDX,
  .facing_sector = &sectors[0]
};



linedef line_top_left = {
  .v1 = 2,
  .v2 = 0,
  .double_sided = 0,
  .left_side = NULL,
  .right_side = &wall_side,
  .linenum = 0
};

linedef line_top = {
  .v1 = 0,
  .v2 = 1,
  .double_sided = 0,
  .left_side = NULL,
  .right_side = &wall_side,
  .linenum = 1
};

linedef line_top_right = {
  .v1 = 1,
  .v2 = 3,
  .double_sided = 0,
  .left_side = NULL,
  .right_side = &wall_side,
  .linenum = 2
};

linedef line_bottom_right = {
  .v1 = 3,
  .v2 = 5,
  .double_sided = 0,
  .left_side = NULL,
  .right_side = &wall_side,
  .linenum = 3
};

linedef line_bottom = {
  .v1 = 5,
  .v2 = 4,
  .double_sided = 0,
  .left_side = NULL,
  .right_side = &wall_side,
  .linenum = 4
};

linedef line_bottom_left = {
  .v1 = 4,
  .v2 = 2,
  .double_sided = 0,
  .left_side = NULL,
  .right_side = &wall_side,
  .linenum = 5
};

linedef line_middle_split = {
  .v1 = 2,
  .v2 = 3,
  .double_sided = 1,
  .left_side = &transparent_side,
  .right_side = &transparent_side,
  .linenum = 6
};

seg seg_top_left = {
  .left_side = 0,
  .v1 = 2, .v2 = 0,
  .line = &line_top_left
};

seg seg_top = {
  .left_side = 0,
  .v1 = 0, .v2 = 1,
  .line = &line_top
};
seg seg_top_right = {
  .left_side = 0,
  .v1 = 1, .v2 = 3,
  .line = &line_top_right
};

seg seg_split_top = {
  .left_side = 1,
  .v1 = 3, .v2 = 2,
  .line = &line_middle_split
};

seg seg_bottom_right = {
  .left_side = 0,
  .v1 = 3, .v2 = 5,
  .line = &line_bottom_right
};

seg seg_bottom = {
  .left_side = 0,
  .v1 = 5, .v2 = 4,
  .line = &line_bottom
};

seg seg_bottom_left = {
  .left_side = 0,
  .v1 = 4, .v2 = 2,
  .line = &line_bottom_left
};

seg seg_split_bottom = {
  .left_side = 0,
  .v1 = 2, .v2 = 3,
  .line = &line_middle_split
};

subsector subsector_top = {
  .sect = &sectors[0],
  .subsectnum = 0,
  .num_segs = 4,
  .segs = {
    &seg_top_left, &seg_top, &seg_top_right, &seg_split_top
  }
};

subsector subsector_bottom = {
  .sect = &sectors[0],
  .subsectnum = 1,
  .num_segs = 4,
  .segs = {
    &seg_bottom_right, &seg_bottom, &seg_bottom_left, &seg_split_bottom
  }
};

bsp_node node_top = {
  .type = LEAF,
  .subsect = &subsector_top
};

bsp_node node_bottom = {
  .type = LEAF,
  .subsect = &subsector_bottom
};

bsp_node root_node = {
  .type = NODE,
  .inner = {
    .left = &node_top,
    .right = &node_bottom,
    .split = {
      .pos = VERT2(7, 14), // middle left
      .dvec = VERT2(9, -4), // to middle right
    }
  }
};



