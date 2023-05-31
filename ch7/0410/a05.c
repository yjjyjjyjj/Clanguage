#include <stdio.h>
int main(void)
{
	int i=5;
	int j=4;
	while(i>0)
	{
		while(j<i && j>=0)
		{
			printf("*");
			j--;
		}
		i--;
		j=i-1;
		printf("\n");
	}
	return 0;
}
