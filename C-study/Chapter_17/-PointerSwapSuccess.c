#include <stdio.h>

void swapintptr(int **dp1, int **dp2)
{
    int * temp = *dp1;
    *dp1 = *dp2;//값을 바꾸는 거임 
    //num1 = num2; 이 구문도 num1 안에 있는 값을 num2안에 있는 값으로 대체한다.
    //라는 뜻이다. 똑같이 *dp1 = *dp2 하게 되면  ptr1 =ptr2가 되면서 
    //ptr1 이 가리키는 &num1을 ptr2가 가리키는 &num2로 바꾼다. 라는 뜻이다.!!
    //중요중요! 
    *dp2 = temp;
}
int main(void)
{
    int num1=10, num2=20;
    int *ptr1, *ptr2;
    ptr1=&num1, ptr2=&num2;
    printf("*ptr1, *ptr2 : %d %d\n ",*ptr1,*ptr2);

    swapintptr(&ptr1,&ptr2);
    printf("*ptr1, *ptr2: %d %d ", *ptr1, *ptr2);
    return 0;
}