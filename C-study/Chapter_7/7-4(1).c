#include <stdio.h>

int main(void)
{
   int A,B;
   int sum=0;
   printf("두 개의 정수 A B 입력:");
   scanf("%d %d", &A, &B);
   for(;A<=B;A++)
   {
    sum+= A;
   }
   printf("A부터 B까지의 합 : %d", sum);
   return 0;
}