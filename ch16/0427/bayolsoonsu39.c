#include <stdio.h>
int main(void)
{
    int a[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10];

    for(int i=0; i<=9; i++)
    {
        b[i]=a[9-i];
    }

    for(int i=0; i<10; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}