#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void swappoint(Point * ptr1, Point * ptr2)
{
    Point tpos={ptr2->xpos,ptr2->ypos};
    ptr2->xpos = ptr1->xpos; ptr2->ypos = ptr1->ypos;
    ptr1->xpos = tpos.xpos; ptr1->ypos = tpos.ypos;
    /*
    Point temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    */
}

int main(void)
{
    Point pos1={2,4};
    Point pos2={5,7};
    printf("pos1 [%d %d]  pos2 [%d %d] \n",pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
    swappoint(&pos1,&pos2);
    printf("pos1 [%d %d]  pos2 [%d %d] \n",pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
    return 0;
}