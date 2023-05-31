#include <stdio.h>

int main(void)
{
    FILE * src=fopen("src.txt", "rt");
    FILE * des=fopen("dst.txt", "wt");
    int str[20];

    if(src==NULL || des==NULL)
    {
        puts("파일오픈 실패!");
        return -1;
    }

    while(fgets(str, sizeof(str), src)!=NULL)
        fputc(str, des);

    if(feof(src)!=0)
        puts("파일복사 완료!");
    else
        puts("파일복사 실패!");
    
    fclose(src);
    fclose(des);
    return 0;
}