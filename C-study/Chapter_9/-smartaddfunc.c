#include <stdio.h>

int Add(int num1, int num2) // 인자전달 o 반환 값 o
{
    return num1+num2;
}

void showaddresult(int num) // 인자전달 o 반환 값 x
{
    printf("덧셈결과 출력: %d \n", num);
}
//반환 값이 없다? = 호출한 함수에서 이 함수의 결과를 값으로 활용할 수 없다. 출력만 가능하다.

int readnum(void) // 인자전달 x 반환 값 o
{
    int num;
    scanf("%d", &num);
    return num;
}

void howtousethisprog(void) //인자전달 x 반환 값 x
{
    printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
    printf(" 두 개의 정수를 입력하세요 \n");    
}
int main(void)
{
    int result, num1, num2;
    howtousethisprog();
    num1=readnum();
    num2=readnum();
    
    result = Add(num1,num2);
    showaddresult(result);
    return 0;
}
