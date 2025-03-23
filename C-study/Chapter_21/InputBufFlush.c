#include <stdio.h>

void clearlinefromreadbuffer(void)
{
    while(getchar()!='\n');//getchar()는 

    //입력 버퍼(stdin) 에서 문자 하나를 꺼내서 리턴하는 함수이다.
}
int main(void)
{
    char perid[7];
    char name[10];
    
    fputs("주민번호 앞 6자리 입력: ",stdout);
    fgets(perid,sizeof(perid),stdin);
    clearlinefromreadbuffer();

    fputs("이름 입력: ",stdout);
    fgets(name,sizeof(name),stdin);

    printf("주민번호 : %s\n",perid);
    printf("이름: %s\n",name);
    return 0;
}