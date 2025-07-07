#include <stdio.h>
#include "stdiv.h"

extern Div intdiv(int num1, int num2);

int main(void)
{
    Div val = intdiv(5,2);
    printf("목 : %d \n",val.quotient);
    printf("나머지 : %d\n",val.remainder);
    return 0;
}