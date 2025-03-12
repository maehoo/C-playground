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
    //scanf 로 바꾸려면 주소가 와야하기 때문에 애스터리스크를 빼서 (arr[1][0]+1)로 바꾸면 된다.
    printf("%d \n", (*(arr+1))[0][1]);//arr[x] == *(arr + x)
    return 0;
    //
}