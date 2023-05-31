#include <stdio.h>
int Max(int a, int b)
{
    int m;
    if(a>b)
        m=a;
    else
        m=b;

return m;
}

int main(void)
{
   int a, b;
   int max;
   printf("두개의 정수 입력: ");
   scanf("%d %d", &a, &b);

   max=Max(a, b);

   printf("두수중 큰수는 %d \n", max);
return 0;   
}