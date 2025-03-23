#include <stdio.h>

int convcase(int ch)
{
    int diff='a'-'A';
    if(ch>='A'&&ch<='Z')
        return ch+diff;
    else if(ch>='a'&&ch<='z')
        return ch-diff;
    else
        return -1;
}

int main(void)
{
    int ch;
    printf("문자 입력");
    ch=getchar();
    ch=convcase(ch);
    if(ch==-1)
    {
        puts("범위를 벗어난 입력입니다");//printf()	문자열 + 변수까지 출력 가능
                                   //puts() 문자열만 출력, 자동으로 줄바꿈
        return -1; //return 0; 프로그램 정상 종료
                   //return -1; 프로그램 오류 종료
    }
    putchar(ch);
    return 0; 
}