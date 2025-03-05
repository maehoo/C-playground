#include <stdio.h>

int main(void)
{
    char str[100];
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0')
        i++;
    printf("길이는 : %d", i);
    return 0;
}