#include <stdio.h>
#include <stdlib.h>

char * readusername(void)
{
    char * name = (char *)malloc(sizeof(char)*30);
    printf("what's your name");
    gets(name);
    return name;
}

int main(void)
{
    char * name1;
    char * name2;
    name1 = readusername();
    printf("name1: %s \n",name1);
    name2 = readusername();
    printf("name2: %s \n",name2);

    printf("again name1: %s \n ",name1);
    printf("again name2: %s \n",name2);
    free(name1);
    free(name2);
    return 0;
}