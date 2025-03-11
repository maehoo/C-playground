#include <stdio.h>

void showarr2dstyle(int (*arr)[4],int column)
{
    int i, j;
    for(i=0;i<column;i++)
    {
        for(j=0;j<4;j++)
            printf("%d",arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

int sum2darr(int arr[][4], int column) //int (*arr)[4] == int arr[][4] 선언의 의미가 같음
{
    int i, j, sum=0;
    for(i=0;i<column;i++)
    {
        for(j=0;j<4;j++)
            sum+=arr[i][j];
    }
    return sum;
}

int main(void)
{
    int arr1[2][4]={1,2,3,4,5,6,7,8};
    int arr2[3][4]={1,1,1,1,3,3,3,3,5,5,5,5};

    showarr2dstyle(arr1,sizeof(arr1)/sizeof(arr1[0]));
    showarr2dstyle(arr2,sizeof(arr2)/sizeof(arr2[0]));
    printf("arr1의 합: %d \n",sum2darr(arr1,sizeof(arr1)/sizeof(arr1[0])));
    printf("arr2의 합: %d \n",sum2darr(arr2,sizeof(arr2)/sizeof(arr2[0])));
    return 0;
    
}