#include "span_buf.h"
#include "draw.h"
#include "common.h"

#define MAX_SPANS 128

typedef struct span span;

// represents a portion of the screen,
//from and including x1, and up to but not including x2
struct span {
    int x1, x2;
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

void draw_span(int orig_x1, int orig_x2, int y1a, int y1b, int y2a, int y2b, int draw_x1, int draw_x2, u8 ceil_col, u8 wall_col, u8 floor_col) {
    
    
    draw_x2 -= 1;
    

    fix32 top_dy = FIX32(y2b-y1b);
    fix32 bot_dy = FIX32(y2a-y1a);
    fix32 dx = FIX32(orig_x2-orig_x1);


    // interpolate wall heights if we clipped this wall segment
    if(draw_x1 != orig_x1) {
        fix32 top_slope = fix32Div(top_dy, dx);
        fix32 bot_slope = fix32Div(bot_dy, dx);
        fix32 fx_y1a = FIX32(y1a);
        fix32 fx_y1b = FIX32(y1b);
        fix32 ddx = FIX32(draw_x1-orig_x1); 
        fix32 change_top_y = fix32Mul(top_slope, ddx);
        y1a = fix32ToRoundedInt(fx_y1a+change_top_y);
        fix32 change_bot_y = fix32Mul(bot_slope, ddx);
        y1b = fix32ToRoundedInt(fx_y1b+change_bot_y);
    }

    if(draw_x2 != orig_x2) {
        fix32 top_slope = fix32Div(top_dy, dx);
        fix32 bot_slope = fix32Div(bot_dy, dx);
        fix32 fx_y2a = FIX32(y2a);
        fix32 fx_y2b = FIX32(y2b);
        fix32 ddx = FIX16(draw_x2-orig_x2);
        fix32 change_top_y = fix32Mul(top_slope, ddx);
        y2a = fix32ToRoundedInt(fx_y2a+change_top_y);
        fix32 change_bot_y = fix32Mul(bot_slope, ddx);
        y2b = fix32ToRoundedInt(fx_y2b+change_bot_y);
    }

    // draw polygons instead of columns for now
    Vect2D_s16 poly[4] = {{draw_x2, y2a}, {draw_x2, y2b}, {draw_x1, y1b}, {draw_x1, y1a}};
    BMP_drawPolygon(poly, 4, wall_col);
    Vect2D_s16 top[4] = {{draw_x2, ytop[draw_x2]}, {draw_x2, y2a}, {draw_x1, y1a}, {draw_x1, ytop[draw_x1]}};
    BMP_drawPolygon(top, 4, ceil_col);
    Vect2D_s16 bot[4] = {{draw_x2, y2b}, {draw_x2, ybottom[draw_x2]}, {draw_x1, ybottom[draw_x2]}, {draw_x1, y1b}}; // H-1
    BMP_drawPolygon(bot, 4, ceil_col);

    //Vect2D_s16 poly[4] = {{orig_x2, y2a}, {orig_x2, y2b}, {orig_x1, y1b}, {orig_x1, y1a}};
    //BMP_drawPolygon(poly, 4, wall_col);
    //Vect2D_s16 top[4] = {{orig_x2, ytop[orig_x2]}, {orig_x2, y2a}, {orig_x1, y1a}, {orig_x1, ytop[orig_x1]}};
    //BMP_drawPolygon(top, 4, ceil_col);
    //Vect2D_s16 bot[4] = {{orig_x2, y2b}, {orig_x2, ybottom[orig_x2]}, {orig_x1, ybottom[orig_x1]}, {orig_x1, y1b}};
    //BMP_drawPolygon(bot, 4, floor_col);

    //fixed_wall(draw_x1, draw_x2, y1a, y2a, y1b, y2b, ceil_col, wall_col, floor_col);
}

int insert_span(int x1, int x2, int y1a, int y2a, int y1b, int y2b, u8 ceil_col, u8 wall_col, u8 floor_col) {
  int orig_x1 = x1;
  int orig_x2 = x2;
  span *old,*current, *n;
  
  
  //return;
  if(span_buf_head == NULL) { return 1; }

  for (old = NULL, current = span_buf_head;
       current != NULL;
       old = current, current = current->next) {
      
    if (current->x2 <= x1) { // case 1
      continue;
    }
    
    if (current->x1 < x1) {
      if (current->x2 <= x2) { // case 2
        draw_span(orig_x1, orig_x2, y1a, y1b, y2a, y2b, x1, current->x2, ceil_col, wall_col, floor_col);
        current->x2 = x1;
      }
      else { // case 3
        draw_span(orig_x1, orig_x2, y1a, y1b, y2a, y2b, x1, x2, ceil_col, wall_col, floor_col);
        n = alloc_span();
        n->next = current->next;
        current->next = n;
        n->x2 = current->x2;
        current->x2 = x1;
	    n->x1 = x2;
        return 0;
      }
    } else {
      if (current->x1>=x2) { // case 6
        return 0;
      }
      
      if (current->x2<=x2) { // case 4
	
        draw_span(orig_x1, orig_x2, y1a, y1b, y2a, y2b, current->x1,current->x2, ceil_col, wall_col, floor_col);
        n=current->next;
        free_span(current);
        
        if (old) { 
	        old->next=n;
        } else {
	        span_buf_head = n;
        }
        current=n;
        if (current==NULL) {
	        return 0;
	    }
      } else { // case 5
	    draw_span(orig_x1, orig_x2, y1a, y1b, y2a, y2b, current->x1, x2, ceil_col, wall_col, floor_col);
        current->x1 = x2;
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
