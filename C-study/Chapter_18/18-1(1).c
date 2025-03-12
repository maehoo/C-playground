#include <stdio.h>

int main(void)
{
    int *arr1[5];
    int *arr2[3][5];

    int ** ptr = arr1;
    int *(*ptr2)[5] = arr2;
    /*
    '*'(애스터리스크)의 뜻.
    선언의 경우
    애스터리스크는 포인터를 !선언!하기 위해 쓰이는 연산자.!! 
    8행의 int **ptr은 int*형 ptr을 !선언!하겠다는 뜻.
    9행의 경우 길이가[5]인 int*형 배열을 가리키는 포인터를 !선언!하겠다는 뜻.
    */
}