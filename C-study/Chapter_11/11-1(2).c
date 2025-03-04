#include <stdio.h>

int main(void)
{
   char str[]={'G','o','o','d',' ','t','i','m','e'};
   int arrlen = sizeof(str)/sizeof(char);
   int i;
   for(i=0; i<arrlen; i++)
    printf("%c", str[i]);
   printf("\n");
   return 0;
}