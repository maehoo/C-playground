#include <stdio.h>

int main(void)
{
    FILE * fp=fopen("data.txt","wt");
    if(fp==NULL){
        puts("파일오픈실패");
        return -1;
    }

    fputc('A',fp);
    fputc('B',fp);
    fputc('C',fp);
    fputc('D',fp);
    fputc('E',fp);
    fclose(fp);
    return 0;
}