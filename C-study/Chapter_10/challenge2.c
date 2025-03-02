#include <stdio.h>

int main(void)
{
    int A,B,C;
    printf("몇단부터 몇단까지??");
    scanf("%d %d", &A, &B);
    if(A<B)
    {
        for(;A<=B;A++)
        {
            for(C=1;C<=9;C++)
            {
                printf("%d x %d = %d\n",A,C,A*C);
            }
        }
    }
    else
    {
        for(;B<=A;B++)
        {
            for(C=1;C<=9;C++)
            {
                printf("%d x %d = %d\n",B,C,B*C);
            }
        }
    }
    return 0;
}