#include <stdio.h>

int main(void)
{
    int arr[3]={11,22,33};
    int * ptr=arr;
    printf("%d %d %d\n",*ptr,*(ptr+1),*(ptr+2));
    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); printf("\n");
    return 0;
    /*
    arr[0]==ptr[0], arr[i]==ptr[i]==*(ptr+i)
    ->arr[i]==*(arr+i)
    arr[i] = 'arr'배열의 'i+1'번째 배열요소
    *(arr+i)= 'arr[0]'주소에 'i'를 더해 'i x sizeof(int)'
              만큼 주소를 이동해 '*'연산으로 메모리 접속
    */
}