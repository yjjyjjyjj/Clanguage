#include <stdio.h>
#include <string.h>

void Size(char* b, int len)
{
    int i;
    for(i=0; i<len/2; i++)
    {
        if(b[i]!=b[len-1-i])
        {
        printf("회문이 아닙니다. \n");
        return;
        }
    }
    printf("회문입니다 \n");
    return;
}


int main(void)
{
    char a[30];
   
    printf("문자열 입력:");
    scanf("%s", a);
    int len=strlen(a);

    Size(a, strlen(a));

    return 0;
}