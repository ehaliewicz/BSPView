#include <genesis.h>
#include "game_state.h"
#include "game.h"

void print_menu() {
    VDP_drawTextBG(PLAN_A, "BSP Renderer v0.12", 10, 8);
    VDP_drawTextBG(PLAN_A, "use d-pad to move ", 0, 12);
    VDP_drawTextBG(PLAN_A, "x/a - adjusts camera y-position", 0, 13);
    VDP_drawTextBG(PLAN_A, "y + up/dn - adjusts sector ceiling height", 0, 14);
    VDP_drawTextBG(PLAN_A, "b + up/dn - adjusts sector floor height", 0, 15);
    VDP_drawTextBG(PLAN_A, "z/c - toggles fps display / debug info", 0, 16);
    VDP_drawTextBG(PLAN_A, "mode - toggles wireframe mode", 0, 17);
    VDP_drawTextBG(PLAN_A, "--- press any button ---", 10, 19);
}

void clear_menu() {
  for(int i = 8; i <= 26; i++) {
    VDP_clearPlan(PLAN_A, TRUE);
  }
}

void exit_menu() {
    clear_menu();
}

void run_menu() {
    print_menu();
    u16 joy = JOY_readJoypad(0);
    if(joy != 0) {
        exit_menu();
        cur_state = IN_GAME;
        init_game();
    }
}
