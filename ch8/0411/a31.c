#include <stdio.h>
int main(void)
{
	int i, j, n=8;
	for(i=0; i<n; i++)
	{
		for(j=n-1; j>i; j--)
		{
			printf(" ");
		}
		for(j=0; j<2*i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1; i<n; i++)
	{
		for(j=0; j<i; j++)
		{
			printf(" ");
		}
		for(j=2*n-1; j>2*i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
