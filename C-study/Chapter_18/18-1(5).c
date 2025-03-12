#include <stdio.h>

int main(void)
{
    int arr[2][2][2] = {1,2,3,4,5,6,7,8};
    printf("%d \n", arr[1][0][1]);
    //arr[1][0][1]를 대체할 수 있는 문장 5가지 쓰기
    printf("%d \n", (*(arr+1))[0][1]);
    printf("%d \n", (*(*(arr+1)+0))[1]);
    printf("%d \n", (*(arr[1]+0))[1]);
    printf("%d \n", *(arr[1][0]+1));
    printf("%d \n", (*(arr+1))[0][1]);//arr[x] == *(arr + x)
    return 0;
    //
}