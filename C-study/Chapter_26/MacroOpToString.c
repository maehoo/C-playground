#include <stdio.h>

#define STRING(A,B)     #A "의 직업은" #B "입니다."

int main(void)
{
    printf("%s\n",STRING(이동춘, 나무꾼));
    printf("%s\n",STRING(john, hunter));
    return 0;
}