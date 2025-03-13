#include <stdio.h>

void showallstring(int argc, char * argv[])
{
    int i;
    for(i=0;i<argc; i++)
        printf("%s \n", argv[i]);
}

int main(void)
{
    char * str[3]={
        "C progrmming",
        "C++ programming",
        "JAVA programming"
    };
    showallstring(3,str);
    return 0;
}