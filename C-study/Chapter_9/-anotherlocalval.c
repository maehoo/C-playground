#include <stdio.h>

int main(void)
{
    int cnt;
    for(cnt=0; cnt<3; cnt++)
    {
        int num=0;
        num ++;
        printf("%d번째 반복, 지역변수 num은 %d\n",cnt+1,num);
    }

    if(cnt==3)
    {
        int num=7;
        //int num=7;을 지우니깐 정말로 컴파일 오류가 나왔다. 지역변수는 중괄호를 벗어나면 사라진다.
        //main 함수 안에서의 for,if중괄호도 포함이다.
        num++;
        printf("if문 내에 존재하는 지역변수 num은 %d\n",num);
    }
    return 0;
}