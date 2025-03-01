#include <stdio.h>

int main(void)
{
    int num;
    printf("start!");

    for(num=1;num<20; num++)
    {
        if(num%2==0 || num%3==0)
         continue;
        //continue문은 반복문의 조건검사 위치로 이동하게 된다. 그러므로 밑의 printf문을 실행하지
        //않고 위의 num<20부터 다시 시작하게 된다. 
        printf("%d ", num);
    }
    printf("end! \n");
    return 0;
}