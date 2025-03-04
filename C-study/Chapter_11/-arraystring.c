#include <stdio.h>

int main(void)
{
    char str[]="Good morning!";
    printf("배열 str의 크기: %lu\n",sizeof(str));
    printf("널 문자 문자형 출력: %c\n",str[13]);
    printf("널 문자 정수형 출력: %d\n",str[13]);
    str[12]='?'; //배열 str에 저장된 문자열 데이터는 변경 가능
    printf("문자형 출력: %s \n", str);
    return 0;
    /*
    컴파일 결과는 14, ' ', 0, good morning?
    이렇게 나온다. 이로써 알 수 있는 것은 널 문자의 아스키 코드 값은 0이고,
    이를 문자의 형태로 출력할 경우, 아무런 출력이 발생하지 않는다.
    */
}