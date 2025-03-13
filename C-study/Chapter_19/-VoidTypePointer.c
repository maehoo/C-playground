#include <stdio.h>

void sosimplefunc(void)
{
    printf("I'm so simple");
}

int main(void)
{
    int num=20;
    void *ptr;

    ptr = &num;
    printf("%p \n", ptr);

    ptr = sosimplefunc;

    printf("%p \n", ptr);
    return 0;
}