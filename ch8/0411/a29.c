#include <stdio.h>
int main(void)
{
	int i, j;
	for(i=1; i<=5; i++)
	{
		for(j=5-i; j>0; j--)
		{
			printf(" ");
		}
		for(j=0; j<i*2-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
