#include <stdio.h>

int main(void)
{
   char str[]={'G','o','o','d',' ','t','i','m','e'};
   int arrlen = sizeof(str)/sizeof(char);
   /*sizeof(str)은 5행의 문자대로 크기가 9로 나오고
   sizeof(char)은 1이 나온다.
   그래서 arrlen은 9이다*/
   int i;
   for(i=0; i<arrlen; i++)
    printf("%c", str[i]);
   printf("\n");
   return 0;
}