#include <stdio.h>

#define COMPARE(X,Y)  ((X>Y) ? (X) : (Y))

int main(void)
{
    int A,B;
    printf("두 개의 정수 입력");
    scanf("%d %d", &A,&B);
    printf("더 큰 정수 : %d\n",COMPARE(A,B));
    return 0;
}