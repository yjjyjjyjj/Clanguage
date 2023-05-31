#include <stdio.h>
int Sum(int a)
{
    int r;
    if(a<=1)
      r=1;
    else
    r=a+Sum(a-1);

    return r; 
}

int main(void)
{
    int n;
    int result;
    printf("정수 입력:");
    scanf("%d", &n);
    
    result=Sum(n);

    printf("1부터 입력받은 수까지의 합: %d \n", result);
    return 0;

}