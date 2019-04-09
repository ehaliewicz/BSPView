#include <genesis.h>
#include "common.h"
#include "plane.h"
#include "sector.h"
#include "map.h"

int crosses_plane(const Vect2D_f32* point1, const Vect2D_f32* point2, const plane* pl) {
    return (point_side(point1, pl) != point_side(point2, pl));

}

int crosses_wall(const Vect2D_f32* point1, const Vect2D_f32* point2, const seg* wall) {
    //plane p;
    //Vect2D_f32 v1 = vertices[wall->v1];
    //Vect2D_f32 v2 = vertices[wall->v2];

    //p.pos = v1;
    //p.dvec.x = v2.x - v1.x;
    //p.dvec.y = v2.y - v1.y;

    //return crosses_plane(point1, point2, &p);
    
    Vect2D_f32 v1 = vertices[wall->v1];
    Vect2D_f32 v2 = vertices[wall->v2];
    fix32 oldside = PointSide32(point1->x, point1->y, v1.x, v1.y, v2.x, v2.y);
    fix32 newside = PointSide32(point2->x, point2->y, v1.x, v1.y, v2.x, v2.y);
    int signold = (oldside < 0 ? -1 : oldside == 0 ? 0 : 1);
    int signnew = (newside < 0 ? -1 : oldside == 0 ? 0 : 1);
    return signold != signnew;

}

