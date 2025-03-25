#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct person
{
    char name[30];
    char phonenum[20];
    int age;
};

int main(void)
{
    struct point pos = {10,20};
    struct person man = {"홍길동","010-1111-1111",100};
    
    printf("%p %p \n", &pos, &pos.xpos);
    printf("%p %p \n", &man, man.name);
    return 0;
}