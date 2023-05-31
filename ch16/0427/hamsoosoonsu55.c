#include <stdio.h>
void Aliquot(int a)
{
    for(int i=1; i<=a; i++)
    {
        if(a%i==0)
           printf("%d ", i);
    }
}

int main(void)
{
    for(int i=1; i<=10; i++)
    {
        printf("\n%d: ", i);
        Aliquot(i);
    }
    return 0;
}