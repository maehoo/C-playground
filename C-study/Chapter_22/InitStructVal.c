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
struct X
{
    int number[4];
    int number2[4];
}; //char 배열이 아닌 int 배열이라면 어떻게 해야할까?

int main(void)
{
    struct point pos ={10,20};
    struct person man = {"홍길동","010-1111-1111",21};
    printf("%d %d \n", pos.xpos,pos.ypos);
    printf("%s %s %d\n", man.name,man.phonenum,man.age);

    struct X example ={{1,2,3,4},{5,6,7,8}};

    int i;
    for(i=0;i<4;i++)
    {
        printf("%d %d \n",example.number[i],example.number2[i]);
    }

    return 0;
}   