#include <stdio.h>

int main(void)
{
    int A, Z;
    int result=0;
    for(A=1; A<10; A++)
    {
        for(Z=1; Z<10; Z++)
        {
            result=(A*10+Z) + (Z*10+A);
            if(result==99)
             printf(" %d + %d = %d \n",(A*10+Z),(Z*10+A),result);
        }
    }
    return 0;
}