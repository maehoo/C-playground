#include <stdio.h>

int main(void)
{
    int total=3500;
    printf("현재 가지고 있는 금액: %d\n",total);
    total=1900;
    int C,E,K;
    int save1,save2,save3;
    for(C=0;500*C<=total;C++)
    {
        total-=500*C;
        if(total<=0)
                break;
        save1=total;
        for(E=0;500*E<=total;E++)
        {
            total-=700*E;
            save2=total;
            for(K=0;400*K<=total;K++)
            {
                total-=400*K;
                if(total<=0)
                    break;
                total=save2;
            }
            if(total<=0)
                break;
            total=save1;
        }
        if(total==0)
            printf("크림빵 %d개 새우깡 %d개 콜라 %d개\n",C+1,E+1,K+1);
        total=1900;
    }
}