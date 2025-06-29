#include <stdio.h>
#define HIT 6

int main(void)
{
    #if HIT == 5
    puts("매크로 상수 HIT는 현재 5입니다");
    #else
    puts("매크로 상수 HIT는 현재 5가 아닙니다");
    #endif

    return 0;
}