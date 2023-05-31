#include <stdio.h>
int main(void)
{
	int max, a;
	printf("max 입력: ");
	scanf("%d", &max);

	printf("a 입력: ");
	scanf("%d", &a);

	if(a>max)
		max=a;
	printf("a 입력: ");
	scanf("%d", &a);

	if(a>max)
		max=a;
			printf("%d \n", max);
	return 0;
}
