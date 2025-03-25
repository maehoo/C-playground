#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

struct person
{
    char name[20];
    char phonenum[20];
    int age;
};

int main(void)
{
    struct point pos ={10,20};
    struct person man = {"홍길동","010-1111-1111",21};
    printf("%d %d \n", pos.xpos,pos.ypos);
    printf("%s %s %d\n", man.name,man.phonenum,man.age);

    return 0;
}