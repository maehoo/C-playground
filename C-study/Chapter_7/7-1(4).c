#include <stdio.h>

int main(void)
{
    int num, A=9;
    printf("몇 단??");
    scanf(" %d", &num);
    while(A>0)
    {
        printf("%d x %d = %d\n", num, A, num*A);
        A--;
    }
    return 0;
}