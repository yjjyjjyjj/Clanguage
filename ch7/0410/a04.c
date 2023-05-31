#include <stdio.h>
int main(void)
{
	int num=1, count=0;
	int a;

	printf("입력: ");
	scanf("%d", &a);

	while(num<51)
	{
		count=0;
		while(count<a && num<51)
		{
			printf("%d", num);
			num++;
			count++;
		}
		printf("\n");

	}
	return 0;
}
