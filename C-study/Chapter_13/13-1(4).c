#include <stdio.h>

int main(void)
{
    int arr[6]={1,2,3,4,5,6};
    int *ptr1= arr;
    int *ptr2= &arr[5];
    int tnum,i;
    for(i=0;i<=2;i++)
    {
        tnum= *(ptr1+i); 
        *(ptr1+i)=*(ptr2-i);
         *(ptr2-i) = tnum;     
    }

    for(i=0; i<=5; i++)
        printf("%d ", arr[i]);
    return 0;
}