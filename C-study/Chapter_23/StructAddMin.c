#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

Point addpoint(Point pos1, Point pos2)
{
    Point pos={pos1.xpos+pos2.xpos, pos1.ypos+pos2.ypos};
    return pos;
}

Point minpoint(Point pos1, Point pos2)
{
    Point pos={pos1.xpos-pos2.xpos,pos1.ypos-pos2.ypos};
    return pos;
}

int main(void)
{
    Point pos1={5,6};
    Point pos2={2,9};
    Point result;

    result = addpoint(pos1, pos2);
    printf("[%d %d] \n",result.xpos,result.ypos);
    result = minpoint(pos1,pos2);
    printf("[%d %d] \n",result.xpos,result.ypos);
    return 0;
}