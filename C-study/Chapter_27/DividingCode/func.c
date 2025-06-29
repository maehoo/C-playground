#include <stdio.h>

extern int num;

void increment(void)
{
    num++;
}

int getnum(void)
{
    return num;
}
