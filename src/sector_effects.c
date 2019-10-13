#include <genesis.h>
#include "sector.h"
#include "sector_effects.h"
#include "sector_effect_types.h"
#include "map.h"


// TODO: priority heap if necessary for performance
#define MAX_SECTORS_TO_PROCESS 256
static int num_sectors_to_process;
sector* sectors_to_process[MAX_SECTORS_TO_PROCESS];

void process_sector_type(sector* sect, u32 cur_frame) {
    sector_effect_params parms = sect->sector_params;
    sector_effect_state state = parms.state;
    // default delay to next frame
    u32 delay_to;   // process this sector at this frame
    sect->sector_params.delay_to = cur_frame+1;

    switch(sect->sector_type) {
        case NO_EFFECT: break;

        case LINKED_LIGHT_LEVEL:
            sect->light_level = sectors[sect->sector_params.link]->light_level;
            sect->sector_params.delay_to = cur_frame + 1;
            break;

        case FLICKER:
            if(parms.state == NOT_FLICKERING) {
                sect->sector_params.flicker.remain_flickers = random()%5; //sect->sector_params.flicker.num_flickers;
                sect->sector_params.state = FLICKERING;
                sect->sector_params.delay_to = cur_frame + 1;
                //sect->light_level = 0;
            } else {
                //sect->sector_params.state = NOT_FLICKERING;
                //sect->light_level = 1;
                //sect->sector_params.delay_to = cur_frame + 1;
                
                if(sect->sector_params.flicker.remain_flickers == 0) {
                    sect->sector_params.state = NOT_FLICKERING;
                        sect->light_level = sect->sector_params.flicker.normal_light_level;
                    sect->sector_params.delay_to = cur_frame + random()%10;
                } else {
                    if(sect->light_level != -1) {
                        sect->sector_params.flicker.normal_light_level = sect->light_level;
                        sect->light_level = -1;
                    } else {
                        sect->light_level = sect->sector_params.flicker.normal_light_level;
                    }
                    sect->sector_params.flicker.remain_flickers--;
                    sect->sector_params.delay_to = cur_frame + 1;
                }
                
            }
            break;
        case FLASHING:
            if(parms.state == NORMAL_BRIGHTNESS) {
                sect->sector_params.state = HIGH_BRIGHTNESS;
                sect->sector_params.delay_to = cur_frame + parms.flash.frames_to_flash;
                sect->light_level = parms.flash.flash_light_level;
            } else {
                sect->sector_params.state = NORMAL_BRIGHTNESS;
                sect->sector_params.delay_to = cur_frame + parms.flash.frames_no_flash + (random() % 10);
                sect->light_level = parms.flash.normal_light_level;
            }
            break;
        case CEILING_UP_DOWN:
            if(state == GOING_UP) {
                sect->ceil_height += FIX16(1);
                if(sect->ceil_height >= parms.ceiling_up_down.max_ceil_height) {
                    sect->sector_params.state = GOING_DOWN;
                    sect->sector_params.delay_to = cur_frame + parms.ceiling_up_down.frame_delay_at_transition;
                }
            } else {
                // going down
                sect->ceil_height -= FIX16(1);
                if(sect->ceil_height <= parms.ceiling_up_down.min_ceil_height) {
                    sect->sector_params.state = GOING_UP;
                    sect->sector_params.delay_to = cur_frame + parms.sector_up_down.frame_delay_at_transition;
                }
            }
            break;
        case SECTOR_UP_DOWN:
            if(state == GOING_UP) {
                sect->ceil_height += FIX16(1);
                sect->floor_height += FIX16(1);
                if(sect->floor_height >= parms.sector_up_down.max_floor_height) {
                    sect->sector_params.state = GOING_DOWN;
                    sect->sector_params.delay_to = cur_frame + parms.sector_up_down.frame_delay_at_transition;
                }
            } else {
                // going down
                sect->ceil_height -= FIX16(1);
                sect->floor_height -= FIX16(1);
                if(sect->floor_height <= parms.sector_up_down.min_floor_height) {
                    sect->sector_params.state = GOING_UP;
                    sect->sector_params.delay_to = cur_frame + parms.sector_up_down.frame_delay_at_transition;
                }
            }
            break;

    }
}

int sector_needs_to_be_processed(sector* sect, u32 cur_frame) {
    return sect->sector_params.delay_to <= cur_frame;
}

void process_sector_effects(u32 cur_frame) {
    for(int i = 0; i < num_sectors_to_process; i++) {
        sector* sect = sectors_to_process[i];
        if(sector_needs_to_be_processed(sect, cur_frame)) {
            process_sector_type(sectors_to_process[i], cur_frame);
        }
    }
}

void register_sector_to_process(sector* sect) {
        //while(1) {
        //    char buf[32];
        //    sprintf(buf, "registering sector %i", sect->sectnum);
        //    VDP_drawTextBG(PLAN_A, buf, 10, 10);
        //}
    if(num_sectors_to_process >= MAX_SECTORS_TO_PROCESS) {
        while(1) {
            VDP_drawTextBG(PLAN_A, "Max active sectors already registered!", 10, 10);
        }
    } else {
        sectors_to_process[num_sectors_to_process++] = sect;
    }

}

void init_sector_process_list() {
    num_sectors_to_process = 0;

}