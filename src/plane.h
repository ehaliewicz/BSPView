#ifndef PLANE_H
#define PLANE_H

#include <genesis.h>
#include "common.h"

typedef struct {
    Vect2D_f32 pos;
    Vect2D_f32 dvec;
} plane;


typedef enum {
    LEFT_OF_PLANE,
    RIGHT_OF_PLANE,
    ON_PLANE
} plane_side;

plane_side point_side(const Vect2D_f32* pos, const plane* pl);

#endif