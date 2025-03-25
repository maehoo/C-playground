#include <stdio.h>

struct employee
{
    char name[100];
    char money[100];

}a;

int main(void)
{
    
    printf("이름은?"); scanf("%s",a.name);
    printf("얼마 받나요?"); scanf("%s",a.money);

    printf("이름 %s \n 급여정보 %s",a.name,a.money);
    return 0;
}