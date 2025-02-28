#include <stdio.h>

int main(void)
{
   printf("%-12s %14s %10s\n","이 름", "전공학과", "학년");
   printf("%-12s %14s %10s\n","XXXX", "XXXXXX", "XXX");
   return 0;
   /*
   문자열 입력는 %s이다.
   %9d  필드 폭을 9칸 확보하고, 오른쪽 정렬
   %-9d 필드 폭을 9칸 확보하고 ,왼쪽 정렬
   */
}