#include <stdio.h>
int main(void)
{
	int sum=0;

	for(int i=2; i<=100; i+=2)
		sum=sum+i;

	printf("%d \n", sum);
	return 0;
}
