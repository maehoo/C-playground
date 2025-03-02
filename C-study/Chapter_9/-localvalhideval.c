#include <stdio.h>

int main(void)
{
    int num=1;
    
    if(num==1)
    {
        int num=7;
        num+=10;
        printf("if문 내 지역변수 num: %d\n",num);
    }
    printf("main함수 내 지역변수 num: %d\n",num);
    return 0;
    /*
    지금 컴파일을하게 되면 결과는 17, 1 이 나오지만 9행을 주석처리하면 11,11이 나온다.
    이로 인해 알 수 있는것은 지역변수는 외부에 선언된 동일한 이름의 변수를 가린다는 것이다.
    즉,9행을 실행하면 if문 내에서는 main 함수의 num이 가리워진다.
    */
}