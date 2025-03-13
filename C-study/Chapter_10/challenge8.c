#include <stdio.h>
int b=1;
int recursive(int num)
{
    if(num==0)
    return b;
    b*=2;
    return recursive(num-1);
}
int main(void)
{
    int a;
    printf("2의 몇제곱 출력?");
    scanf("%d", &a);
    printf("2의 %d제곱의 값: %d",a,recursive(a));
    return 0;
}