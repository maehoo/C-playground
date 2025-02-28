#include <stdio.h>

int main(void)
{ 
    int A=0, B;
    int result=0;
    while(A<5)
    {
        printf("정수 입력\n");
        scanf("%d",&B);
        while(B<1)
        {
            printf("1이상의 정수를 입력해 주십시오\n");
            scanf("%d",&B);
        }
        result += B;
        A++;
    }
    printf("모두 더한 값: %d\n", result);
    return 0;
}