#include <stdio.h>

int main(void)
{
    int arr1[3]={1,2,3};
    double arr2[3]={1.1,2.2,3.3};
    
    printf("%d %g\n",*arr1, *arr2);
    *arr1 += 100;
    *arr2 += 120.5;
    printf("%d %g\n", arr1[0], arr2[0]);
    return 0;
    /*
    배열의 이름은 배열의 시작 주소 값을 의미하며, 형태는 값의 저장이 불가능한 상수이다.
    즉, 배열의 이름(ex : arr1)은 상수 형태의 !포인터! 이다.
    그러므로 배열의 이름도 포인터이기 때문에 배열의 이름을 피연산자로 하는 *연산이 가능하다.
    */
}