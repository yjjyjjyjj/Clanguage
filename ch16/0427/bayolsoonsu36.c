#include <stdio.h>
int main(void)
{
    int a[10];

    for(int i=1; i<=10; i++)
    {
        a[i-1]=i;
        printf("%d \n", a[i-1]);
    }
    return 0;
}