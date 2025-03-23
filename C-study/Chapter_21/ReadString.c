#include <stdio.h>

int main(void)
{
    char str[6];
    int i;
    
    for(i=0;i<3;i++)
    {
        fgets(str, sizeof(str),stdin);
        printf("Read %d: %s \n", i+1,str);
    }
    return 0;
}