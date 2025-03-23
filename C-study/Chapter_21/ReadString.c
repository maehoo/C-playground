#include <stdio.h>

int main(void)
{
    char str[6];
    int i;
    
    for(i=0;i<3;i++)
    {
        fgets(str, sizeof(str),stdin);
        printf("Read %d: %s \n", i+1,str);
    }
    return 0;
 }
/*
We
Read 1: We

like
Read 2: like
Read 3:
char str[5]로 하면 이런 결과가 나오는데  배열 마지막인 str[4]에 '\0' 이 저장되고 엔터를 치게도면 '\n' 가 나오는데
이것을 Read3에서 읽어버리게 되면서 결과가 이렇게 나온다.
*/