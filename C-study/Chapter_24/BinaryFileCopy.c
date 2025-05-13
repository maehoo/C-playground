#include <stdio.h>

int main(void)
{
    FILE * fp = fopen("src.bin","wb");
    if(fp == NULL)
    {
        return -1;
    }
    char arr[100];
    fgets(arr,sizeof(arr),stdin);
    fwrite(arr,sizeof(char),sizeof(arr),fp);
    fclose(fp);

    FILE * src = fopen("src.bin","rb");
    FILE * des = fopen("dst.bin","wb");
    char buf[20];
    int readcnt;

    if(src == NULL || des == NULL)
    {
        puts("파일오픈 실패");
        return -1;
    }

    while(1)
    {
        readcnt = fread((void*)buf,sizeof(char),sizeof(buf),src);
        //src 파일에서 데이터를 읽어서 buf에 저장하고, 실제로 읽은 "요소의 개수"를 readcnt에 저장해라.

        if(readcnt<sizeof(buf))
        {
            if(feof(src)!=0)
            {
                fwrite((void*)buf,sizeof(char),readcnt,des);
                puts("파일 복사 완료");
                break;
            }
            else
                puts("파일 복사 실패");
            
            break;
        }
        fwrite((void*)buf,sizeof(char),sizeof(buf),des);
    }
    fclose(src);
    fclose(des);
    return 0;
}