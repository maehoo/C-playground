#include <stdio.h>

int main(void)
{
    int arr[3][2]={{1,2},{3,4},{5,6}};
    printf("%d %d \n", arr[1][0], arr[0][1]); //%d는 변수,상수가 와야함
    printf("%d %d \n", *(arr[2]+1), *(arr[1]+1));
    printf("%d %d \n", (*(arr+2))[0], (*(arr+0))[1]);
    printf("%d %d \n", **arr, *(*(arr+0)+0)); // '[1]'은 그 주소의 값까지 불러오는 일을 한다.
    //arr +2 는 arr+2의 주소를 가져오는거지 애스터리스크를 실행하진 않은 상태이기 때문에 앞에 *를 붙여야 한다.
    return 0; 
}