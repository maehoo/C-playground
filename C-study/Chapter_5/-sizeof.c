#include <stdio.h>

int main(void)
{
    char ch=9;
    int inum=1052;
    double dnum=3.1415;
    printf("%lu\n", sizeof(ch));
    printf("%lu\n", sizeof(inum));
    printf("%lu\n", sizeof(dnum));

    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(long)); 
    // long은 32비트 시스템에서는 4바이트 64비트 시스템에서는 8바이트로 나온다.
    printf("%lu\n", sizeof(long long));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));

    return 0;
}