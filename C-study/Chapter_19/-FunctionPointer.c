#include <stdio.h>

void simepleadder(int n1, int n2)
{
    printf("%d + %d = %d\n",n1,n2,n1+n2);
}

void showstring(char * str)
{
    printf("%s \n", str);
}

int main(void)
{
    char * str = "Function Pointer";
    int num1= 10, num2= 20;

    void (*fptr1)(int,int) = simepleadder;
    void (*fptr2)(char *) = showstring;

    fptr1(num1,num2);
    fptr2(str);
    return 0;
}
