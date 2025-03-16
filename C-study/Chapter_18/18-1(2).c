#include <stdio.h>
void simplefuncone(int *ptr1 ,int *ptr2)
void simplefunctwo(int (*ptr3)[4],int(*ptr4)[4]) //int *형 길이가 4인 포인터를 가리키는 포인터 선언

int main(void)
{
    int arr1[3];
    int arr2[4];
    int arr3[3][4];
    int arr4[2][4];
    
    simplefuncone(arr1,arr2);
    simplefunctwo(arr3,arr4);   
}
// 매개변수 포인터 형 맞추기 문제