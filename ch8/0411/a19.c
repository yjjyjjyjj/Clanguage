#include <stdio.h>
int main(void)
{
	int i, n1, n2;
	printf("n1, n2 입력: ");
	scanf("%d %d", &n1, &n2);

	for(int i=n1; i>=1; i--)
	{
		if(n1%i==0 && n2%i==0)
		  printf("%d \n", i);

	}
	return 0;
}
