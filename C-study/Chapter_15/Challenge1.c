#include <stdio.h>
void even(int *ptr)
{
    int i;
    for(i=0;i<=9;i++)
    {
        if(ptr[i]%2==0)
            printf("%d ",ptr[i]);
    }
}
void odd(int *ptr)
{
    int i;
    for(i=0;i<=9;i++)
    {
        if(ptr[i]%2!=0)
            printf("%d ",ptr[i]);
    }
}
int main(void)
{
    int arr[10];
    int i;
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("짝수 출력:");
    even(arr);
    printf("\n");
    printf("홀수 입력");
    odd(arr);
    return 0;
}