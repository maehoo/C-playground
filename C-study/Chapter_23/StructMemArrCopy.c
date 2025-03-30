#include <stdio.h>

typedef struct person
{
    char name[20];
    char phonenum[20];
    int age;
} Person;

void showpersoninfo(Person man)
{
    printf("name: %s\n",man.name);
    printf("phone: %s\n",man.phonenum);
    printf("age: %d\n",man.age);
}

Person readpersoninfo(void)
{
    Person man;
    printf("name? "); scanf("%s",man.name);
    printf("phone? "); scanf("%s",man.phonenum);
    printf("age? "); scanf("%d",&man.age);
    return man;
}

int main(void)
{
    Person man=readpersoninfo();
    showpersoninfo(man);
    return 0; 
}