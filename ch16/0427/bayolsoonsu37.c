#include <stdio.h>
int main(void)
{
    int i;
    int a[10];

    for(i=0; i<=10; i++)
    {
        a[i-1]=i*10;
    }

    for(i=9; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
