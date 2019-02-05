#include <genesis.h>

#include "player.h"
#include "map.h"
#include "draw.h"
#include "common.h"

static int show_fps = 0;
static int show_pos = 0;
static u16 last_joy = 0;
const fix16 angle_speed = FIX16(16);
const fix32 move_speed = FIX32(1);

void setup_game() {


  ply.anglecos = fix16ToFix32(cosFix16(fix16ToInt(ply.angle)));
  ply.anglesin = fix16ToFix32(sinFix16(fix16ToInt(ply.angle)));
  
  ply.cur_sector = find_player_sector(&root_node);
  ply.where.z = ply.cur_sector->floor_height + eye_height;

}


void run_game() {
    u16 joy = JOY_readJoypad(0);
    if(joy & BUTTON_Z && !(last_joy & BUTTON_Z)) {
        show_fps = show_fps ? 0 : 1;
        if(!show_fps) { clear_fps(); }
    }
    if(joy & BUTTON_C && !(last_joy & BUTTON_C)) {
        show_pos = show_pos ? 0 : 1;
        if(!show_pos) { clear_pos(); }
    }
    
    if(joy & BUTTON_MODE && !(last_joy & BUTTON_MODE)) {
        fill = !fill;
    }

    last_joy = joy;
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
        ply.where.z = ply.cur_sector->floor_height + eye_height;
        } else {

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
                fix32 oldside = PointSide32(curx, cury, w->v1.x, w->v1.y, w->v2.x, w->v2.y);
                fix32 newside = PointSide32(newx, cury, w->v1.x, w->v1.y, w->v2.x, w->v2.y);
                int signold = (oldside < 0 ? -1 : oldside == 0 ? 0 : 1);
                int signnew = (newside < 0 ? -1 : oldside == 0 ? 0 : 1);
                if(signold != signnew && w->back_sector == NULL) {
                    got_x_collision = 1;
                    break;
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
                fix32 oldside = PointSide32(curx, cury, w->v1.x, w->v1.y, w->v2.x, w->v2.y);
                fix32 newside = PointSide32(curx, newy, w->v1.x, w->v1.y, w->v2.x, w->v2.y);
                int signold = (oldside < 0 ? -1 : oldside == 0 ? 0 : 1);
                int signnew = (newside < 0 ? -1 : oldside == 0 ? 0 : 1);
                if(signold != signnew && w->back_sector == NULL) {
                    got_y_collision = 1;
                    break;
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

    if(joy & BUTTON_X) {
        ply.where.z += FIX32(0.5);
    } else if (joy & BUTTON_A) {
        ply.where.z -= FIX32(0.5);
    }



    reset_span_buffer();
    clear_clipping_buffers();

    BMP_waitWhileFlipRequestPending();
    if(!fill) { BMP_clear(); }

    draw_bsp_node(&root_node);

    
    BMP_flip(1);

    VDP_waitVSync();
    if(show_fps) {
        print_fps();
    }
    if(show_pos) {
        print_pos();
    }
    
    
}