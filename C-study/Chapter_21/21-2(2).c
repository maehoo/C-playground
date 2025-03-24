#include <stdio.h>
#include <string.h>
void space(char * str)
{
    int i;
    for(i=0;;i++)
    {
        if(str[i]=='\n')
        {
        str[i]='\0';
        break;
        }

    }
}

int main(void)
{
    char str1[20];
    char str2[30];
    char str3[40];
    
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    
    strcpy(str3,str1);
    space(str3);

    strcat(str3,str2);
    
    puts(str3);
    return 0;
}