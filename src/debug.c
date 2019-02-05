#include <genesis.h>

#include "player.h"

void print_pos() {
  char buf[32];
  sprintf(buf, "x: ");
  fix32ToStr(ply.where.x, buf+3, 3);
  VDP_drawTextBG(PLAN_A, buf, 0, 12);
  sprintf(buf, "y: ");
  fix32ToStr(ply.where.y, buf+3, 3);
  VDP_drawTextBG(PLAN_A, buf, 0, 13);
  sprintf(buf, "z: ");
  fix32ToStr(ply.where.z, buf+3, 3);
  VDP_drawTextBG(PLAN_A, buf, 0, 14);
  sprintf(buf, "ang: ");
  fix16ToStr(ply.angle, buf+5, 1);
  VDP_drawTextBG(PLAN_A, buf, 0, 15);
  sprintf(buf, "sect: %u", ply.cur_sector->sectnum);
  VDP_drawTextBG(PLAN_A, buf, 0, 16);
}

void clear_pos() {
  for(int i = 12; i <= 16; i++){
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