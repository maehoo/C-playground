#include <stdio.h>

int main(void)
{
    int ch1;
    scanf("%d",&ch1);
    printf("%c",ch1);
    return 0; 
    /*
    char ch1;
    scanf("%s",&ch1);
    을 하고 65를 입력하면 앞에 6만 저장한다.
    scanf에서 char은 문자 하나만 저장 가능하다고 한다.
    */
}