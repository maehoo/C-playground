#include <stdio.h>

#define SQUARE(X)  X*X

int main(void)
{
    int num = 20;
    printf("square of num : %d \n",SQUARE(num));
    printf("square of -5 : %d \n",SQUARE(-5));
    printf("square of 2.5 : %g \n",SQUARE(2.5));

    printf("square of 3+2 : %d \n",SQUARE(3+2));
    // 3+2*3+2 가 되어서 결과 11이 출력
    //SQUARE((3+2))로 해결
    printf("square of 3+2 : %d \n",SQUARE((3+2)));
    return 0;
}