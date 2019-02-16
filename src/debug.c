#include <genesis.h>

#include "player.h"
#include "timing.h"

void print_pos() {
  char buf[32];
  sprintf(buf, "x: ");
  fix32ToStr(ply.where.x, buf+3, 3);
  VDP_drawTextBG(PLAN_A, buf, 0, 7);
  sprintf(buf, "y: ");
  fix32ToStr(ply.where.y, buf+3, 3);
  VDP_drawTextBG(PLAN_A, buf, 0, 8);
  sprintf(buf, "z: ");
  fix32ToStr(ply.where.z, buf+3, 3);
  VDP_drawTextBG(PLAN_A, buf, 0, 9);
  sprintf(buf, "ang: ");
  fix16ToStr(ply.angle, buf+5, 1);
  VDP_drawTextBG(PLAN_A, buf, 0, 10);
  sprintf(buf, "sect: %u", ply.cur_sector->sectnum);
  VDP_drawTextBG(PLAN_A, buf, 0, 11);
}

void clear_pos() {
  for(int i = 7; i <= 11; i++){
    VDP_clearTextLineBG(PLAN_A, i);
  }
}

void print_timers() {
  #ifdef TIMING
  char buf[32];
  u32 wall_fill_time = get_timer(WALL_FILL);
  u32 flat_fill_time = get_timer(FLAT_FILL);
  u32 interp_time = get_timer(WALL_INTERP) - wall_fill_time - flat_fill_time;// - wall_fill_time - flat_fill_time;
  u32 clip_time = get_timer(WALL_CLIP) - interp_time - wall_fill_time - flat_fill_time;// - interp_time - wall_fill_time - flat_fill_time;
  u32 trans_time = get_timer(WALL_TRANSFORM);// - flat_fill_time - wall_fill_time - interp_time - clip_time;
  u32 bsp_time = get_timer(BSP_TRAVERSAL);// - flat_fill_time - wall_fill_time - interp_time - clip_time - trans_time;
  //u32 blit_time = get_timer(BLIT);

  //sprintf(buf, "bsp traversal: %4li ms", bsp_time/77);
  //VDP_drawTextBG(PLAN_A, buf, 0, 12);
  sprintf(buf, "wall transform: %4li ms", trans_time/77);
  VDP_drawTextBG(PLAN_A, buf, 0, 13);
  sprintf(buf, "wall clipping: %4li ms", clip_time/77);
  VDP_drawTextBG(PLAN_A, buf, 0, 14);
  sprintf(buf, "wall interp: %4li ms", interp_time/77);
  VDP_drawTextBG(PLAN_A, buf, 0, 15);
  sprintf(buf, "wall fill: %4li ms", wall_fill_time/77);
  VDP_drawTextBG(PLAN_A, buf, 0, 16);
  sprintf(buf, "flat fill: %4li ms", flat_fill_time/77);
  VDP_drawTextBG(PLAN_A, buf, 0, 17);
  //sprintf(buf, "blitting: %4li ms", blit_time/77);
  //VDP_drawTextBG(PLAN_A, buf, 0, 18);
  #endif
}

void clear_timers() {
  for(int i = 12; i <= 18; i++){
    VDP_clearTextLineBG(PLAN_A, i);
  }

}

void print_fps() {
  char buf[32];
  fix32ToStr(getFPS_f(), buf, 1);
  VDP_drawTextBG(PLAN_A, buf, 0, 4);
}

void clear_fps() {
  VDP_clearTextLineBG(PLAN_A, 4);
}