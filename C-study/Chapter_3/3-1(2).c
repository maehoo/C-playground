#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    printf("정수 3개 입력\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d x %d + %d = %d", num1, num2, num3, num1*num2+num3);
    return 0;
    
}