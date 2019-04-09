#include <genesis.h>
#include "common.h"
#include "plane.h"

plane_side point_side(const Vect2D_f32* pos, const plane* pl) {
    if(pl->dvec.x == 0) {
        // vertical splitting plane
        if(pl->dvec.y < 0) {
            // plane goes up
            return (pos->x < pl->pos.x) ? LEFT_OF_PLANE : RIGHT_OF_PLANE;
            
        } else {
            // plane goes down
            return (pos->x < pl->pos.x) ? RIGHT_OF_PLANE : LEFT_OF_PLANE;
        }
    }


    if(pl->dvec.y == 0) {
        // horizontal splitting plane
        if(pl->dvec. x < 0) {
            // plane goes left
            return (pos->y < pl->pos.y) ? RIGHT_OF_PLANE : LEFT_OF_PLANE;
        } else {
            return (pos->y < pl->pos.y) ? LEFT_OF_PLANE : RIGHT_OF_PLANE;
        }
    }
    fix32 dx = pos->x - pl->pos.x;
    fix32 dy = pos->y - pl->pos.y;


    int32_t left = ((pl->dvec.y >> FIX32_FRAC_BITS) * dx) >> FIX32_FRAC_BITS; // 16.5 * 16.5 = 32.10 truncates to 22.10 bits
    int32_t right = ((pl->dvec.x >> FIX32_FRAC_BITS) * dy) >> FIX32_FRAC_BITS;
    
  
    if(right > left) {
        return RIGHT_OF_PLANE;
    } else if (right < left) {
        return LEFT_OF_PLANE;
    } else {
        // 
        return RIGHT_OF_PLANE; 

    }

}