#include <stdio.h>
int main(void)
{
	int fact=1;
	for(int i=5; i>=1; i--)
		fact=fact*i;

	printf("%d \n", fact);
	return 0;
}

