#include <stdio.h>
int main(void)
{
	int dan=0, num=1;
	printf("몇 단? ");
	scanf("%d", &dan);

	while(num<10)
	{
		printf("%dX%d=%d", dan, num, dan*num);
		num++;
	}
	return 0;
}

