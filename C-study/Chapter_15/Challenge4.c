#include <stdio.h>

int main(void)
{
    char arr[50];
    scanf("%s",arr);
    int i;
    for(i=0;;i++)
    {
        if(arr[i]=='\0')
        break;
    }
    int a;
      for(a=0;a<=(i/2);a++)
        {
            if(arr[a]!=arr[i-a-1])
            {
                printf("회문이 아닙니다");
                break;
            }
        }
        if((a-1)==(i/2))
        printf("회문입니다.");
    
    return 0;
}