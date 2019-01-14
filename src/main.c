#include <genesis.h>

#include "player.h"
#include "common.h"
#include "sector.h"
#include "palette.h"

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




u8 ytop[W] = {0};
u8 ybottom[W] = {H-1};

void clear_clipping_buffers() {
  memset(ytop, 0, sizeof(ytop));
  memset(ybottom, H-1, sizeof(ybottom));
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
}

void clear_pos() {
  BMP_clearText(0, 2, 10);
  BMP_clearText(0, 3, 10);
  BMP_clearText(0, 4, 10);
  BMP_clearText(0, 5, 10);
}



int main()
{

  

  BMP_init(0, PLAN_A, 3, 0);
  
  BMP_setBufferCopy(0);

  loadPalette(3);

  int show_fps = 0;
  int show_pos = 0;
  fix16 angle_speed = FIX16(8);
  fix32 move_speed = FIX32(2);

  ply.anglecos = fix16ToFix32(cosFix16(fix16ToInt(ply.angle)));
  ply.anglesin = fix16ToFix32(sinFix16(fix16ToInt(ply.angle)));
  u16 last_joy = 0;

  while(1)
    {     
      u16 joy = JOY_readJoypad(0);
      if(joy & BUTTON_Z && !(last_joy & BUTTON_Z)) {
	      show_fps = show_fps ? 0 : 1;
      }
      if(joy & BUTTON_C && !(last_joy & BUTTON_C)) {
        show_pos = show_pos ? 0 : 1;
        if(!show_pos) { clear_pos(); }
      }
      last_joy = joy;
		
      if((joy & BUTTON_Y || joy & BUTTON_B) && 
         (joy & BUTTON_UP || joy & BUTTON_DOWN)) {
        sector* sect = find_player_sector(&root_node);
        fix32 inc = (joy & BUTTON_DOWN) ? fix32Neg(FIX32(0.5)) : FIX32(0.5);
        if(joy & BUTTON_Y) {
          sect->ceil_height += inc;
        }
        if(joy & BUTTON_B) {
          sect->floor_height += inc;
        }
      } else {

        if(joy & BUTTON_UP) {
	        ply.where.x += fix32Mul(move_speed, ply.anglecos);
	        ply.where.y += fix32Mul(move_speed, ply.anglesin);
        } else if (joy & BUTTON_DOWN) {
	        ply.where.x -= fix32Mul(move_speed, ply.anglecos);
	        ply.where.y -= fix32Mul(move_speed, ply.anglesin);
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

      clear_clipping_buffers();

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
