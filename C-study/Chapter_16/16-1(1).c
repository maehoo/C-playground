#include <stdio.h>

int main(void)
{
    int arr[3][9];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=1;j<=9;j++)
        {
            arr[i][j-1]= (i+2) * j;
            printf("%d ",arr[i][j-1]);
        }
        printf("\n");
    }
    return 0;
}