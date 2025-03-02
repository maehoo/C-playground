#include <stdio.h>

int bigger(int num1,int num2, int num3)
{
    if(num1>num2)
        return (num1>num3) ? num1 : num3;
    else
        return (num2>num3) ? num2 : num3;
}
int smaller(int num1, int num2, int num3)
{
    if(num1>num2)
        return (num2<num3) ? num2 : num3;
    else
        return (num1<num3) ? num1 : num3;
}
int main(void)
{
    int A,B,C;
    printf("3개의 정수 입력");
    scanf("%d %d %d", &A, &B, &C);
    printf("가장 큰 정수는 %d 가장 작은 정수는 %d\n", bigger(A,B,C), smaller(A,B,C));
    return 0;
}