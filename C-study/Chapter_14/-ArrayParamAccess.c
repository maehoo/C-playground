#include <stdio.h>

void showarayelem(int *param,int len)
{
    int i;
    for(i=0; i<len; i++)
        printf("%d ", param[i]);
    printf("\n");
}
void addarayelem(int *param, int len , int add)
{
    int i;
    for(i=0;i<len; i++)
        param[i] += add;
}
int main(void)
{
    int arr[3]={1,2,3};
    addarayelem(arr, sizeof(arr)/sizeof(int),1);
    showarayelem(arr, sizeof(arr)/sizeof(int));

    addarayelem(arr, sizeof(arr)/sizeof(int),2);
    showarayelem(arr, sizeof(arr)/sizeof(int));
    
    addarayelem(arr, sizeof(arr)/sizeof(int), 3);
    showarayelem(arr, sizeof(arr)/sizeof(int));
    return 0;
    /*
    234
    456
    789
    */
}