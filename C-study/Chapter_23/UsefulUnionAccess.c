#include <stdio.h>

typedef struct abshort
{
    unsigned short upper;
    unsigned short lower;
}  Dbshort;

typedef union rdbuf
{
    int iBuf;
    char bBuf[4];
    Dbshort sBuf;
}  Rdbuf;

int main(void)
{
    Rdbuf buf;
    printf("정수 입력");
    scanf("%d",&buf.iBuf);

    printf("상위 2바이트: %u \n",buf.sBuf.upper);
    printf("하위 2바이트: %u \n",buf.sBuf.lower);
    printf("상위 1바이트 아스키코드: %c\n",buf.bBuf[0]);
    printf("하위 1바이트 아스키코드: %c\n",buf.bBuf[3]);
    return 0;
}
/*
 9행의 공용체 멤버의 크기가 모두 4바이트 이므로 4바이트가 할당된다.
 buf
 1byte      1byte       1byte       1byte
 bBuf[0]    bBuf[1]     bBuf[2]     bBuf[3]
   <-sBuf.upper->    |    <-sBuf.lower->
      <-          iBuf          ->
*/