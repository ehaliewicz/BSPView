#ifndef GAME_STATE_H
#define GAME_STATE_H

typedef enum {
    MAIN_MENU,
    PAUSE_MENU,
    AUTOMAP,
    IN_GAME
} game_state;

extern int cur_state;

#endif