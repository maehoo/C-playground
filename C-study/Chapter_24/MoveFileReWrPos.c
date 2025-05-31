#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("text.txt","wt");
    fputs("123456789",fp);
    fclose(fp);

    fp = fopen("text.txt","rt");
    putchar(fgetc(fp));

    fseek(fp,-2,SEEK_END); //'\0' 부터
    putchar(fgetc(fp));

    fseek(fp,2,SEEK_SET);
    putchar(fgetc(fp));

    fseek(fp,0,SEEK_CUR);   // 0부터 한칸
    putchar(fgetc(fp));

    fclose(fp);
    return 0;
}