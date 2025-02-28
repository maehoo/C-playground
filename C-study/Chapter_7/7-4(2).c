#include <stdio.h>

int main(void)
{
    int n,num;
    int sum=1;
    printf("숫자 몇의 팩토리얼");
    scanf("%d", &n);
    for(num=1;num<=n;num++)
    {
        sum *= num;
    }
    printf("%d!의 값: %d", n, sum);
    return 0;
}