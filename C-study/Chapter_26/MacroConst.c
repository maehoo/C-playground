#include <stdio.h>

#define NAME "홍길동"
#define AGE 24
#define PRINTADDR puts("주소: 제주도")

int main(void)
{
    printf("이름 : %s \n", NAME);
    printf("나이: %d \n", AGE);
    PRINTADDR;
    return 0;
}