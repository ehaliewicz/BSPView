#ifndef COLLISION_H
#define COLLISION_H

#include <genesis.h>
#include "common.h"
#include "plane.h"
#include "sector.h"

int crosses_plane(const Vect2D_f32* point1, const Vect2D_f32* point2, const plane* pl);

int crosses_wall(const Vect2D_f32* point1, const Vect2D_f32* point2, const seg* wall);

#endif