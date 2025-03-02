#include <stdio.h>
int times(void)
{
    int A;
    scanf("%d", &A);
    return A;
}

int main(void)
{
    int st,A;
    int num1=0, num2=1,num3;
    printf("피보나치 몇번째까지:");
    st=times();
    
    for(A=1;A<=st; A++)
    {
    switch(A)
    {
        case 1:
        printf("%d\n",num1);
        break;
        case 2:
        printf("%d\n",num2);
        break;
        default:
        num3=num1+num2;
        printf("%d\n",num3);
        num1=num2;
        num2=num3;
    }
    }
    return 0;
}