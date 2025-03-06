#include <stdio.h>

int main(void)
{
    int arr[5]={1,2,3,4,5};
    int *ptr = arr;
    int i;
    for(i=1;i<=5;i++)
    {
        (*ptr)+=2;
        printf("%d ",(*ptr));
        ptr +=1;
    }
    return 0;
}