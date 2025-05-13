#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp = fopen("abc.txt","w");

    char buf[100];
    printf("종료 원할시 컨트롤 + z 혹은 컨트롤 + d\n");
    while((fgets(buf,sizeof(buf),stdin)) !=NULL)//fgets의 반환 값으로 buf의 주소 (char *)가 반환됨.
    {
        fputs(buf,fp);
    }
    fclose(fp);

    char ch;
    FILE * wrt = fopen("abc.txt","r");
    while((ch=fgetc(wrt))!=EOF)
    {
        fputc(ch,stdout);
    }
    fclose(wrt);

    return 0;
}