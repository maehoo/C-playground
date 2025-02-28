#include <stdio.h>

int main(void)
{
    int total=0, num=0;
    printf("정수 입력 0입력하면 끝");
    scanf("%d", &num);
    total += num;
    while(num!=0)
    {
        printf("정수 입력 0입력하면 끝");
        scanf("%d", &num);
        total+=num;
    }
    printf("합계 : %d",total);
    return 0;
    /*
    int total = 0, num=0;
    
    do
    {
        printf("정수 입력(0 to quit):");
        scanf("%d", &num);
        total +=num;
    }while(num!=0);
    printf("합계: %d \n", total);
    return 0;
    
    */
}