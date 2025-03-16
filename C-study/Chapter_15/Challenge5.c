#include <stdio.h>
void app(int *ptr, int num)
{   
  for(;num<=2;num++)
  {
    int tnum;
    if(ptr[num]>ptr[num+1])
    {
        tnum=ptr[num+1];
        ptr[num+1]=ptr[num];
        ptr[num]=tnum;
    }
  }
}
int main(void)
{
    int arr[4];
    int i;
    for(i=0;i<=3;i++)
    {
        scanf("%d",arr+i);
    }
    int a=0;
    for(i=0;i<=3;i++)
    {   
        app(arr,a);
    }
    for(i=0;i<=3;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
}