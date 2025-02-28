#include <stdio.h>

int main(void)
{
    int num,A,B=0;
    double result=0;
    printf("몇 개의 정수 입력?\n");
    scanf("%d", &num);
    while(B<num)
    {
        printf("정수 입력\n");
        scanf("%d", &A);
        result+=A;
        B++;
    }
    printf("평균 : %f\n", result/num);
    return 0;
    
}