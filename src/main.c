#include <genesis.h>

int main()
{
	VDP_drawText("Hello Genny World!", 10, 13);

	while(1)
	{        
		VDP_waitVSync();
	}
	return (0);
}
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



//s8 rendered_sectors[NUM_SECTORS];

//void clear_rendered_sectors() {
//  memset(rendered_sectors, 0, sizeof(rendered_sectors));
//}

u8 ytop[W] = {0};
u8 ybottom[W] = {H-1};

void clear_clipping_buffers() {
  memset(ytop, 0, sizeof(ytop));
  memset(ybottom, H-1, sizeof(ybottom));
}



/*
void draw_sector_recursive(int sectorno, int minx, int maxx, int depth) {
  //if(depth >= 5) { return; }
  const sector* const sect = &sectors[sectorno];
  //s8 render_status = rendered_sectors[sectorno];
  rendered_sectors[sectorno]++;


  for(u8 e = 0; e < sect->npoints; e++) {

    //fix16 vx1 = sect->vertex[e+0].x;
    //fix16 vy1 = sect->vertex[e+0].y;
    //fix16 vx2 = sect->vertex[e+1].x;
    //fix16 vy2 = sect->vertex[e+1].y;
    
    fix32 vx1 = sect->vertex[e+0].x;
    fix32 vy1 = sect->vertex[e+0].y;
    fix32 vx2 = sect->vertex[e+1].x;
    fix32 vy2 = sect->vertex[e+1].y;

    //fix16 tx1 = vx1 - ply.where.x;
    //fix16 ty1 = vy1 - ply.where.y;
    //fix16 tx2 = vx2 - ply.where.x;
    //fix16 ty2 = vy2 - ply.where.y;
    fix32 tx1 = vx1 - ply.where.x;
    fix32 ty1 = vy1 - ply.where.y;
    fix32 tx2 = vx2 - ply.where.x;
    fix32 ty2 = vy2 - ply.where.y;

    //fix16 pcos = ply.anglecos;
    //fix16 psin = ply.anglesin;
    fix32 pcos = ply.anglecos;
    fix32 psin = ply.anglesin;

    //fix16 rx1 = fix16Mul(tx1, psin) - fix16Mul(ty1, pcos);
    //fix16 rz1 = fix16Mul(tx1, pcos) + fix16Mul(ty1, psin);
    //fix16 rx2 = fix16Mul(tx2, psin) - fix16Mul(ty2, pcos);
    //fix16 rz2 = fix16Mul(tx2, pcos) + fix16Mul(ty2, psin);
    fix32 rx1 = fix32Mul(tx1, psin) - fix32Mul(ty1, pcos);
    fix32 rz1 = fix32Mul(tx1, pcos) + fix32Mul(ty1, psin);
    fix32 rx2 = fix32Mul(tx2, psin) - fix32Mul(ty2, pcos);
    fix32 rz2 = fix32Mul(tx2, pcos) + fix32Mul(ty2, psin);
			
    if(rz1 <= 0 && rz2 <= 0) { continue; }

    // if it's partially behind the player, clip it against player's view frustum
    if(rz1 <= FIX32(0.5) || rz2 <= FIX32(0.5)) { // rz1 <= 0 || rz2 <= 0
      //continue;
      fix32 nearz = FIX32(0.1); //0.01); // 0.05);
      fix32 farz = FIX32(5);
      fix32 nearside = FIX32(0.01); //0.004);//0.01);
      fix32 farside = FIX32(20);

      // find an intersection between the wall and the approximate edges of the player's view
      //fix32 rx1_32 = fix16ToFix32(rx1);
      //fix32 rz1_32 = fix16ToFix32(rz1);
      //fix32 rx2_32 = fix16ToFix32(rx2);
      //fix32 rz2_32 = fix16ToFix32(rz2); 
      fix32 rx1_32 = rx1;
      fix32 rz1_32 = rz1;
      fix32 rx2_32 = rx2;
      fix32 rz2_32 = rz2;


      Vect2D_f32 i1 = Intersect32(rx1_32, rz1_32, rx2_32, rz2_32, 
				  -nearside, nearz, -farside, farz);
      Vect2D_f32 i2 = Intersect32(rx1_32, rz1_32, rx2_32, rz2_32,  
				  nearside, nearz, farside, farz);

      if(rz1_32 < nearz) { 
        if(i1.y > 0) {
          //rx1 = fix32ToFix16(i1.x);
          //rz1 = fix32ToFix16(i1.y);
          rx1 = i1.x;
          rz1 = i1.y;
        } else {
          //rx1 = fix32ToFix16(i2.x);
          //rz1 = fix32ToFix16(i2.y);
          rx1 = i2.x;
          rz1 = i2.y;
        }
      }
      if(rz2_32 < nearz) {
        if(i1.y > 0) {
          //rx2 = fix32ToFix16(i1.x);
          //rz2 = fix32ToFix16(i1.y);
          rx2 = i1.x;
          rz2 = i1.y;
        } else {
          //rx2 = fix32ToFix16(i2.x);
          //rz2 = fix32ToFix16(i2.y);
          rx2 = i2.x;
          rz2 = i2.y;
        }
      }
    }

    // do perspective transformation
    //fix16 xscale1 = fix16Div(HFOV, max(FIX16(0.05), rz1));
    //fix16 yscale1 = fix16Div(VFOV, max(FIX16(0.05), rz1));
    //fix16 xscale2 = fix16Div(HFOV, max(FIX16(0.05), rz2));
    //fix16 yscale2 = fix16Div(VFOV, max(FIX16(0.05), rz2));
    fix32 xscale1 = fix32Div(HFOV, max(FIX32(0.05), rz1)); // 0.05
    fix32 yscale1 = fix32Div(VFOV, max(FIX32(0.05), rz1)); // 0.05
    fix32 xscale2 = fix32Div(HFOV, max(FIX32(0.05), rz2)); // 0.05
    fix32 yscale2 = fix32Div(VFOV, max(FIX32(0.05), rz2)); // 0.05
    
    //int x1 = W/2 - (fix16ToInt(fix16Mul(rx1, xscale1)));
    //int x2 = W/2 - (fix16ToInt(fix16Mul(rx2, xscale2)));
    int x1 = W/2 - (fix32ToInt(fix32Mul(rx1, xscale1)));
    int x2 = W/2 - (fix32ToInt(fix32Mul(rx2, xscale2)));
    // only render if it's visible

    if(x1 >= x2 || x2 < minx || x1 > maxx) { continue; }

    // acquire the floor and ceiling heights, relative to where the player's view is
    fix32 yceil = sect->ceil - ply.where.z;
    fix32 yfloor = sect->floor - ply.where.z;

    // project ceiling and floor heights into screen coordinates
    #define Yaw(y,z) (y+fix16Mul(z,ply.yaw))
    int y1a = H/2 - (fix32ToInt(fix32Mul(yceil, yscale1)));
    int y1b = H/2 - (fix32ToInt(fix32Mul(yfloor,  yscale1)));


    int y2a = H/2 - (fix32ToInt(fix32Mul(yceil, yscale2)));  // yceil + rz2
    int y2b = H/2 - (fix32ToInt(fix32Mul(yfloor, yscale2))); // yfloor + rz2
			
    s8 neighbor = sect->neighbors[e];
    fix32 nyceil = 0;
    fix32 nyfloor = 0;

    if(neighbor >= 0) {
      nyceil = sectors[neighbor].ceil - ply.where.z;
      nyfloor = sectors[neighbor].floor - ply.where.z;
    }

    int ny1a = H/2 - (fix32ToInt(fix32Mul(nyceil, yscale1)));
    int ny1b = H/2 - (fix32ToInt(fix32Mul(nyfloor,  yscale1)));

    int ny2a = H/2 - (fix32ToInt(fix32Mul(nyceil, yscale2)));
    int ny2b = H/2 - (fix32ToInt(fix32Mul(nyfloor, yscale2)));

    int beginx = max(x1, minx+1); 
    int endx = min(x2, maxx-1);

    int dx = x2-x1;


    if(y1a > y1b) { continue; }
    if(y2a > y2b) { continue; }

    
    if(neighbor < 0) {
      Vect2D_s16 poly[4] = {
        {x2, y2a}, {x2, y2b},
        {x1, y1b}, {x1, y1a}
      };
      BMP_drawPolygon(poly, 4, 0xFF);
      


      if(x1 >= minx && x1 < maxx) {
        Line l;
        l.col = 0xFF; 

        s16 ya = y1a;
        s16 cya = clamp(ya, ytop[x1], ybottom[x1]);
        // bottom
        s16 yb = y1b;
        s16 cyb = clamp(yb, ytop[x1],ybottom[x1]);
        // bottom

        l.pt1.x = x1; l.pt1.y = cya; 
        l.pt2.x = x1; l.pt2.y = cyb;
        if(BMP_clipLine(&l)) {
          BMP_drawLine(&l);
        }
      }

      if(x2 < maxx && x2 >= minx) {
        Line l;
        l.col = 0xFF; 

        s16 ya = y2a;
        s16 cya = clamp(ya, ytop[x2], ybottom[x2]);
        // bottom
        s16 yb = y2b;
        s16 cyb = clamp(yb, ytop[x2],ybottom[x2]);
        // bottom

        l.pt1.x = x2; l.pt1.y = cya; 
        l.pt2.x = x2; l.pt2.y = cyb;
        if(BMP_clipLine(&l)) {
          BMP_drawLine(&l);
        }
      }
      
    }

		if(neighbor >= 0) {	  
      if (rendered_sectors[neighbor] <= 3) {
        draw_sector_recursive(neighbor, beginx, endx, depth+1);
      }
    }
  }
  //rendered_sectors[sectorno]++;
}
*/


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
      //aVDP_waitVSync();
		
    }
  return (0);
}
