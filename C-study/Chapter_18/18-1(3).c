#include <stdio.h>
void complexfuncone(int **ptr1,int *(*ptr2)[5])
void complexfunctwo(int ***ptr3, int ***(*ptr4)[5])
int main(void)
{
    int *arr1[3];
    int *arr2[3][5];
    int **arr3[5];
    int *** arr4[3][5];

    complexfuncone(arr1,arr2);
    complexfunctwo(arr3,arr4);
    
}