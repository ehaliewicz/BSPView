#include <genesis.h>
#include "sector.h"
#include "sector_effects.h"
#include "sector_effect_types.h"


// TODO: priority heap if necessary for performance
#define MAX_SECTORS_TO_PROCESS 256
static int num_sectors_to_process;
sector* sectors_to_process[MAX_SECTORS_TO_PROCESS];

void process_sector_type(sector* sect, u32 cur_frame) {
    sector_effect_params parms = sect->sector_params;
    // default delay to next frame
    sect->sector_params.delay_to = cur_frame+1;

    switch(sect->sector_type) {
        case CEILING_UP_DOWN:
            if(parms.ceiling_up_down.state == GOING_UP) {
                sect->ceil_height += FIX32(1);
                if(sect->ceil_height >= parms.ceiling_up_down.max_ceil_height) {
                    sect->sector_params.ceiling_up_down.state = GOING_DOWN;
                    sect->sector_params.delay_to = cur_frame + parms.ceiling_up_down.frame_delay_at_transition;
                }
            } else {
                // going down
                sect->ceil_height -= FIX32(1);
                if(sect->ceil_height <= parms.ceiling_up_down.min_ceil_height) {
                    sect->sector_params.sector_up_down.state = GOING_UP;
                    sect->sector_params.delay_to = cur_frame + parms.sector_up_down.frame_delay_at_transition;
                }
            }
            break;
        case SECTOR_UP_DOWN:
            if(parms.sector_up_down.state == GOING_UP) {
                sect->ceil_height += FIX32(1);
                sect->floor_height += FIX32(1);
                if(sect->floor_height >= parms.sector_up_down.max_floor_height) {
                    sect->sector_params.sector_up_down.state = GOING_DOWN;
                    sect->sector_params.delay_to = cur_frame + parms.sector_up_down.frame_delay_at_transition;
                }
            } else {
                // going down
                sect->ceil_height -= FIX32(1);
                sect->floor_height -= FIX32(1);
                if(sect->floor_height <= parms.sector_up_down.min_floor_height) {
                    sect->sector_params.sector_up_down.state = GOING_UP;
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