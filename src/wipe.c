#include <genesis.h>
#include "common.h"
#include "palette.h"

#define WIDTH 128

u32 frame_for_column[WIDTH];
s16 wiped[WIDTH];


void init_column_delays(u32 cur_frame) {
    for(int i = 0; i < WIDTH; i++) {
        frame_for_column[i] = cur_frame + (random() % 32);
        if(i > 0) {
            if(frame_for_column[i] > frame_for_column[i-1]) {
                frame_for_column[i] = frame_for_column[i-1]+2;
            } else if (frame_for_column[i] < frame_for_column[i-1]) {
                frame_for_column[i] = frame_for_column[i-1]-2;
            }
        }
        wiped[i] = 0;
    }
}


const int move = 4;

int process_columns(u32 cur_frame) {
    int done = 1;

    for(int i = 0; i < WIDTH; i++) {
        if(wiped[i] >= H) {
            continue;
        } else {
            done = 0;
        }

        if(frame_for_column[i] <= cur_frame && wiped[i] < H) {
	        u8* bmp_read = BMP_getReadPointer(i<<1, wiped[i]);
	        u8* bmp_write = BMP_getWritePointer(i<<1, wiped[i]);
            if(wiped[i] == 0) {
                for(int y = 0; y < move; y++){
                    bmp_write[y*128] = TRANSPARENT_IDX;
                    bmp_read[y*128] = TRANSPARENT_IDX;
                }
            }

            int cnt = 160-4-wiped[i];
            bmp_write += (128*move);
            
            for(int y = 0; y < cnt; y++) {
                bmp_write[0] = bmp_read[0];
                bmp_write += 128;
                bmp_read += 128;
            }
            
            
            wiped[i] += move;
        }
    }
    return done;
}

void start_wipe(u32 cur_frame) {
    BMP_setBufferCopy(1);
    init_column_delays(cur_frame);
}

int wipe(u32 cur_frame) {
    //BMP_waitFlipComplete();
    BMP_waitWhileFlipRequestPending();
    int ret = process_columns(cur_frame);

    BMP_flip(0);


    //BMP_flip(1);
    return ret;
}
