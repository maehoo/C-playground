#include <stdio.h>

int add(int val);
int num=1;

int main(void)
{
    int num=5;
    printf("num: %d\n",add(3));
    printf("num: %d \n",num+9);
    return 0;
}
int add(int val)
{
    int num=9;
    num+=val;
    return num;
}
//컴파일 결과로 12, 14가 나온다. 이것으로 알 수 있는것은 지역 내에서는 전역변수가 가리워지고,
//지역변수로의 접근이 이루어진다.