#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20]="1234567890";
    char str2[20];
    char str3[5];

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