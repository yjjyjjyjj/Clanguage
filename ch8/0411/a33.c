#include <stdio.h>
int main(void)
{
	int i, j, n=10;

	for(i=1; i<=n; i++)
	{
		for(j=i; j>0; j--)
			printf("*");
				for(j=n-i; j>=0; j--)
					printf(" ");
		for (j=n-i; j>=0; j--)
			printf("*");
				printf("\n");
	}
	for(i=1; i<=n; i++)
	{
		for (j=n-i; j>=0; j--)
			printf(" ");
	for(j=i; j>0; j--)
		printf("*");
	for(j=i; j>0; j--)
		printf(" ");
	for(j=n-i; j>=0; j--)
		printf("*");
	printf("\n");
	}
	return 0;
}
