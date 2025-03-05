#include <stdio.h>

int main(void)
{
    char voca[100];
    printf("단어 입력:");
    scanf("%s",voca);
    int i=0,k=0;
    while(voca[i]!='\0')
        i++;
    i-=1;
    for(;i>=0;i--)
    {
        if(k<voca[i])
         k=voca[i];
    }
    printf("아스키코드 제일 큰거 :%c",k);
    return 0;
}