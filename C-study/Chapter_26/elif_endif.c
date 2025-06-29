#include <stdio.h>
#define HIT 7

int main(void)
{
    #if HIT == 5
    puts("매크로 상수 HIT는 현재 5입니다");
    #elif HIT == 6
    puts("매크로 상수 HIT는 현재 6입니다");
    #elif HIT == 7
    puts("매크로 상수 HIT는 현재 7입니다");
    #else
    puts("매크로 상수 HIT는 5,6,7이 아닙니다");
    #endif

    return 0;
}