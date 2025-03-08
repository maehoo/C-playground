#include <stdio.h>

void callbyvalue(int num)
{
    printf("%d ",num*num);
} 
void callbyreference(int *ptr)
{
    printf("%d ",(*ptr)*(*ptr));
}
int main(void)
{
    int A,B;
    scanf("%d %d", &A, &B);  
    callbyvalue(A);
    callbyreference(&B);
    return 0; 
}
