#include <stdio.h>

int main(void)
{
    int i,p,sum=0,measure; 
    for(i=2;;i++)//i가 계속 커지면서 소수인지 아닌지 확인시킨다.//measure(약수)가 2여야한다. 자기자신과,1
    {
        measure=0;
        for(p=1;p<=i;p++)
        {
            if(i%p==0)
                measure+=1;
        }
        if(measure==2)
        {
            sum+=1;
            printf("%d ",i);
        }
        if(sum==10)
            break;
    }
    return 0;
}