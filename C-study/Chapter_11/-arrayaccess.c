#include <stdio.h>

int main(void)
{
    int arr[5];  //길이가 5인 int형 1차원 배열
    int sum=0, i;
    
    arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50;
    //1번째요소에 10 2번째요소에 20 ...5번째요소에 50
    //배열의 위치 정보를 명시하는 인덱스 값(ex. [0],[1]...)은 1이 아닌 0에서부터 시작한다.
    for(i=0; i<5; i++)
    sun+= arr[i];

    printf("배열요소에 저장된 값의 합: %d \n", sum);
    return 0;
}