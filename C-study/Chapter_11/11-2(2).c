#include <stdio.h>

int main(void)
{
    char voca[100];
    scanf("%s", voca);
    int i=0;
    while(voca[i]!='\0')
        i++; //voca 를 입력하면 i=4가 되겠지
    i-=1;
    for(;i>=0;i--)
    {
        printf("%c",voca[i]);   
    }
    return 0;
    
}