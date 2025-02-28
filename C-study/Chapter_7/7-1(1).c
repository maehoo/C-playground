#include <stdio.h>

int main(void)
{
  int num; 
  int A=0;
  printf("몇번 쓸까요");
  scanf("%d",&num);
  while(A<num)
  {
    printf("Hello World!\n");
    A++;
  }
  return 0;
}