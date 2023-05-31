#include <stdio.h>
int Max(int a, int b, int c)
{
    int m;
    if(a>b)
      if(a>c)
        m=a;
      else
        m=c;
    else if(b>c)
        m=b;
    else
        m=c;

return m;
}

int main(void)
{
    int a, b, c;
    int max;
    printf("세개의 정수 입력 : ");
    scanf("%d %d %d", &a, &b, &c);
    
    max=Max(a, b, c);

    printf("세수중 가장 큰수는 %d \n", max);
    return 0;
}