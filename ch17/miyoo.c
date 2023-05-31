#include <stdio.h>
int main()
{
  int num1=10;
  int num2=15;
  int num3 = 20;
  int * p= &num1;
  int *q = &num3;
  
  int **pp=&p;
  int **qq=&q;
  int ***ppp=&pp;
  *ppp=&q;
  num3=77;
  **ppp=&num1;
  printf("***ppp:%d \n**ppp:%p \n*ppp:%p \nnum3:%d \n*q:%d \np:%p \nq:%p \n", ***ppp, **ppp, *ppp, num3, *q, p, q);
  return 0;
}