#include <stdio.h>
#include <string.h>

void compare1(char *str3,char *str4)
{
    if(!strcmp(str3,str4))
        printf("이름이 똑같습니다.");
    else
        printf("이름이 똑같지 않습니다.");

}
void compare2(char *str3,char *str4,int a,int b)
{
        if(a==b)
        {
        if(!strncmp(str3,str4,a))
            printf("나이가 똑같습니다.");
        else
            printf("나이가 똑같지 않습니다,");
        printf("\n");
        }
        else
            printf("나이가 똑같지 않습니다.");
}
int main(void)
{
    char str1[100],str2[100];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    int i,k;
    while (1)
    {
        for(i=0;;i++)
        {
            if(str1[i]==' ')
            {
                break;
            }
        }
        for(k=0;;k++)
        {
            if(str2[k]==' ')
            {
                break;
            }
        }
        break;
    }// ' '이 나오는 i,k 를 구함.
    char str3[100], str4[100];
    strncpy(str3,str1,i);
    strncpy(str4,str2,k);

    int a,b;
    compare1(str3,str4);
    for(a=0;;a++)
    {
        i++;
        str1[a]= str1[i];
        if(str1[i]=='\n')
            break;
    }
    for(b=0;;b++)
    {
        k++;
        str2[b]=str2[k];
        if(str2[k]=='\n')
            break;
    }
    strncpy(str3,str1,a);
    strncpy(str4,str2,b);
    
    
    compare2(str3,str4,a,b);
    return 0;
}