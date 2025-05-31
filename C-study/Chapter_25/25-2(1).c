#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int A;
    printf("문자열 길이");
    scanf("%d",&A);
    getchar();
    char * str = (char *)malloc(sizeof(char) * (A+1));
    fgets(str,A+1,stdin);
    str[strlen(str)-1] = '\0';
    int len;
    len=strlen(str);
    int i;
    for(i=len;i>0;i--)
    {
        if(str[i] == ' ')
        {
            printf("%s ",&(str[i+1]));
            str[i] = '\0';
        }
    }
    printf("%s",&str[0]);
    free(str);
    return 0;
}