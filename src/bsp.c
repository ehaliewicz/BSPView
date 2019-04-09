#include <genesis.h>
#include "bsp.h"

#include "player.h"
#include "common.h"
#include "sector.h"
#include "palette.h"
#include "span_buf.h"
#include "draw.h"
#include "plane.h"

#include "map.h"

#define MID_DIST 10
#define DARK_DIST 15

fix32 div32(fix32 x, fix32 y) {
    return fix32Div(x, y);
}



#define fix32ToFix16(value)         (((value) >> (FIX32_FRAC_BITS-FIX16_FRAC_BITS)))

#define fix16ToFix32(value)         (((value) << (FIX32_FRAC_BITS - FIX16_FRAC_BITS)))


// 24 bytes
typedef struct {
    fix32 tx1; 
    fix32 ty1;
    fix32 tx2;
    fix32 ty2;
    u32 dist;
} cache_entry;



int draw_subsector(const subsector* subsect) {

  // transform and lighting for walls in this subsector
  // (should probably be in a separate file)
  
    int dither_floor = 1;
    int dark_floor = 1;
    

    // lighting for floors and ceilings
    // (this is handled PER SUBSECTOR, wall lighting is handled PER WALL)

    // loop over all vertices in the sub-sector
    // if any of them is within a certain distance, consider the
    // floors/ceilings in this subsector lit, half-lit, or dark (half-lit is dithered)
    for(u16 i = 0; i < subsect->num_segs; i++) {
        const seg* s = subsect->segs[i];

	// transform vertices from world space into player space
        Vect2D_f32 v1 = vertices[s->v1];
        Vect2D_f32 v2 = vertices[s->v2];
        fix32 vx1 = v1.x;
        fix32 vy1 = v1.y;
        fix32 vx2 = v2.x;
        fix32 vy2 = v2.y;
        fix32 tx1 = vx1 - ply.where.x;
        fix32 ty1 = vy1 - ply.where.y;
        fix32 tx2 = vx2 - ply.where.x;
        fix32 ty2 = vy2 - ply.where.y;

	// stash results for later use (investigate if this if worthwhile, add/sub is pretty fast)
        vertices_cache[s->v1].x = tx1;
        vertices_cache[s->v1].y = ty1;
        vertices_cache[s->v2].x = tx2;
        vertices_cache[s->v2].y = ty2;
	
	
        u32 v1_dist = getApproximatedDistance(
            fix32ToInt(tx1),
            fix32ToInt(ty1));
        u32 v2_dist = getApproximatedDistance(
            fix32ToInt(tx2),
            fix32ToInt(ty2));


        u32 avg_dist = (v1_dist + v2_dist)/2;
        //dist_cache[i] = avg_dist;

        if(avg_dist < MID_DIST) {
            dither_floor = 0;
            dark_floor = 0;
            //break;
        } 
        if(avg_dist < DARK_DIST) {
            dark_floor = 0;
        }
    }


    // calculate floor/ceiling colors for lighting
    const sector* sect = subsect->sect;
    fix32 sect_ceil = sect->ceil_height;
    fix32 sect_floor = sect->floor_height;
    u8 sect_ceil_col = sect->ceil_color;
    u8 sect_floor_col = sect->floor_color;
    if(!dither_floor) {
        sect_floor_col = (sect_floor_col << 4) | sect_floor_col;
        sect_ceil_col = (sect_ceil_col << 4) | sect_ceil_col;
    } else if (dark_floor) {
        // lookup darker colors in lookup table
        u8 dark_floor = dark_col_lut[sect_floor_col];
        u8 dark_ceil = dark_col_lut[sect_ceil_col];
        sect_floor_col = (dark_floor << 4) | dark_floor;
        sect_ceil_col  = (dark_ceil << 4)  | dark_ceil;
    } else {
        sect_floor_col = ((dark_col_lut[sect_floor_col]) << 4) | sect_floor_col;
        sect_ceil_col  = ((dark_col_lut[sect_ceil_col]) << 4)  | sect_ceil_col;
    }

    // transform and draw walls and floors
    for(u16 i = 0; i < subsect->num_segs; i++) {
        const seg* s = subsect->segs[i];
        
        Vect2D_f32 v1 = vertices[s->v1];
        Vect2D_f32 v2 = vertices[s->v2];
        fix32 vx1 = v1.x;
        fix32 vy1 = v1.y;
        fix32 vx2 = v2.x;
        fix32 vy2 = v2.y;
        u32 v1_dist = getApproximatedDistance(
            abs(fix32ToInt(vx1 - ply.where.x)),
            abs(fix32ToInt(vy1 - ply.where.y)));
        u32 v2_dist = getApproximatedDistance(
            abs(fix32ToInt(vx2 - ply.where.x)),
            abs(fix32ToInt(vy2 - ply.where.x)));

        u32 avg_dist = (v1_dist + v2_dist)/2;

        fix32 tx1 = vertices_cache[s->v1].x; //vx1 - ply.where.x;
        fix32 ty1 = vertices_cache[s->v1].y; //vy1 - ply.where.y;
        fix32 tx2 = vertices_cache[s->v2].x; //vx2 - ply.where.x;
        fix32 ty2 = vertices_cache[s->v2].y; //vy2 - ply.where.y;

	// rotate according to player's camera angle
        fix32 pcos = ply.anglecos;
        fix32 psin = ply.anglesin;

        fix32 rx1 = fix32Mul(tx1, psin) - fix32Mul(ty1, pcos);
        fix32 rz1 = fix32Mul(tx1, pcos) + fix32Mul(ty1, psin);
        fix32 rx2 = fix32Mul(tx2, psin) - fix32Mul(ty2, pcos);
        fix32 rz2 = fix32Mul(tx2, pcos) + fix32Mul(ty2, psin);


	// if both vertices are off-screen, skip this wall
        if(rz1 <= 0 && rz2 <= 0) { continue; }
        

        // if it's partially behind the player, clip it against player's view frustum
        if(rz1 <= 0 || rz2 <= 0) {   

            fix32 nearz = FIX32(0.1);

            fix16 nearz_16 = FIX16(0.5);
            fix16 farz_16 = FIX16(5);
            fix16 nearside_16 = FIX16(0.2);
            fix16 farside_16 = FIX16(20);

            // find an intersection between the wall and the approximate edges of the player's view


            fix16 rx1_16 = fix32ToFix16(rx1);
            fix16 rz1_16 = fix32ToFix16(rz1);
            fix16 rx2_16 = fix32ToFix16(rx2);
            fix16 rz2_16 = fix32ToFix16(rz2);

            Vect2D_f16 i1 = Intersect16(rx1_16, rz1_16, rx2_16, rz2_16,
                                        -nearside_16, nearz_16, -farside_16, farz_16);
            Vect2D_f16 i2 = Intersect16(rx1_16, rz1_16, rx2_16, rz2_16,
                                        nearside_16, nearz_16, farside_16, farz_16);

            if(rz1 < nearz) { 
                if(i1.y > 0) {
                    rx1 = fix16ToFix32(i1.x);
                    rz1 = fix16ToFix32(i1.y);
                } else {
                    rx1 = fix16ToFix32(i2.x);
                    rz1 = fix16ToFix32(i2.y);
                }
            }
            if(rz2 < nearz) {
                if(i1.y > 0) {
                    rx2 = fix16ToFix32(i1.x);
                    rz2 = fix16ToFix32(i1.y);
                } else {
                    rx2 = fix16ToFix32(i2.x);
                    rz2 = fix16ToFix32(i2.y);
                }
            }
        }

        // do perspective transformation

	fix32 width_scale = fix32Mul(FIX32(W), HFOV);
	fix32 height_scale = fix32Mul(FIX32(H), VFOV);
	
	
        fix32 xscale1 = div32(width_scale,
			      max(FIX32(0.1), rz1));
        fix32 yscale1 = div32(height_scale,
			      max(FIX32(0.1), rz1));
        fix32 xscale2 = div32(width_scale,
			      max(FIX32(0.1), rz2));
        fix32 yscale2 = div32(height_scale,
			      max(FIX32(0.1), rz2));

	// transform into screen-space
        s16 x1 = W/2 - (fix32ToInt(fix32Mul(rx1, xscale1)));
        s16 x2 = W/2 - (fix32ToInt(fix32Mul(rx2, xscale2)));
	
	// check if screen-space vertices are actually on-screen
	if(x1 >= x2 || x2 < 0 || x1 > W-1) {
	  continue; 
        } 

        // acquire the floor and ceiling heights, relative to where the player's view is
        fix32 yceil = sect_ceil - ply.where.z;
        fix32 yfloor = sect_floor - ply.where.z;


        // project ceiling and floor heights into screen coordinates
        #define Yaw(y,z) (y+fix16Mul(z,ply.yaw))
        
        s16 y1a = H/2 - (fix32ToInt(fix32Mul(yceil, yscale1)));
        s16 y1b = H/2 - (fix32ToInt(fix32Mul(yfloor, yscale1)));

        s16 y2a = H/2 - (fix32ToInt(fix32Mul(yceil, yscale2)));  // yceil + rz2
        s16 y2b = H/2 - (fix32ToInt(fix32Mul(yfloor, yscale2))); // yfloor + rz2
        
	
        if(y1a > y1b) { continue; }
        if(y2a > y2b) { continue; }
        const sidedef* side = s->left_side ? s->line->left_side : s->line->right_side;
        u8 wall_col = side->middle_col;
        u8 low_col = side->lower_col;
        u8 high_col = side->upper_col;
        
        int dither_wall = 1;

        if(avg_dist < MID_DIST) {
            wall_col = (wall_col << 4 | wall_col);
            low_col = (low_col << 4 | low_col);
            high_col = (high_col << 4 | high_col);
            dither_wall = 0;
        } else if (avg_dist < DARK_DIST) {
            wall_col = ((dark_col_lut[wall_col]) << 4) | wall_col;
            low_col  = ((dark_col_lut[low_col]) << 4)  | low_col;
            high_col = ((dark_col_lut[high_col]) << 4) | high_col;
        } else {
            u8 dark_wall = dark_col_lut[wall_col];
            u8 dark_low = dark_col_lut[low_col];
            u8 dark_high = dark_col_lut[high_col];
            wall_col = (dark_wall << 4) | dark_wall;
            low_col  = (dark_low << 4)  | dark_low;
            high_col = (dark_high << 4) | dark_high;

        }
        

        const linedef* line = s->line;
        int has_back_sector = line->double_sided;

        if(!has_back_sector) {
	  
            int full = insert_span(x1, x2, y1a, y1a, y2a, y2a, y1b, y1b, y2b, y2b, sect_ceil_col, high_col, wall_col, low_col, sect_floor_col, 1, dither_wall, dither_floor);
            if(full) { return full; }
        } else {

            
            int is_left_side = s->left_side;
            const sidedef* back_side = has_back_sector ? (is_left_side ? line->right_side : line->left_side) : NULL;
            const sector* back_sector = back_side->facing_sector;

            fix32 nsceil = back_sector->ceil_height;
            fix32 nsfloor = back_sector->floor_height;

            fix32 nyceil = nsceil - ply.where.z;
            int ny1a = H/2 - (fix32ToInt(fix32Mul(nyceil, yscale1)));
            int ny2a = H/2 - (fix32ToInt(fix32Mul(nyceil, yscale2)));
            fix32 nyfloor = nsfloor - ply.where.z;
            int ny1b = H/2 - (fix32ToInt(fix32Mul(nyfloor, yscale1)));
            int ny2b = H/2 - (fix32ToInt(fix32Mul(nyfloor, yscale2)));
            insert_span(x1, x2, y1a, ny1a, y2a, ny2a, y1b, ny1b, y2b, ny2b, sect_ceil_col, high_col, wall_col, low_col, sect_floor_col, 0, dither_wall, dither_floor);
            
            
        }
    }
    return 0;
}

const subsector* find_player_subsector_from(const bsp_node* node) {
    switch(node->type) {
        case LEAF:
            return node->subsect;
        case NODE: do {
            plane_side side = point_side(&(ply.where), &(node->inner.split));
            if(side == RIGHT_OF_PLANE) { 
                return find_player_subsector_from(node->inner.right);
            } else {
                return find_player_subsector_from(node->inner.left);
            }
        } while(0);
        break;
        default:
        while(1) {
            VDP_drawTextBG(PLAN_A, "Corrupted BSP tree!", 10, 10);
        }
    }
}

const subsector* find_player_subsector() {
    bsp_node* cur_node = &root_node;
    return find_player_subsector_from(&root_node);
}

const sector* find_player_sector() {
    const subsector* subsect = find_player_subsector();
    return subsect->sect;
}

void traverse_all_sectors(sector_callback cb) {
    for(int i = 0; i < num_sectors; i++) {
        cb(&(sectors[i]));
    }
}


int draw_bsp_node(const bsp_node* node) {
    plane_side side;
    switch(node->type) {
        case LEAF:
            return draw_subsector(node->subsect);
            break;
        case NODE: 
            side = point_side(&(ply.where), &(node->inner.split));
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
