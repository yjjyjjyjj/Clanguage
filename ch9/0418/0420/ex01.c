#include <stdio.h>
int add1(int num1, int num2, int num3);
{
    if (num1 > num2)
        return (num1 > num3) ? num1 : num3;
    else
        return (num2 > num3) ? num2 : num3;
}

int add2(int num1, int num2, int num3);
{
    if (num1 < num2)
        return (num1 < num3) ? num1 : num3;
    else
        return (num2 < num3) ? num2 : num3;
}

int main(void)
{
    int num1, num2, num3;
    printf("세개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("세개의 수중 가장 큰수 %d \n", add1(num1, num2, num3));
    printf("세개의 수중 가장 작은수 %d \n", add2(num1, num2, num3));
    return 0;
}
