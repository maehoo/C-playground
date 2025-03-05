#include <stdio.h>

int main(void)
{
    int num=10;
    int *ptr1=&num;
    int *ptr2=ptr1;
//ptr1에는 num의 메모리 주소 값이 저장되어 있기때문에 ptr2도 num의 메모리 주소 값을 저장하게 된다.
//그래서 컴파일을 하게 되면 12가 나온다.
    (*ptr1)++;
    (*ptr2)++;
    printf("%d\n",num);
    return 0;
    
}