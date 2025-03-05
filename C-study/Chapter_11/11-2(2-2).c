#include <stdio.h>
//답지, 참신해서 배우고 싶었다.
int main(void)
{
    char voca[100];
    int len=0, i;
    char temp;

    printf("영단어 입력:");
    scanf("%s",voca);
    while(voca[len]!='\0')
        len++;
    for(i=0;i<len/2;i++)
    {
        temp = voca[i]; //앞의 문자를 저장
        voca[i]=voca[(len-i)-1]; // 뒤의 문자를 앞으로
        voca[(len-i)-1]=temp //앞의 문자를 뒤로
        /*
        앞의 문자를 뒤로, 뒤의 문자를 앞으로를 한번에 진행하면서 반복문 조건에
        i<len/2를 쓴게 인상적이었다. len이 홀수일 경우에는 어차피 단어에서 가운데 문자이기 때문에
        위치변화를 하지 않아도 된다.
        */
    }
    printf("뒤집힌 영단어 : %s \n",voca);
    return 0;
}