#include <stdio.h>

int main(void)
{
    int ch;
    ch = getchar();
    if(ch<=64)
        printf("error");
    else if(ch<=90)
        putchar(ch+32);
    else if(ch<=96)
        printf("error");
    else if(ch<=122)
        putchar(ch-32);
    else
        printf("error");
    return 0;
}