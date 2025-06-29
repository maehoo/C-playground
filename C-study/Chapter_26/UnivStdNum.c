#include <stdio.h>
#define STNUM(Y,S,P) Y##S##P

int main(void)
{
    printf("학번 : %d\n",STNUM(10,65,075));
    //##연산자로 붙여서 표현 가능
    return 0;
}