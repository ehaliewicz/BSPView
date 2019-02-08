#ifndef SECTOR_EFFECTS_H
#define SECTOR_EFFECTS_H

#include <genesis.h>
#include "sector.h"


void process_sector_effects(u32 cur_frame);

void register_sector_to_process(sector* sect);

void init_sector_process_list();

#endif