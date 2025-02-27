#include <stdio.h>

int main(void)
{
    int num;
    printf("정수 입력\n");
    scanf("%d", &num);
    printf("%d의 제곱은 %d이다", num, num*num);
    return 0;
    
}