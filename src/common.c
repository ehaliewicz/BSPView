#include <genesis.h>
#include "common.h"


fix32 vxs32(fix32 x0, fix32 y0, fix32 x1, fix32 y1) {
    return fix32Mul(x0, y1) - fix32Mul(x1, y0);
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