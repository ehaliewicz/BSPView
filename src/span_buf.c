#include "span_buf.h"
#include "draw.h"
#include "common.h"

#define MAX_SPANS 128

typedef struct span span;

// represents a portion of the screen,
//from and including x1, and up to but not including x2
struct span {
    s16 x1, x2;
    span* next;
};

static span all_spans[MAX_SPANS];

span* free_span_pointer = NULL;

span* span_buf_head = NULL;

static span* alloc_span() {
    if(free_span_pointer != NULL) {
        span* sp = free_span_pointer;
        free_span_pointer = sp->next;
        sp->x1 = -1;
        sp->x2 = -1;
        sp->next = NULL;
        return sp;
    }
    while(1) {
        BMP_drawText("Out of spans!", 10, 20);
    }
    return NULL;
}

static void free_span(span* sp) {
    sp->x1 = -1;
    sp->x2 = -1;
    sp->next = free_span_pointer;
    free_span_pointer = sp;
}



// each span represents an undrawn portion of screen
// when you insert a span, if it intersects with a span in the buffer
// draw the portion of the wall that is intersecting, and remove the
// intersecting portion from the buffer

// the span buffer starts off with a single span that covers the whole screen
// and as we project and draw spans, we remove chunks of that span,
// modifying, removing, and creating entries in the buffer

// eventually, when we have drawn all of the screen, the span buffer
// will be completely empty, and at that point we know we can stop
// trying to draw walls

// the advantage of this approach (versus, e.g. a byte per column
// marking if we have drawn this column of pixels)
// is that we pay this cost only once per span, instead of once per
// each column of pixels

// it also allows us to short-circuit and stop traversing the bsp tree once
// the screen has been drawn.

// this process is slower than checking a single byte in the column
// drawing loop, so it can be slower if there are many small spans,
// but in general, walls are large enough that it significantly improves performance.


/*

cases

     *----*
*--*

resolution: continue

  *-----*
*---*

resolution: draw overlapped portion, update old span, update inserting span, continue



*-----*
*--*

resolution: draw overlapped portion, delete old span, update inserting span, continue



*-----*
 *--*

resolution: draw overlapped portion, delete old span, update inserting span, continue


*-----*
   *--*

resolution: draw overlapped portion, delete old span, update inserting span, exit


*-----*
    *----*

resolution: draw overlapped portion, update old span, exit


*-----*
         *----*

resolution: exit
*/

fix16 fix16Lerp(fix16 v0, fix16 v1, fix16 t) {
    fix32 left = (FIX16(1) - t) * v0; // 20.12
    fix32 right = (t * v1); // 20.12
    return (left+right) >> 6;
}


void draw_two_sided_span(s16 orig_x1, s16 orig_x2, s16 y1a, s16 ny1a, s16 y1b, s16 ny1b, s16 y2a, s16 ny2a, s16 y2b, s16 ny2b, s16 draw_x1, s16 draw_x2, u8 ceil_col, u8 upper_col, u8 lower_col, u8 floor_col) {
    draw_x2 -= 1;
    s16 dx = orig_x2 - orig_x1;


    fix32 fix_y1a = y1a<<16;
    fix32 fix_y1b = y1b<<16;
    fix32 fix_y2a = y2a<<16;
    fix32 fix_y2b = y2b<<16;
    fix32 fix_ny1a = ny1a<<16;
    fix32 fix_ny1b = ny1b<<16;
    fix32 fix_ny2a = ny2a<<16;
    fix32 fix_ny2b = ny2b<<16;

    fix32 top_dy = fix_y2a - fix_y1a; 
    fix32 bot_dy = fix_y2b - fix_y1b;
    fix32 top_ndy = fix_ny2a - fix_ny1a;
    fix32 bot_ndy = fix_ny2b - fix_ny1b;

    fix32 top_slope = top_dy/dx;
    fix32 top_nslope = top_ndy/dx;
    fix32 bot_slope = bot_dy/dx;
    fix32 bot_nslope = bot_ndy/dx;


    // interpolate wall heights if we clipped this wall segment
    
    for(s16 x = orig_x1; x < draw_x1; x++) {
        fix_y1a += top_slope;
        fix_y1b += bot_slope;
        fix_ny1a += top_nslope;
        fix_ny2a += bot_nslope;
    }
    //u8* col_ptr = BMP_getWritePointer(orig_x1<<1, 0);
    
    for(s16 x = draw_x1; x <= draw_x2; x++) {
        u8 border = (x == draw_x1 || x == draw_x2 || x == 0 || x == W-1);
        s16 cytop = ytop[x];
        s16 cybottom = ybottom[x];

        s16 ya = fix_y1a >> 16;
        s16 cya = clamp(ya, cytop, cybottom);
        s16 nya = fix_ny1a >> 16;
        s16 cnya = clamp(nya, cytop, cybottom);

        s16 yb = fix_y1b >> 16;
        s16 cyb = clamp(yb, cytop, cybottom);
        s16 nyb = fix_ny1b >> 16;
        s16 cnyb = clamp(nyb, cytop, cybottom);

        
        // draw ceiling
        vline(x, cytop, cya, ceil_col, fill ? 1 : 0);
        // draw floor
        vline(x, cyb, cybottom, floor_col, fill ? 1 : 0);

        // draw step from ceiling
        vline(x, cya, cnya-1, upper_col, fill ? 1 : border);

        // draw lower step
        vline(x, cnyb+1, cyb, lower_col, fill ? 1 : border);

        ytop[x] = clamp(max(cya, cnya), cytop, H-1);
        ybottom[x] = clamp(min(cyb, cnyb), 0, cybottom);
        

        fix_y1a += top_slope;
        fix_y1b += bot_slope;
        fix_ny1a += top_nslope;
        fix_ny1b += bot_nslope;
    }
}

void draw_one_sided_span(s16 orig_x1, s16 orig_x2, s16 y1a, s16 y1b, s16 y2a, s16 y2b, s16 draw_x1, s16 draw_x2, u8 ceil_col, u8 wall_col, u8 floor_col) {
    draw_x2 -= 1;
    s16 dx = orig_x2 - orig_x1;

    fix32 fix_y1a = y1a<<16; // top left side 16.16
    fix32 fix_y1b = y1b<<16; // bottom left side
    fix32 fix_y2a = y2a<<16; // top right side
    fix32 fix_y2b = y2b<<16; // bottom right side

    fix32 top_dy = fix_y2a - fix_y1a; // top_right - top_left  16.16
    fix32 bot_dy = fix_y2b - fix_y1b; // bottom_right - bottom_left

    fix32 top_slope = top_dy/dx; // 16.16
    fix32 bot_slope = bot_dy/dx;


    // interpolate wall heights if we clipped this wall segment
    
    for(s16 x = orig_x1; x < draw_x1; x++) {
        fix_y1a += top_slope;
        fix_y1b += bot_slope;
    }
    //u8* col_ptr = BMP_getWritePointer(orig_x1<<1, 0);
    
    for(s16 x = draw_x1; x <= draw_x2; x++) {
        u8 border = (x == draw_x1 || x == draw_x2 || x == 0 || x == W-1);
        s16 cytop = ytop[x];
        s16 cybottom = ybottom[x];


        s16 ya = fix_y1a >> 16;
        s16 cya = clamp(ya, cytop, cybottom);

        s16 yb = fix_y1b >> 16;
        s16 cyb = clamp(yb, cytop, cybottom);


        
        // draw ceiling
        vline(x, cytop, cya-1, ceil_col, fill ? 1 : 0); //fill);
        // draw wall
        vline(x, cya, cyb, wall_col, fill ? 1 : border);
        // draw floor
        vline(x, cyb+1, cybottom, floor_col, fill ? 1 : 0); //fill);

        
        ytop[x] = clamp(cya, cytop, H-1);
        ybottom[x] = clamp(cyb, 0, cybottom);

        fix_y1a += top_slope;
        fix_y1b += bot_slope;
    }
}


void draw_span(s16 orig_x1, s16 orig_x2, 
               s16 y1a, s16 ny1a, s16 y1b, s16 ny1b, s16 y2a, s16 ny2a, s16 y2b, s16 ny2b, 
               s16 draw_x1, s16 draw_x2, 
               u8 ceil_col, u8 upper_col, u8 wall_col, u8 lower_col, u8 floor_col, u8 update_vertical_clipping) {
    if(update_vertical_clipping) {
        draw_two_sided_span(orig_x1, orig_x2, y1a, ny1a, y1b, ny1b, y2a, ny2a, y2b, ny2b, draw_x1, draw_x2, ceil_col, upper_col, lower_col, floor_col);
    } else {
        draw_one_sided_span(orig_x1, orig_x2, y1a, y1b, y2a, y2b, draw_x1, draw_x2, ceil_col, wall_col, floor_col);
    }
}


int insert_span(s16 x1, s16 x2, 
                s16 y1a, s16 ny1a, s16 y2a, s16 ny2a, s16 y1b, s16 ny1b, s16 y2b, s16 ny2b, 
                u8 ceil_col, u8 upper_col, u8 wall_col, u8 lower_col, u8 floor_col, u8 insert) {
  s16 orig_x1 = x1;
  s16 orig_x2 = x2;
  span *old,*current, *n;
  u8 update_vert_clipping = !insert;

  
  if(span_buf_head == NULL) { return 1; }

  for (old = NULL, current = span_buf_head;
       current != NULL;
       old = current, current = current->next) {
      
    if (current->x2 <= x1) { // case 1
      continue;
    }
    
    if (current->x1 < x1) {
      if (current->x2 <= x2) { // case 2
        draw_span(orig_x1, orig_x2, y1a, ny1a, y1b, ny1b, y2a, ny2a, y2b, ny2b, x1, current->x2, ceil_col, upper_col, wall_col, lower_col, floor_col, update_vert_clipping);
        if(insert) {
            current->x2 = x1;
        }
      }
      else { // case 3
        draw_span(orig_x1, orig_x2, y1a, ny1a, y1b, ny1b, y2a, ny2a, y2b, ny2b, x1, x2, ceil_col, upper_col, wall_col, lower_col, floor_col, update_vert_clipping);
        if(insert) {
            n = alloc_span();
            n->next = current->next;
            current->next = n;
            n->x2 = current->x2;
            current->x2 = x1;
            n->x1 = x2;
        }
        return 0;

      }
    } else {
      if (current->x1>=x2) { // case 6
        return 0;
      }
      
      if (current->x2<=x2) { // case 4
	
        draw_span(orig_x1, orig_x2, y1a, ny1a, y1b, ny1b, y2a, ny2a, y2b, ny2b, current->x1,current->x2, ceil_col, upper_col, wall_col, lower_col, floor_col, update_vert_clipping);
        
        n=current->next;
        if(insert) {
            free_span(current);
            
            if (old) { 
                old->next=n;
            } else {
                span_buf_head = n;
            }
        }
        current=n;
        if (current==NULL) {
            return 0;
        }
      } else { // case 5
	    draw_span(orig_x1, orig_x2, y1a, ny1a, y1b, ny1b, y2a, ny2a, y2b, ny2b, current->x1, x2, ceil_col, upper_col, wall_col, lower_col, floor_col, update_vert_clipping);
        if(insert) {
            current->x1 = x2;
        }
      }
    }
  }
  return 0;
}


void reset_span_buffer() {
    for(int i = 0; i < MAX_SPANS-1; i++) {
        all_spans[i].next = &(all_spans[i+1]);
    }
    all_spans[MAX_SPANS-1].next = NULL;

    free_span_pointer = &(all_spans[0]);

    // initialize span buffer to contain the whole screen
    span_buf_head = alloc_span();
    span_buf_head->x1 = 0;
    span_buf_head->x2 = W-1;
}
