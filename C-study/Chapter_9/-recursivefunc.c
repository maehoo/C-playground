#include <stdio.h>

void recursive(int num)
{
    if(num<=0)
    return ;
/*
return; 과 return 0;
void로 함수를 선언했기 때문에 반환값 없이 return;만 사용하여 함수를 즉시 종료시킬 수 있다.
return 0;는 정수 값을 반환하는 함수에서만 사용할 수 있으며, void 함수에서 return 0;를 사용하면
컴파일 오류가 생긴다. 
*/
    printf("recursive call! %d\n", num);
    recursive(num-1);
}

int main(void)
{
    recursive(3);
    return 0;
}