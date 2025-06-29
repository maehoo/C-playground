#include <stdio.h>
#define PLUS(a,b,c) (a+b+c)
#define GOP(a,b,c) (a*b*c)

int main(void)
{
    int a,b,c;
    printf("세 개의 정수 입력");
    scanf("%d%d%d",&a,&b,&c);
    
    printf("세 정수의 합 : %d\n",PLUS(a,b,c));
    printf("세 정수의 곱 : %d\n",GOP(a,b,c));
    return 0;
}
