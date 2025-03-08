#include <stdio.h>

int main(void)
{
    int A,i=0,sum=1;
    scanf("%d",&A);
   
    while(1)
    {
        if(A/sum==0)
            break;
       sum*=2;
       i+=1;
    }
    int b,tsum=1;
    for(;i>=1;i--)
    {
        tsum=1;
        for(b=1;b<=i;b++) 
        {
            if(b==i)
                break;
            tsum*=2;
        }
        if(A>=tsum)
        {
            printf("1");
            A-=tsum;
        }
        else
            printf("0");
    }
    return 0;
   

    
}