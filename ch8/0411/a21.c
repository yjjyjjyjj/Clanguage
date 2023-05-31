#include <stdio.h>
int main(void)
{
	int a=1, b=1;
	int c;

	printf("a=%d b=%d \n", a, b);

	for(int i=3; i<=20; i++)
	  c=a+b;
	  printf("a+b=%d \n", c);
	  a=b;
	  b=c;
	  return 0;
}
