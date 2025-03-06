#include <stdio.h>

int main(void)
{
    int arr[5]={1,2,3,4,5};
    int *ptr = arr;
    int i;
    for(i=0;i<=4;i++)
    {
        *(ptr+i)+=2;
        printf("%d ",arr[i]);
    }
    return 0;
}