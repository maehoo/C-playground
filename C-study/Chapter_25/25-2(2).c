#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int maxlen = 5;
    int * arr = (int *)malloc(sizeof(int) * maxlen);
    int i=0;
    int A;
    while(1)
    {
        scanf("%d",&A);
        if(A == -1)
        break;
        arr[i] = A;
        i++;
        if(i == maxlen)
        {
            maxlen +=3;
        }
        arr = (int *)realloc(arr, sizeof(int) * maxlen);
    }
    int j;
    for(j=0;j<i;j++)
    {
        printf("%d ",arr[j]);
    }
    free(arr);
    return 0;
}