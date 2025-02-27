#include <stdio.h>

int main(void)
{
    int num1;
    printf("한 개의 정수 입력"); 
    scanf("%d", &num1);
    printf("%d",~--num1);
    return 0;
    // 답지는 1의 차이를 num1 = num1 + 1;로 메꾸었다.
}