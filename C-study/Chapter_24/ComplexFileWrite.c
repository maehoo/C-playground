#include <stdio.h>

int main(void)
{
    char name[10];
    char sex;
    int age;

    FILE *fp=fopen("friend.txt","wt");
    int i;

    for(i=0;i<3;i++)
    {
        printf("이름 성별 나이 입력:");
        scanf("%s %c %d",name,&sex,&age);
        getchar();
        fprintf(fp,"%s %c %d 안녕",name,sex,age);
    }
    fclose(fp);
    char str[50];
    fp = fopen("friend.txt","rt");
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        fputs(str,stdout);
    }
    fclose(fp);
    return 0;
}