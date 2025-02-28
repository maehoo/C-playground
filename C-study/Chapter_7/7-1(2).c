#include <stdio.h>

int main(void)
{
    int num;
    int A=0;
    printf("양의 정수 입력");
    scanf("%d", &num);
    while(A++<num)
    {
        printf("%d ",3*A);
    }
    return 0;
}