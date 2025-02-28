#include <stdio.h>

int main(void)
{
    int A=0;
    int sum=0;
   do
   {
        A += 2;
        sum += A; 
   }while(A<100);
   printf("0이상 100이하의 짝수 합: %d", sum);
   return 0;
}