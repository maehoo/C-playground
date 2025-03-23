#include <stdio.h>

int main(void)
{
    char perid[8];
    char name[20];

    fputs("주민번호 앞 6자리 입력:",stdout);
    fgets(perid,sizeof(perid),stdin);
    
    fputs("이름 입력: ",stdout);
    fgets(name,sizeof(name),stdin);

    printf("주민번호 : %s \n",perid);
    printf("이름 : %s\n",name);
}