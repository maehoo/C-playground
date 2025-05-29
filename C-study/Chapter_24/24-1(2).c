#include <stdio.h>

int main(void)
{
    char str[30];
    FILE *fp = fopen("abc.txt","at");
    printf("그만 입력하고 싶으면 컨트롤 d");
    while(fgets(str,sizeof(str),stdin)!=NULL)
    {
        fputs(str,fp);
    }
    fclose(fp);
    
    char str2[30];
    fp = fopen("abc.txt","rt");
    while(fgets(str2,sizeof(str2),fp)!=NULL)
    {
        fputs(str2,stdout);
    }
    fclose(fp);
    return 0;
}