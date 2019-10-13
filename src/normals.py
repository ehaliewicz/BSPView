
def VERT2(x,y):
    (x,y)
vertices = [
     (0, 7),     (0, 0),
     (6, 0),     (8, 2),
     (8, 5),     (6, 7),
     (15, 2),    (15, 5),
     (16, 5),    (18, 5),
     (15, 11),   (18, 11),
     (11, 18),   (13, 13),
     (20, 13),   (22, 18),
     (17.5, 18), (15.5, 18),
     (13, 21),   (16.5, 21),
     (20, 21),   (15, 23),
     (18, 23)
};

wall0 = {
    .v1 = 0,
    .v2 = 1,
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

wall wall12 = {
    .v1 = 9,
    .v2 = 7,
    .upper_color = DARK_STEEL_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = DARK_BROWN_IDX,
    .back_sector = &sector3
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

wall wall16 = {
    .v1 = 11,
    .v2 = 10,
    .upper_color = DARK_STEEL_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = DARK_BROWN_IDX,
    .back_sector = &sector4
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

wall wall24 = {
    .v1 = 16,
    .v2 = 12,
    .upper_color = DARK_BROWN_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = DARK_BROWN_IDX,
    .back_sector = &sector6
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

wall wall33 = {
    .v1 = 19,
    .v2 = 18,
    .upper_color = DARK_STEEL_IDX, //RED_IDX,
    .middle_color = TRANSPARENT_IDX,
    .lower_color = RED_IDX,
    .back_sector = &sector5
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
