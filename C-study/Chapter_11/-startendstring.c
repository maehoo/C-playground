#include <stdio.h>

int main(void)
{
    char str[50]="I like C programming";
    printf("string: %s \n", str);

    str[8]='\0';
    printf("string : %s\n",str);
    str[6]='\0';
    printf("string: %s \n",str);
    str[1]=0;
    printf("string: %s \n",str);
    return 0;
    /*컴파일 결과
    I like C programming
    I like C
    I like
    I 
    '\0'은 개행이 아니고 문자열의 끝을 나타낸다. 즉 '\0'은 문자열의 끝을 변경 할 수 있다.
    
    널 문자의 아스키 코드 값은 0이므로 str[8] = '\0';과 
                               str[8] = 0;   는 같은 문장이다.
    */    
}