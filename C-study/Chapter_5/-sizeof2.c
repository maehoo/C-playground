#include <stdio.h>

int main(void)
{
    char num1=1, num2=2, result1=0;
    short num3=300, num4=400, result2=0;

    printf("size of num1 & num2: %lu, %lu\n", sizeof(num1), sizeof(num2));
    printf("size of num3 & num4: %lu, %lu\n", sizeof(num3), sizeof(num4));

    printf("size of char add : %lu\n", sizeof(num1 + num2));
    printf("size of short add : %lu\n", sizeof(num3 + num4));
   /* 값이 4 , 4가 나옴 char 의 덧셈이면 1 short 의 덧셈이면 2가 나와야 하는데 
    왜? 4가 나올까.
    -> CPU가 처리하기에 가장 적합한 크기의 정수 자료형은 int이다. 그래서 형 반환이 일어나 
       int형 데이터로 변환되어 4로 나온다.
    그렇다면 char short는 필요 없는가?
    아니다.
    데이터의 양이 많아서 연산속도보다 데이터의 크기를 줄이는 것이 더 중요한 데이터들은 이를 사용한다.
    */
    result1= num1+ num2;
    result2=num3+num4;
    printf("size of result1 & result2: %lu %lu\n", sizeof(result1), sizeof(result2));
    return 0;
}