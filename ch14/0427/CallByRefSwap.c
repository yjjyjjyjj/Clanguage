#include <stdio.h>
void Swap(int* ptar1, int*ptar2)
{
    int temp = *ptar1;
    *ptar1=*ptar2;
    *ptar2=temp;
}
int main(void)
{
    int num1=10;
    int num2=20;
    printf("num1 num2: %d %d \n", num1, num2);
    Swap(&num1, &num2);
    printf("num1 num2: %d %d \n", num1, num2);
    return 0;
}