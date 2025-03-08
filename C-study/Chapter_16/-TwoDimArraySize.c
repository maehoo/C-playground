#include <stdio.h>

int main(void)
{
    int arr1[3][4];
    int arr2[7][9];
    printf("세로 3 가로 4 : %lu \n", sizeof(arr1));
    printf("세로 7, 가로 9: %lu \n", sizeof(arr2));
    return 0;
}