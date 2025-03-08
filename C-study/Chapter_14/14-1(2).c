#include <stdio.h>

void swap3(int * ptr1,int * ptr2, int *ptr3)
{
    int num0;
    num0 = *ptr3;//num 0 = 30
    *ptr3 = *ptr2; // num3 = 20
    *ptr2 = *ptr1;// num2 = 10
    *ptr1 = num0;// num1= 30
}
int main(void)
{
    int num1=10,num2=20,num3=30;
    swap3(&num1,&num2,&num3);
    printf("%d %d %d", num1, num2, num3);
    return 0;

}