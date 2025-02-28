#include <stdio.h>

int main(void)
{
    double A, B;
    printf("두개의 실수 입력");
    scanf("%lf %lf", &A,&B);
    printf("%f\n%f\n%f\n%f\n",A+B,A-B,A*B,A/B);
    return 0;
}