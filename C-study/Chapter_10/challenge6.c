#include <stdio.h>

int main(void)
{
    int second,save,save2;
    printf("초 입력:");
    scanf("%d",&second);
    save=second;
    int h,m,s;
    for(h=0;h<=second;h++)//초에서 시간빼고 분빼고 나머지 초로 나타낸다.
    {
        second=save;
        second-=3600*h;
        if(second>=3600)
            continue;
        save2=second;
        for(m=0;m<=second;m++)
        {
            second=save2;
            second-=60*m;
            if(second>=60)
                continue;
            s=second;
            printf("h:%d m:%d s:%d",h,m,s);
            break;
        }
        break;
    }
    return 0;
}