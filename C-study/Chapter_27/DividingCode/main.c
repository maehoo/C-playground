#include <stdio.h>

extern void increment(void);
extern int getnum(void);

int main(void)
{
    printf("num : %d\n", getnum());
    increment();
    printf("num : %d\n", getnum());
    increment();
    printf("num : %d\n", getnum());
    return 0;
}