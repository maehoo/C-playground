#include <stdio.h>

int main(void)
{
    int sum=0, num=0;

    while(1)
    {
        sum+=num;
        if(sum>5000)
            break;
        //break문은 break문을 가장 가까이서 감싸고 있는 !반복문! 하나를 빠져 나오게 한다.
        num ++;
    }
    printf("sum : %d \n",sum);
    printf("num : %d \n",num);
    return 0;
}