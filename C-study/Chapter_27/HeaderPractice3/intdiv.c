#include "stdiv.h"

Div intdiv(int num1, int num2)
{
    Div dval;
    dval.quotient= num1/num2;
    dval.remainder = num1 % num2;
    return dval;
}