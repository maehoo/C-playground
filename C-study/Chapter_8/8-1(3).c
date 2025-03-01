#include <stdio.h>

int main(void)
{
    int num1,num2,num3;
    printf("국어 영어 수학 점수 순서대로 입력");
    scanf("%d %d %d", &num1,&num2,&num3);
    double result=(num1+num2+num3)/3;
    printf("평균 : %f점 등급 :", result);
    if(result>=90)
        printf("A\n");
    else if (result>=80)
        printf("B\n");
    else if (result>=70)
        printf("C\n");
    else if (result>=50)
        printf("D\n");
    else
        printf("F\n");

return 0;
}