#include <stdio.h>
int main(void)
{
    int a[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int temp;

    temp=a[0];

    for(int i=0; i<=8; i++)
    {
        a[i]=a[i+1];
    }

    a[9]=temp;

    for(int i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
}