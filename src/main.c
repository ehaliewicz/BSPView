#include <genesis.h>

#include "player.h"
#include "common.h"
#include "sector.h"
#include "palette.h"
#include "span_buf.h"
#include "draw.h"

#include "map.h"

void vline(int x, int y1, int y2, int top_col, int mid_col, int bot_col) {

  if(y2 == y1) {
    BMP_setPixelFast(x, y1, mid_col);
  } else if (y2 > y1) {
    BMP_setPixelFast(x, y1, top_col);	
    Line l; 
    l.col = mid_col;
    l.pt1.x = x;
    l.pt1.y = y1+1;
    l.pt1.x = x;
    l.pt2.y = y2-1;
    BMP_drawLine(&l);
    BMP_setPixelFast(x, y2, bot_col);
  }
}




void print_pos() {
  char buf[32];
  sprintf(buf, "x: ");
  fix32ToStr(ply.where.x, buf+3, 3);
  BMP_drawText(buf, 0, 2);
  sprintf(buf, "y: ");
  fix32ToStr(ply.where.y, buf+3, 3);
  BMP_drawText(buf, 0, 3);
  sprintf(buf, "z: ");
  fix32ToStr(ply.where.z, buf+3, 3);
  BMP_drawText(buf, 0, 4);
  sprintf(buf, "ang: ");
  fix16ToStr(ply.angle, buf+5, 3);
  BMP_drawText(buf, 0, 5);
  sprintf(buf, "sect: %lu", ply.cur_sector->sectnum);
  BMP_drawText(buf, 0, 6);
}

void clear_fps() {
  BMP_clearText(0, 1, 10);
}
void clear_pos() {
  BMP_clearText(0, 2, 10);
  BMP_clearText(0, 3, 10);
  BMP_clearText(0, 4, 10);
  BMP_clearText(0, 5, 10);
  BMP_clearText(0, 6, 10);
}



int main()
{

  

  BMP_init(0, PLAN_A, 3, 0);
  
  BMP_setBufferCopy(0);

  loadPalette(3);

  int show_fps = 0;
  int show_pos = 0;
  
  int to_clear_pos = 0;
  int to_clear_fps = 0;

  fix32 angle_speed = FIX32(1);
  fix32 move_speed = FIX32(1);

  ply.anglecos = fix16ToFix32(cosFix16(fix16ToInt(ply.angle)));
  ply.anglesin = fix16ToFix32(sinFix16(fix16ToInt(ply.angle)));
  u16 last_joy = 0;
  
  ply.cur_sector = find_player_sector(&root_node);

  while(1)
    {     
      u16 joy = JOY_readJoypad(0);
      if(joy & BUTTON_Z && !(last_joy & BUTTON_Z)) {
	      show_fps = show_fps ? 0 : 1;
        if(!show_fps) { to_clear_fps = 2; }
      }
      if(joy & BUTTON_C && !(last_joy & BUTTON_C)) {
        show_pos = show_pos ? 0 : 1;
        if(!show_pos) { to_clear_pos = 2; }
      }
      last_joy = joy;
		
      if((joy & BUTTON_Y || joy & BUTTON_B) && 
         (joy & BUTTON_UP || joy & BUTTON_DOWN)) {
        //sector* sect = find_player_sector(&root_node);
        sector* sect = ply.cur_sector;
        fix32 inc = (joy & BUTTON_DOWN) ? fix32Neg(FIX32(0.5)) : FIX32(0.5);
        if(joy & BUTTON_Y) {
          sect->ceil_height += inc;
        }
        if(joy & BUTTON_B) {
          sect->floor_height += inc;
        }
        ply.where.z = ply.cur_sector->floor_height + EYE_HEIGHT;
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
            ply.where.z = ply.cur_sector->floor_height + EYE_HEIGHT;
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


      BMP_clear();

      reset_span_buffer();
      clear_clipping_buffers();

      if(to_clear_fps) {
        clear_fps();
        to_clear_fps--;
      }
      if(to_clear_pos) {
        clear_pos();  
        to_clear_pos--;      
      }

      draw_bsp_node(&root_node);

      //BMP_waitWhileFlipRequestPending();
		
      if(show_fps) {
	      BMP_showFPS(1);
      }
      if(show_pos) {
        print_pos();
      }
      
      BMP_flip(0);
      //VDP_waitVSync();
		
    }
  return (0);
}
