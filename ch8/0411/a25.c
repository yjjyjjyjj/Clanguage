#include <stdio.h>
int main(void)
{
	int chk, i, j;
	for(i=2; i<100; i++)
	{
		chk=1;
		for(j=2; j<=i-1; j++)
		{
			if(i%j==0)
				 chk=0;
		}
	if(chk==1)
		printf("%d ", j);
	}
	return 0;
}
