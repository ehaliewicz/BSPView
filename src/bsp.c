#include <genesis.h>
#include "bsp.h"

#include "player.h"
#include "common.h"
#include "sector.h"
#include "palette.h"
#include "span_buf.h"
#include "draw.h"

#include "map.h"
#include "sector.h"


typedef enum {
    LEFT_OF_PLANE,
    RIGHT_OF_PLANE,
    ON_PLANE
} plane_side;

plane_side point_side(Vect3D_f16* pos, bsp_node* nd) {
    if(nd->inner.dvec.x == 0) {
        // vertical splitting plane
        if(nd->inner.dvec.y < 0) {
            // plane goes up
            return (pos->x < nd->inner.pos.x) ? LEFT_OF_PLANE : RIGHT_OF_PLANE;
            
        } else {
            // plane goes down
            return (pos->x < nd->inner.pos.x) ? RIGHT_OF_PLANE : LEFT_OF_PLANE;
        }
    }


    if(nd->inner.dvec.y == 0) {
        // horizontal splitting plane
        if(nd->inner.dvec. x < 0) {
            // plane goes left
            return (pos->y < nd->inner.pos.y) ? RIGHT_OF_PLANE : LEFT_OF_PLANE;
        } else {
            return (pos->y < nd->inner.pos.y) ? LEFT_OF_PLANE : RIGHT_OF_PLANE;
        }
    }
    fix16 dx = pos->x - nd->inner.pos.x;
    fix16 dy = pos->y - nd->inner.pos.y;


    fix16 left = (nd->inner.dvec.x >> FIX16_FRAC_BITS) * dx; // 22 * 22.10 = 22.10 bits
    fix16 right = (nd->inner.dvec.y >> FIX16_FRAC_BITS) * dy;
    
  
    if(right > left) {
        return RIGHT_OF_PLANE;
    } else if (right < left) {
        return LEFT_OF_PLANE;
    } else {
        // 
        return LEFT_OF_PLANE; 

        while(1) {
            VDP_drawTextBG(PLAN_A, "exactly on plane wtf", 10, 8);
        }
    }

}


sector* find_player_sector(bsp_node* node) {

    switch(node->type) {
        case LEAF:
            return node->sect;
        case NODE: do {
                plane_side side = point_side(&(ply.where), node);
                if(side == RIGHT_OF_PLANE) {
                    return find_player_sector(node->inner.right);
                } else {
                    return find_player_sector(node->inner.left);
                }
        } while(0);
            break;
        
        default:
            // corrupted
            while(1) {
                BMP_drawText("Corrupted BSP tree!", 1, 2);
            }
            break;
    }
}

void traverse_all_sectors(bsp_node* node, sector_callback cb) {
    switch(node->type) {
        case LEAF:
            cb(node->sect);
            break;
        case NODE:
            traverse_all_sectors(node->inner.left, cb);
            traverse_all_sectors(node->inner.right, cb);
            break;

    }
}


int draw_bsp_node(bsp_node* node) {
    plane_side side;
    switch(node->type) {
        case LEAF:
            return draw_sector(node->sect);
            break;
        case NODE: 
            side = point_side(&(ply.where), node);
            if(side == RIGHT_OF_PLANE) {
                return (draw_bsp_node(node->inner.right) ||
                        draw_bsp_node(node->inner.left));
            } else {
                return (draw_bsp_node(node->inner.left) ||
                        draw_bsp_node(node->inner.right));
            }
            break;

    }
    return 0;
}
