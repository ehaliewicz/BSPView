#include <genesis.h>

#include "player.h"
#include "menu.h"
#include "game_state.h"
#include "game.h"
#include "vdp.h"



int main() {

  init_vdp();
  init_menu(); 

  while(1) {
    switch(cur_state) {
      case IN_GAME:
        run_game();
        break;
      case MAIN_MENU:
        run_menu();
        break;
    }
  }
    
  return (0);
}
