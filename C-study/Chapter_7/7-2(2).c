#include <stdio.h>

int main(void)
{
    int A=0,B=0;
    while(A<5)
    {
        while(B<A)
        {
            printf("O ");
            B++;
        }
        printf("*\n");
        B=0;
        A++;
    }
    return 0;
}