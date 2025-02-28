#include <stdio.h>

int main(void)
{
    int x1,y1,x2,y2;
    printf("좌상단(x1,y1) 입력:");
    scanf(" %d %d", &x1, &y1);
    printf("우하단(x2,y2) 입력:");
    scanf(" %d %d", &x2, &y2);
    printf("직사각형의 넓이=%f", (double)(x2-x1)*(y2-y1));
    return 0;
}
