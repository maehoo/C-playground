#include <stdio.h>

int main(void)
{
    int arr[5]={1,2,3,4,5};
    int *ptr=&arr[4];
    int i,sum=0;
    for(i=1;i<=5;i++)
    {
        sum += (*ptr);
        ptr -=1;
    }
    printf("%d",sum);
    return 0;
}