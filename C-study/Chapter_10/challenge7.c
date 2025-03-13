#include <stdio.h>

int main(void)
{
    int A;
    
    printf("2의 k제곱 <= n 에서 n 입력:");
    scanf("%d",&A);

    int k,i;
    for(k=0;;k++)
    {
        i=1;
        i<<=k;
        if(i>A)
        {
            k-=1;
            printf("k의 최댓값 %d",k);
            break;
        }
    }
    
}