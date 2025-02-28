#include <stdio.h>

int main(void)
{
   double d1=1.23e-3;
   double d2=1.23e-4;
   double d3=1.23e-5;
   double d4=1.23e-6;

    printf("%g \n",d1);
    printf("%g \n",d2);
    printf("%g \n",d3);
    printf("%G \n",d4);
    return 0;
    /*
    0.00123
    0.000123
    1.23e-05
    1.23e-06
    %g는 소수점 이하의 자릿수가 늘어나면 e 표기법으로 출력을 한다.
    %g,%G의 차이는 e표기의 대소문자 차이이다.
    */
}