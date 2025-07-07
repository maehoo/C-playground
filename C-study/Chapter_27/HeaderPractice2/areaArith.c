#include "basicarith.h"

double trianglearea(double base, double height)
{
    return Div(Mul(base,height),2);
}

double circlearea(double rad)
{
    return Mul(Mul(rad, rad),PI);
}