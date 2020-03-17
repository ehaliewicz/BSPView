#include <genesis.h>

#include "player.h"
#include "sector.h"

static char buf[36];

  #define PR(str, var, x, y) do {         \
      sprintf(buf, str, var);             \
      VDP_drawTextBG(PLAN_A, buf, x, y);  \
  } while(0);

void print_pos() {
  PR("max pixel height for wall %i  ", max_pixel_height_for_wall, 0, 5);
  return; 
  sprintf(buf, "x: ");
  fix16ToStr(ply.where.x, buf+3, 3);
  VDP_drawTextBG(PLAN_A, buf, 0, 12);
  sprintf(buf, "y: ");
  fix16ToStr(ply.where.y, buf+3, 3);
  VDP_drawTextBG(PLAN_A, buf, 0, 13);
  sprintf(buf, "z: ");
  fix16ToStr(ply.where.z, buf+3, 3);
  VDP_drawTextBG(PLAN_A, buf, 0, 14);
  sprintf(buf, "ang: ");
  fix16ToStr(ply.angle, buf+5, 1);
  VDP_drawTextBG(PLAN_A, buf, 0, 15);
  sprintf(buf, "sect: %u", ply.cur_sector->sectnum);
  VDP_drawTextBG(PLAN_A, buf, 0, 16);
}

void clear_pos() {
  for(int i = 12; i <= 16; i++){
    //VDP_clearTextLineBG(PLAN_A, i);
  }
}

void print_fps() {
  fix32ToStr(getFrameTime(), buf, 1);
  sprintf(buf+5, "ms  ");
  VDP_drawTextBG(PLAN_A, buf, 0, 4);
  //fix32ToStr(getFPS_f(), buf, 1);
  //VDP_drawTextBG(PLAN_A, buf, 0, 5);
}

void clear_fps() {
  //VDP_clearTextLineBG(PLAN_A, 4);
  VDP_drawTextBG(PLAN_A, "                               ", 0, 4);
  VDP_drawTextBG(PLAN_A, "                               ", 0, 5);

}

void print_transform_stats() {

  return;

  PR("%2i walls transformed", walls_transformed, 0, 5);
  PR("%2i walls clipped after transform", walls_clipped_after_transform, 0, 6);
  PR("%2i walls frustum culled after transform", walls_frustum_culled_after_transform, 0, 7);
  PR("%2i walls projected", walls_projected, 0, 8);
  PR("%2i walls backfacing after projection", projected_backfacing_walls, 0, 9);
  PR("%2i walls frustum culled after projection", walls_frustum_culled_after_projection, 0, 10);
  // PR("%i upside_down walls", upside_down_walls, 0, 11);
  PR("%2i walls not culled", walls_sent_to_screen_clipper, 0, 11);
  PR("%2i portals not culled", portals_sent_to_screen_clipper, 0, 12);


}
#undef PR