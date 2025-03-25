#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

int main(void)
{
    struct point arr[3]=
    {
        {3,4},
        {1,2},
        {5,6}
    };

    int i;
    for(i=0;i<3;i++)
        printf("%d %d \n",arr[i].xpos,arr[i].ypos);

    return 0;
}