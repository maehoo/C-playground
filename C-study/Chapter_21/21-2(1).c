#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    fgets(str,sizeof(str),stdin);

    int i,k=0;
    for(i=0;;i++)
    {
        if(str[i]=='\0')
            break;
        if('0'<=str[i] && str[i]<='9')
            k += str[i] - '0';
    }
    printf("%d",k);
    return 0;
}