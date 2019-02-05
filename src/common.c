#include <genesis.h>
#include "common.h"

fix32 eye_height = FIX32(10);

fix16 vxs16(fix16 x0, fix16 y0, fix16 x1, fix16 y1) {
    return fix16Mul(x0, y1) - fix16Mul(x1, y0);
}

fix32 vxs32(fix32 x0, fix32 y0, fix32 x1, fix32 y1) {
    return fix32Mul(x0, y1) - fix32Mul(x1, y0);
}

fix32 cross16To32(fix16 x0, fix16 y0, fix16 x1, fix16 y1) {
    return (x0 * y1) - (x1 * y0); // 20.12 fixed point
}

#define FRAC12_TO_FRAC6(x) ((fix16)((x) >> 6))

Vect2D_f16 Intersect16(fix16 x1, fix16 y1, fix16 x2, fix16 y2, fix16 x3, fix16 y3, fix16 x4, fix16 y4) {
    fix16 x1minusx2 = x1-x2; // 10.6 fixed point
    fix16 x3minusx4 = x3-x4;
    fix16 y1minusy2 = y1-y2;
    fix16 y3minusy4 = y3-y4;

    //fix16 x3y3crossx4y4 = vxs16(x3,y3, x4,y4);
    fix16 x3y3crossx4y4 = FRAC12_TO_FRAC6(cross16To32(x3,y3, x4,y4));

    //fix16 x1y1crossx2y2 = vxs16(x1,y1, x2,y2);
    fix16 x1y1crossx2y2 = FRAC12_TO_FRAC6(cross16To32(x1,y1, x2,y2));

    fix32 xleftside = cross16To32(x1y1crossx2y2, x1minusx2, x3y3crossx4y4, x3minusx4);  
    //fix16 rightside = vxs16(x1minusx2, y1minusy2, x3minusx4, y3minusy4);
    fix32 rightside = cross16To32(x1minusx2, y1minusy2, x3minusx4, y3minusy4);
    fix16 rightside16 = FRAC12_TO_FRAC6(rightside);
    fix32 yleftside = cross16To32(x1y1crossx2y2, y1minusy2, x3y3crossx4y4, y3minusy4);
    if(rightside16 == 0) {
        rightside16 = (rightside < 0) ? -1 : 1;
    }
    //fix16 x = fix16Div(vxs16(x1y1crossx2y2, x1minusx2, x3y3crossx4y4, x3minusx4), rightside);
    fix16 x = xleftside / rightside16;  //fix16Div(xleftside, rightside);

    //fix16 y = fix16Div(vxs16(x1y1crossx2y2, y1minusy2, x3y3crossx4y4, y3minusy4), rightside);
    fix16 y = yleftside / rightside; //fix16Div(yleftside, rightside);
    return (Vect2D_f16){x, y};
}

Vect2D_f32 Intersect32(fix32 x1, fix32 y1, fix32 x2, fix32 y2, fix32 x3, fix32 y3, fix32 x4, fix32 y4) {
    fix32 x1minusx2 = x1-x2;
    fix32 x3minusx4 = x3-x4;
    fix32 y1minusy2 = y1-y2;
    fix32 y3minusy4 = y3-y4;
    fix32 x3y3crossx4y4 = vxs32(x3,y3, x4,y4);
    fix32 x1y1crossx2y2 = vxs32(x1,y1, x2,y2);

    fix32 rightside = vxs32(x1minusx2, y1minusy2, x3minusx4, y3minusy4);
    fix32 x = fix32Div(vxs32(x1y1crossx2y2, x1minusx2, x3y3crossx4y4, x3minusx4), rightside);

    fix32 y = fix32Div(vxs32(x1y1crossx2y2, y1minusy2, x3y3crossx4y4, y3minusy4), rightside);
    return (Vect2D_f32){x, y};
}