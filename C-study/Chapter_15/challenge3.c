#include <stdio.h>
int A=0,B=0;
void even (int num,int * ptr)
{
    ptr[9-A]=num;
    A+=1;
}
void odd(int num,int * ptr)
{
    ptr[B]=num;
    B+=1;
}
int main(void)
{
    int arr[10];
    int i,save,a;
    for(i=0;i<=9;i++)
    {
        printf("입력 %d번째",i+1);
        scanf("%d",&a);
        if(a%2==0)
        {
            even(a,arr);//짝수는 우측에
        }
        else if(a%2!=0)
        {
            odd(a,arr);//홀수는 좌측에
        }
    }
    for(i=0;i<=9;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}