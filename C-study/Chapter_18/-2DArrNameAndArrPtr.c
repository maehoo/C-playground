#include <stdio.h>

int main(void)
{
    int arr1[2][2]={
        {1,2},{3,4}
    };
    int arr2[3][2]={
        {1,2},{3,4},{5,6}
    };
    int arr3[4][2]={
        {1,2},{3,4},{5,6},{7,8}
    };

    int (*ptr)[2]; //중요 2차원 배열에 대한 포인터 변수 선언시 가로 길이만큼의 (sizeof(자료형) * 가로길이)
                   // 증가 및 감소를 선언해줘야한다.
    int i;

    ptr=arr1;      // 그래야 이 식이 성립
    printf(" ** show 2,2 arr1 **\n");
    for(i=0;i<3;i++)
        printf("%d %d\n", ptr[i][0],ptr[i][1]);

    ptr =arr2;
    printf("** show 3,2 arr2 ** \n");
    for(i=0; i<3; i++)
        printf("%d %d \n", ptr[i][0], ptr[i][1]);

    ptr =arr3;
    printf("** show 4,2 arr3 ** \n");
    for(i=0; i<4; i++)
        printf("%d %d \n", ptr[i][0], ptr[i][1]);
    return 0;
}