#include <stdio.h>

int main(void)
{
    int str[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("정수 입력");
        scanf("%d", &str[i]);
    }
    int max,min,sum;
    max=min=sum=str[0];
    for(i=1;i<5;i++)
    {
        sum+=str[i];
        if(max<str[i])
        {
            max=str[i];
        }
        if(min>str[i])
        {
            min=str[i];
        }
    }
    
    printf("가장 큰수 :%d 가장 작은 수: %d 총 합: %d", max, min, sum);
    return 0;
}