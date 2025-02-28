#include <stdio.h>

int main(void)
{
    int num=1, result=0;
    while(num!=0)
    {
        printf("0이외의 정수 입력:");
        scanf("%d", &num);
        result += num;
    }
    printf("모두 더한 값: %d",result);
    return 0;
}