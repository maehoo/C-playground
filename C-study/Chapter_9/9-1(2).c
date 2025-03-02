#include <stdio.h>
int fah(int num1)
{
    double fah;
    return fah = 1.8*num1 + 32;
}
int cel(int num1)
{
    double cel;
    return cel = (num1-32.0)/1.8;
}

int main(void)
{
    int sel;
    printf("1. 섭씨 ->  화씨, 2. 화씨 -> 섭씨");
    scanf("%d", &sel);
    if(sel==1)
    {
        int num1;
        printf("섭씨 입력: \n");
        scanf("%d", &num1);
        printf("섭씨 %d를 화씨로 하면 %d",num1, fah(num1));
        return 0;
    }
    else if(sel ==2)
    {
        int num2;
        printf("화씨 입력: \n");
        scanf("%d", &num2);
        printf("화씨 %d를 섭씨로 하면 %d",num2, cel(num2));
        return 0;
    }
    else
    {
        printf("1,2 이외의 정수를 입력하였습니다.");
        return 0;
    }

}