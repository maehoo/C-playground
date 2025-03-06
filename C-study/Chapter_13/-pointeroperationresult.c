#include <stdio.h>

int main(void)
{   int num=1;
    double num1=1.1;
    int*ptr1=&num;
    double*ptr2=&num1;
    
    printf("%p %p\n", ptr1+1,ptr1+2);
    printf("%p %p \n",ptr2+1, ptr2+2);
    
    printf("%p %p \n", ptr1, ptr2);
    ptr1++;
    ptr2++;
    printf(" %p %p \n",ptr1,ptr2);
    return 0;    
}