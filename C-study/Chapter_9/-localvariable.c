#include <stdio.h>

int simplefuncone(void)
{
    int num=10;
    num++;
    printf("simplefuncone num: %d \n",num);
    return 0;
}
int simplefunctwo(void)
{
    int num1=20;
    int num2=30;
    num1 ++, num2--;
    printf(" num1&num2: %d %d",num1, num2);
    return 0;
    //!!int!! simplefunctwo 이므로 반환값이 있어야 하기 때문에 return 0;을 빼게 되면 
    //컴파일 오류가 생기게 된다.
}
int main(void)
{
    int num=17;
    simplefuncone();
    simplefunctwo();
    printf("main num: %d\n", num);
    return 0;
}
/*
지역변수 = 지역변수에서 말하는 '지역'은 중괄호에 의해 형성되는 영역을 뜻하는데 ,
        위의 함수에 선언된 변수 num은 simplefuncone이라는 함수의 중괄호 안에 선언되었으므로 지역
        변수이다. 지역변수는 함수를 빠져나가기 전까지만 유효하다.
        그러므로 simplefuncone 함수를 빠져나가면 지역변수는 자동으로 소멸된다.
        즉 선언된 지역이 다르면 이름이 같아도 문제가 되지 않는다.
*/