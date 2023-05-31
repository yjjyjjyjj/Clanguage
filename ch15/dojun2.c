#include <stdio.h>
int main(void)
{
    int n;
    int b[20];

    printf("10진수 형태 정수 입력:");
    scanf("%d", &n);
    int a = 0;

    while (n != 0)
    {
        b[a] = n % 2;
        a = a + 1;
        n = n / 2;
    }
    for (int i = a - 1; i >= 0; i--)
    {
        printf("%d", b[i]);
    }
    return 0;
}