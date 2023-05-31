#include <stdio.h>
int main(void)
{
    int a[100]={0};

    for(int i=2; i<10; i++)
    {
        if(a[i]==0);
        {
          for(int j=i*2; j<100; j+=i)
          {
            a[j]=1;
          }
        }
    }

    for(int i=2; i<=100; i++)
    {
        if(a[i]==0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}