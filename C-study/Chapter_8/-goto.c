#include <stdio.h>

int main(void)
{
   int num;
   printf("자연수 입력");
   scanf("%d", &num);
   
   if(num==1)
   goto one;
    else if(num==2)
    goto two;
    else
    goto other;

    one:
    printf("1");
    goto end;
    two:
    printf("2");
    goto end;
    other:
    printf("3 or other");
    end:
    return 0;
   
}