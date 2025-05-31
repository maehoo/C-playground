#include <stdio.h>

int main(void)
{
    char str[30];
    int ch;
    FILE * fp=fopen("simple.txt","rt");
    if(fp==NULL)
    {
        puts("파일오픈 실패");
        return -1;
    }
    ch=fgetc(fp);
    printf("%c\n",ch);
    ch=fgetc(fp);
    printf("%c \n",ch);

    fgets(str,sizeof(str),fp);
    printf("%s",str);
    fgets(str,sizeof(str),fp);
    printf("%s",str);
    //'\n'개행을 기준으로 문자열을 구분한다.

    fclose(fp);
    return 0;
}