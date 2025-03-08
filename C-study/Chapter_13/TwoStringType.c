#include <stdio.h>

int main(void)
{   
    char str1[]= "My String"; //변수 형태의 문자열
    char *str2="Your String" ; //상수 형태의 문자열
    printf("%s %s\n", str1, str2);
    /*
    printf , 인자에 '*str2'가 아닌 왜 'str2'인가?
    '*str2' 를 하게 되면 'str2'는 문자열 앞의 'Y'의 주소값을 갖고 있기 때문에 'Y'만 출력한다.
    하지만 %s하고 'str2'를 하게 되면 컴퓨터가 'str2'의 주소값을 받아 '\0'널 문자가 나올때까지 출력한다.
    그래서 '*'를 빼고 'str2'만 적게 된다.
    */
    str2 = "our string";
    printf("%s %s \n", str1, str2);
    
    str1[0]='X';
    //str2[0]='X';          //주석을 풀면 오류가 뜸.
    /*
    이 외에도 *str2='X'; 를 생각해 보았으나 bus error뜬다. 이유는 str2의 문자열은 읽기 전용 메모리에
    저장되어 있기 때문에 변경 자체가 불가능하다. 
    */
    printf("%s%s \n", str1, str2);
    return 0;
}