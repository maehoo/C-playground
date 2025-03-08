#include <stdio.h>

int main(void)
{
    int arr[5][5];
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum1=0,sum2=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            sum1 +=arr[i][j]; //철희 총점
        }
        arr[i][4] = sum1;
        for(j=0;j<4;j++)
        {
            sum2 += arr[j][i]; //과목 총점
        }
        arr[4][i] = sum2;
        sum1 =0;
        sum2 =0;
    }
    int sum3=0;
    printf("학생 개인 총점수:");
    for(i=0;i<4;i++)
    {
        printf("%d ",arr[i][4]);
        sum3+=arr[i][4];
    }
    printf("\n");
    printf("과목별 총점수:");
    int sum4=0;
    for(i=0;i<4;i++)
    {
        printf("%d ",arr[4][i]);
        sum4+=arr[4][i];
    }
    arr[4][4]=sum3;
    printf("\n");
    if(sum3==sum4)
     printf("전체 합 점수 : %d",arr[4][4]);
    return 0;
}