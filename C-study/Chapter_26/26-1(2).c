#include <stdio.h>
#define PI 3.14
#define AREA(rad)   ((rad*rad)*PI)

int main(void)
{
    int A;
    printf("원의 반지름 입력\n");
    scanf("%d",&A);
    printf("원의 넓이 : %g\n",AREA(A));
    return 0;
}