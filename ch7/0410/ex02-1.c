#include <stdio.h>
int main(void)
{
	int num=0, i=1;

	printf("양의 정수 입력: ");
	scanf("%d", &num);

	while(i<=num)
	{
		printf("%d ", i*3);
		i++;
	}
	printf("\n");
	return 0;
}
