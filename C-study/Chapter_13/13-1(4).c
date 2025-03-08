#include <stdio.h>

int main(void)
{
    int arr[6]={1,2,3,4,5,6};
    int *ptr1= arr;
    int *ptr2= &arr[5];
    int tnum,i;
    for(i=0;i<=2;i++)
    {
        tnum= *(ptr1+i); //tnum 안에 ptr1 주소안에 있는 arr[0]의 값인 1이 저장되어있다.
        *(ptr1+i)=*(ptr2-i);
         *(ptr2-i) = tnum;     
    }

    for(i=0; i<=5; i++)
        printf("%d ", arr[i]);
    return 0;
}