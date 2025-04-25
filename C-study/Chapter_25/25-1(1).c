#include <stdio.h>

void func2(int n)
{
    int num3=n+1;
}
void func1(int n)
{
    int num2 = n+1;
    func2(num2);
}

int main(void)
{
    int num1=20;
    func1(num1);
    return 0;
}
/*
func2 함수의 매개변수 n과 지역변수 num3 소멸
func1 함수의 매개변수 n과 지역변수 num2 소멸
main 함수의 지역변수 num1 소멸
*/