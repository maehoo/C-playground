#include <stdio.h>

int main (void)
{
    int num1, num2;
    printf("두 개의 정수 입력");
    scanf("%d %d", &num1, &num2);
    printf("몫: %d", num1/num2);
    printf("나머지: %d", num1%num2);
    return 0;
}