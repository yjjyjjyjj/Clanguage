#include <stdio.h>
int main(void)
{
	int n=0, sum=0, i;
	for(i=1; i<=10; i++)
		n=n+i;
	sum=sum+n;

	printf("%d \n", sum);
	return 0;
}
