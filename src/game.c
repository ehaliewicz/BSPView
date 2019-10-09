#include <genesis.h>
#include "bsp.h"
#include "player.h"
#include "map.h"
#include "draw.h"
#include "common.h" 
#include "debug.h"
#include "span_buf.h"
#include "sector.h"
#include "sector_effects.h"
#include "palette.h"
#include "wipe.h"
#include "../res/bg.h"

static int show_fps = 0;
static int show_pos = 0;
static u16 last_joy = 0;
fix16 angle_speed = FIX16(16); //FIX16(1.6); // 16
fix32 move_speed = FIX32(0.6); //FIX32(.05); // 1

u32 framecnt;  

void register_active_sector(sector* sect) {
    if(sect->sector_type != NO_EFFECT) {
        register_sector_to_process(sect);
    }
}

void reset_player() {
    memcpy(&ply, &init_ply, sizeof(player));
  ply.anglecos = fix16ToFix32(cosFix16(fix16ToInt(ply.angle)));
  ply.anglesin = fix16ToFix32(sinFix16(fix16ToInt(ply.angle)));
  
  ply.cur_sector = find_player_sector(&root_node);
  ply.where.z = ply.cur_sector->floor_height + eye_height;
  ply.health = 100;
  ply.bob_offset = 0;
  ply.sway_offset = 0;
}

void init_game() {
    reset_player();
    traverse_all_sectors(&root_node, &register_active_sector);
    //VDP_drawBitmap(PLAN_A, )
    VDP_setPalette(PAL2, bg.palette->data);
    u16 base_tile = TILE_ATTR_FULL(PAL2, FALSE, FALSE, FALSE, 0x290); //TILE_USERINDEX);
    VDP_drawImageEx(PLAN_B, &bg, base_tile, 4, 0, 0, DMA);

    BMP_init(0, PLAN_A, 3, 0);
    //VDP_setBPlanAddress(VDP_getAPlanAddress());
    //VDP_setScrollingMode(HSCROLL_PLANE, VSCROLL_PLANE);
    //VDP_setVerticalScroll(PLAN_A, 1);
    BMP_setBufferCopy(0);
    init_palettes();
    load_palette(3, NORMAL_PAL);
}

int player_collides_vertically(sector* sector) {
    return ((sector->floor_height > ply.where.z+KNEE_HEIGHT) ||
            (sector->ceil_height < ply.where.z+HEAD_MARGIN));
}

int player_squished(sector* sector) {
    return (sector->ceil_height < ply.where.z+HEAD_MARGIN);
}

int hurt_palette = 0;
int dead = 0;

void handle_player_input(u16 joy) {
    if((joy & BUTTON_Y || joy & BUTTON_B) && (joy & BUTTON_UP || joy & BUTTON_DOWN)) {
        //sector* sect = find_player_sector(&root_node);
        sector* sect = ply.cur_sector;
        fix32 inc = (joy & BUTTON_DOWN) ? fix32Neg(FIX32(0.5)) : FIX32(0.5);
        if(joy & BUTTON_Y) {
            sect->ceil_height += inc;
        }
        if(joy & BUTTON_B) {
            sect->floor_height += inc;
        }

    } else {

        // move forward or back, with collision detection
        if(joy & BUTTON_UP || joy & BUTTON_DOWN) {
            fix32 oldx = ply.where.x;
            fix32 oldy = ply.where.y;
            fix32 curx = oldx;
            fix32 cury = oldy;

            fix32 speed = (joy & BUTTON_UP) ? move_speed : fix32Neg(move_speed);
            int moved = 0;

            fix32 newx = curx + fix32Mul(speed, ply.anglecos);
            int got_x_collision = 0;


            for(int i = 0; i < ply.cur_sector->num_walls; i++) {
                wall* w = ply.cur_sector->walls[i];
                Vect2D_f32 v1 = vertices[w->v1];
                Vect2D_f32 v2 = vertices[w->v2];
                fix32 oldside = PointSide32(curx, cury, v1.x, v1.y, v2.x, v2.y);
                fix32 newside = PointSide32(newx, cury, v1.x, v1.y, v2.x, v2.y);
                int signold = (oldside < 0 ? -1 : oldside == 0 ? 0 : 1);
                int signnew = (newside < 0 ? -1 : oldside == 0 ? 0 : 1);
                if(signold != signnew) {
                    if(w->back_sector == NULL) {
                        got_x_collision = 1;
                        break;
                    } else if (player_collides_vertically(w->back_sector)) {
                        got_x_collision = 1;
                        break;
                    }
                }
            }

            if(!got_x_collision) {
                moved = 1;
                curx = newx;
            }

            fix32 newy = cury + fix32Mul(speed, ply.anglesin);
            int got_y_collision = 0;

            for(int i = 0; i < ply.cur_sector->num_walls; i++) {
                wall* w = ply.cur_sector->walls[i];
                Vect2D_f32 v1 = vertices[w->v1];
                Vect2D_f32 v2 = vertices[w->v2];
                fix32 oldside = PointSide32(curx, cury, v1.x, v1.y, v2.x, v2.y);
                fix32 newside = PointSide32(curx, newy, v1.x, v1.y, v2.x, v2.y);
                int signold = (oldside < 0 ? -1 : oldside == 0 ? 0 : 1);
                int signnew = (newside < 0 ? -1 : oldside == 0 ? 0 : 1);
                if(signold != signnew) {
                    if(w->back_sector == NULL) {
                        got_y_collision = 1;
                        break;
                    } else if (player_collides_vertically(w->back_sector)) {
                        got_y_collision = 1;
                        break;
                    }
                }
            }

            if(!got_y_collision) {
                moved = 1;
                cury = newy;
            }

            ply.where.x = curx;
            ply.where.y = cury;

            if(moved) {
                // if we've moved, check for new sector
                ply.cur_sector = find_player_sector(&root_node);
                ply.where.z = ply.cur_sector->floor_height + eye_height;
            }
        }
    
    }

    // turn left and right
    if(joy & BUTTON_LEFT) {
        ply.angle -= angle_speed;
        ply.angle = ply.angle & FIX16(1023);
        ply.anglecos = fix16ToFix32(cosFix16(fix16ToInt(ply.angle)));
        ply.anglesin = fix16ToFix32(sinFix16(fix16ToInt(ply.angle)));
    } else if(joy & BUTTON_RIGHT) {
        ply.angle += angle_speed;
        ply.angle = ply.angle & FIX16(1023);
        ply.anglecos = fix16ToFix32(cosFix16(fix16ToInt(ply.angle)));
        ply.anglesin = fix16ToFix32(sinFix16(fix16ToInt(ply.angle)));
    }

    // move up and down
    if(joy & BUTTON_X) {
        ply.where.z += FIX32(0.5);
    } else if (joy & BUTTON_A) {
        ply.where.z -= FIX32(0.5);
    }

}

int bobs[] = {1,1,1,1,1,1,1,1,1,0,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0};
static int bob_idx = 0;
int num_bobs = sizeof(bobs)/sizeof(int);

void run_game() {


    framecnt++; 

    u16 joy = JOY_readJoypad(0);
    if(joy & BUTTON_Z && !(last_joy & BUTTON_Z)) {
        show_fps = show_fps ? 0 : 1;
        //if(!show_fps) { clear_fps(); }
    }
    if(joy & BUTTON_C && !(last_joy & BUTTON_C)) {
        show_pos = show_pos ? 0 : 1;
        //if(!show_pos) { clear_pos(); }
    }
    if(joy & BUTTON_START && !(last_joy & BUTTON_START)) {
        fill = !fill;
    }
    if(joy & BUTTON_MODE && !(last_joy & BUTTON_MODE)) {
        //subpixel = !subpixel;
    }


    last_joy = joy;

    dead = ply.health <= 0;

    process_sector_effects(framecnt);
    
    if(dead) {
        
        if(joy) { // } & BUTTON_START) {
            dead = 0;
            reset_player();
            start_wipe(framecnt++);
            while(1) {
                int done = wipe(framecnt++);
                if(done) {
                    BMP_setBufferCopy(0);
                    hurt_palette = 0;
                    break;
                }
            }
            return;
        }
    } else {
        handle_player_input(joy);
        if(player_squished(ply.cur_sector)) {
            ply.health = max(ply.health-10, 0);
            ply.where.z = max(ply.cur_sector->floor_height+FIX32(1), (ply.cur_sector->ceil_height - HEAD_MARGIN));
            load_palette(3, HURT_PAL);
            hurt_palette = 3;
        } else if (ply.health > 0) {
            ply.where.z = ply.cur_sector->floor_height + eye_height;
        }
        if(hurt_palette == 0) {
            if(ply.health > 0) {
                load_palette(3, NORMAL_PAL);    
            }
            hurt_palette -= 1;
        } else if (hurt_palette > 0) {
            hurt_palette -= 1;
        }
    }


    ply.bob_offset += bobs[bob_idx++] * FIX32(.1);
    if(bob_idx >= num_bobs) { bob_idx = 0; }

    clear_span_buffer();
    clear_clipping_buffers();
    clear_transform_stats();
    clear_vertex_cache();
    BMP_waitWhileFlipRequestPending();
    if(!fill) { BMP_clear(); }
    draw_bsp_node(&root_node);

    
    BMP_flip(1);

    //VDP_waitVSync();
    if(show_fps) {
        print_fps();
    }
    if(show_pos) {
        print_pos();
    }
    //print_transform_stats();
}