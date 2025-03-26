#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};
typedef struct point Point;

typedef struct person
{
    char name[20];
    int age;
}Person;

int main(void)
{
    Point pos={10,20};
    Person man = {"홍길동",100};
    printf("%d %d \n",pos.xpos,pos.ypos);
    printf("%s %d \n",man.name, man.age);
    return 0;
}