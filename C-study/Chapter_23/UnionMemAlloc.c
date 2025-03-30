#include <stdio.h>

typedef struct sbox
{
    int mem1;
    int mem2;
    double mem3;
} Sbox;

typedef union ubox
{
    int mem1;
    int mem2;
    double mem3;
} Ubox;

int main(void)
{
    Sbox sbx;
    Ubox ubx;
    printf("%p %p %p\n",&sbx.mem1,&sbx.mem2,&sbx.mem3);
    printf("%p %p %p\n",&ubx.mem1,&ubx.mem2,&ubx.mem3);
    return 0;
    /*
    결과
    0x16bdc3418 0x16bdc341c 0x16bdc3420
    0x16bdc3410 0x16bdc3410 0x16bdc3410
    구조체를 구성하는 멤버는 각각 할당이 된다.
    공용체를 구성하는 멤버는 각각 할당되지 않고,
     그 중 크기가 가장 큰 멤버의 변수만 하나 할당되어 공유한다.
    */
}