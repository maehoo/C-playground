#include <stdio.h>

struct employee
{
    char name[100];
    char money[100];
};

int main(void)
{
    struct employee arr[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("이름과 급여 정보 입력");
        scanf("%s %s",arr[i].name,arr[i].money);
    }

    for(i=0;i<3;i++)
    {
        printf("%d: %s %s ",i,arr[i].name,arr[i].money);
    }
    return 0;
}