#include <stdio.h>

int main(void)
{
    int arr2d[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    printf("%d \n", **arr2d);
    printf("%d \n", *arr2d[0]);
    printf("%d \n\n", arr2d[0][0]);

    printf("%d \n", *arr2d[1]);
    printf("%d \n\n", arr2d[1][0]);

    printf("%d \n", *arr2d[2]);
    printf("%d \n\n", arr2d[2][0]);

    printf("sizeof(arr2d): %lu\n", sizeof(arr2d));
    printf("sizeof(arr2d[0]): %lu\n",sizeof(arr2d[0]));
    printf("sizeof(arr2d[1]): %lu\n", sizeof(arr2d[1]));
    printf("sizeof(arr2d[2]): %lu\n", sizeof(arr2d[2]));
    return 0;
}