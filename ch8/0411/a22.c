#include <stdio.h>
int main(void)
{
	int a, max;
	printf("a 입력: ");
	scanf("%d", &a);

	max=a;

	if(a!=0)
		while(a>max)
		{
			max=a;
		}
		else 
			printf("a 입력: ");
	        scanf("%d", &a);

	printf("%d", max);
	return 0;
}
