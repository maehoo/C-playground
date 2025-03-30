#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

void showposition(Point pos)
{
    printf("[%d, %d] \n",pos.xpos,pos.ypos);
}

Point getcurrentposition(void)
{
    Point cen;
    printf("Input current pos: ");
    scanf("%d %d", &cen.xpos,&cen.ypos);
    return cen;
}

int main(void)
{
    Point curpos=getcurrentposition();
    showposition(curpos);
    return 0;
}