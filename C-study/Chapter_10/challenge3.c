#include <stdio.h>

int main(void)
{
    int A,B,C;
    printf("두 개의 정수 입력");
    scanf("%d %d", &A, &B);
    C=A;
    for(;C>=1;C--)
    {
        if(A%C==0 && B%C==0)
            break;
    }
    printf("최대 공약수 : %d",C);
    return 0;
}