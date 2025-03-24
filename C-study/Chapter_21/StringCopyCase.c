#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20]="1234567890";
    char str2[20];
    char str3[5];
    /*
    char str2[20]="hello everyone"; 이라고 선언해도 strcpy(str2,str1);
    을 하게 되면 원래 선언한 문자열의 길이와 상관없이 str1의 문자열을 복사한다.
    */
    strcpy(str2,str1);
    puts(str2);

    strncpy(str3,str1,sizeof(str3));
    puts(str3);
    /*
    책에서는 컴파일 결과가 12345???234567890 이렇게 나온다.
    마지막 5번째 문자가 널 문자가 아니어서 이런 결과가 나온다고 한다.
    */

    strncpy(str3,str1,sizeof(str3)-1);
    str3[sizeof(str3)-1]=0;
    puts(str3);
    return 0;
}