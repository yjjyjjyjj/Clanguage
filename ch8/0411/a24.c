#include <stdio.h>
int main(void)
{
	int i;
	for(int i=1; i<=10; i++)
	{
		printf("\n%d: ", i);
		for(int j=1; j<=i; j++)
		{
			if(i%j==0)
				printf("%d", j);
		}
	}
	return 0;
}
