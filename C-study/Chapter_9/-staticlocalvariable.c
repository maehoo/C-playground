#include <stdio.h>

void simplefunc(void)
{
    static int num1=0;
    int num2=0;
    num1++, num2++;
    printf("static: %d, local : %d", num1, num2);
}

int main(void)
{
    int i;
    for(i=0;i<3;i++)
    simplefunc();
    return 0;
}
/*컴파일 결과 1,1 2,1 3,1 이 나온다.
static  지역변수는 딱 '1회' 초기화하고 프로그램 종료 시까지 메모리 공간에 존재한다.
전역변수와 static 지역변수의 공통점은 프로그램이 종료 될 때까지 메모리 공간에 남아있는 것이고,
차이점은 static 지역변수는 접근할 수 있는 범위를 하나의 함수로 제한하고 있다.
*/