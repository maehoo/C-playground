#include <stdio.h>

int main (void)
{   
    //2의 i제곱보다 작을 때 2의 (i-1)제곱을 scanf한 값에서 빼고 배열요소에 1을 대입.
    int arr[32];
    int *ptr=arr;
    int i,total,B=1;
    scanf("%d", &total);
    for(i=0;;i++)
    {
        if(total<B)
        {
            break;
        }
       B*=2;
    }
    int a,tnum,b=0;
    for(;i>=1;i--)
    {
        tnum=1;
        for(a=1;a<i;a++)
        {
            tnum *= 2;
        }
        
        if(total>=tnum)
        {
            *(ptr+b) = 1;
            total-=tnum;
        }
        else
        {
            *(ptr+b) =0;
        }
        printf("%d",*(ptr+b));
        b+=1;
    }
    return 0;
    
}