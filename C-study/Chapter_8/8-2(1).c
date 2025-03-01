#include <stdio.h>

int main(void)
{
    // A x B 
    // continue와 break를 사용하여야 한다.
    int A, B;
    for(A=1; A<10; A++)
    {
        if(A%2==1)
         continue;
        for(B=1; B<10; B++)
        {
            printf(" %d x %d = %d\n", A, B, A*B);
            if(A==B)
            break;
        }
    }
    return 0;
}