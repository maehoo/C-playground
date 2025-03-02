#include <stdio.h>
int num=1;
int add(int a)
{
    num+=a;
    return num;
}
int main(void)
{
    num+=9;
    printf("%d\n",num);
    printf("%d\n",add(9));
    printf("%d",num);
    return 0;
}
/*
컴파일 결과로 10, 19, 19가 나온다. 전역변수를 변화시키면 
다시 1로 돌아오는것이 아닌 연산을 한값 그대로 초기화 되어서 쭉 이어지는 듯하다.
*/