#include <stdio.h>

int addtototal(int num)
{
    static int total;
    total += num;
    return total;
}

int main(void)
{
    int num, i;
    for(i=0;i<3;i++)
    {
        printf("입력%d:",i+1);
        scanf("%d",&num);
        printf("누적: %d \n",addtototal(num));
    }
    return 0;
}