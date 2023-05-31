#include <stdio.h>
int Fido(int a)
{
    int r;
    if(a<=2)
      r=1;
    else
      r=Fido(a-1)+Fido(a-2);

    return r;
}

int main(void)
{
    int n;
    int result;
    printf("정수 입력: ");
    scanf("%d", &n);
    
    result=Fido(n);

    printf("피보나치 수열 :%d", result);
    return 0;

}