#include <stdio.h>
void maxandmin(int **dmaxptr, int **dminptr, int *arr, int i)
{

    if ((*dmaxptr)[0] < arr[i+1]) // 현재 maxptr보다 큰 값이면 변경
    {
        *dmaxptr = &arr[i+1];
    }

    if ((*dminptr)[0] > arr[i+1]) // 현재 minptr보다 작은 값이면 변경
    {
        *dminptr = &arr[i+1];
    }
}

int main(void)
{
    int arr[5];
    int *maxptr;
    int *minptr;
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    maxptr=arr,minptr=arr;
    for(i=0;i<4;i++)
    {
        maxandmin(&maxptr,&minptr,arr,i); //arr[]의 주소를 보냄
    }
    printf("가장 큰 값: %d 가장 작은 값: %d\n",maxptr[0],minptr[0]);
    printf("%d %d %d %d %d\n", maxptr[0],maxptr[1],maxptr[2],maxptr[3],maxptr[4]);
    return 0;
}