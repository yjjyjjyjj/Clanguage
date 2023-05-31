#include <stdio.h>
int main(void)
{
	int i, j;
	for(i=5; i>=1; i--)
	{
		for(j=0+i; j<5; j++)
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
