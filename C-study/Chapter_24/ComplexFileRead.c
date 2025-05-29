#include <stdio.h>

int main(void)
{
    char name[10];
    char sex;
    int age;

    FILE *fp = fopen("friend.txt","rt");
    int ret;
    if (fp == NULL)
    {
        puts("파일 열기 실패");
        return -1;
    }
    while(1)
    {
        ret=fscanf(fp,"%s %c %d", name, &sex, &age);
        if(ret == EOF)
            break;
        printf("%s %c %d \n",name, sex, age);
    }
    fclose(fp);
    return 0;
}