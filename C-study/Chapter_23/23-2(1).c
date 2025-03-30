#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

int absolutevalue(int len)
{
    if(len<0)
        len = len* (-1);
    return len;
}
void rectangleextent (Point x1y1, Point x2y2)
{
    int xlen = x1y1.xpos - x2y2.xpos;
    int ylen = x1y1.ypos - x2y2.ypos;
    xlen = absolutevalue(xlen);
    ylen = absolutevalue(ylen);
    printf("직사각형의 넓이 : %d\n",xlen * ylen);
}

void rectanglecoordinate(Point * dptr)
{
    dptr[2].xpos = dptr[0].xpos; dptr[2].ypos = dptr[1].ypos; 
    dptr[3].xpos = dptr[1].xpos; dptr[3].ypos = dptr[0].ypos;
    int i;
    for(i=0;i<4;i++)
        printf("직사각형의 x좌표 y좌표 [%d %d]\n",dptr[i].xpos,dptr[i].ypos);
}

int main(void)
{
    Point xy[4];
    printf("직사각형 좌하단 우상단 좌표");
    scanf("%d %d",&xy[0].xpos,&xy[0].ypos);
    scanf("%d %d",&xy[1].xpos,&xy[1].ypos);
    rectangleextent(xy[0],xy[1]);
    rectanglecoordinate(&xy[0]);
    return 0;
}