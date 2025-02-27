#include <stdio.h>

int main(void)
{
    int num = 3;
    num = num<<3; // <<3 은 *2의3제곱과 같다,
    num = num>>2; // <<2 는 /2의2제곱과 같다.
    printf("%d \n", num);
    return 0;
}