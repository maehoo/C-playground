#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void orgsymtrans(Point *ptr)
{
    ptr->xpos = (ptr->xpos) * (-1);
    ptr->ypos = (ptr->ypos) * (-1);
}

void showposition(Point pos)
{
    printf("[%d %d] \n", pos.xpos, pos.ypos);
}

int main(void)
{
    Point pos = {7,-5};
    orgsymtrans(&pos);
    showposition(pos);
    orgsymtrans(&pos);
    showposition(pos);
    return 0;
} 