#include <stdio.h>

int main(void)
{
    int arr2d[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int (*ptr2d)[4]=arr2d;
    int (*ptr3d)[4]=ptr2d;
    int i,j,a,b;
    for(i=0;i<=3;i++) // 90도 돌리기
    {
        for(j=0;j<=3;j++)
        {
            ptr3d[j][3-i]=ptr2d[i][j];
        }
    }
      for(a=0; a<=3;a++)
    {
        for(b=0;b<=3;b++)
        {
            printf("%d ",ptr2d[a][b]);
        }
        printf("\n");
    }
    
}