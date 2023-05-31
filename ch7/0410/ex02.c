#include <stdio.h>
int main(void)
{
	int num;
	int i=1;

	printf("정수 입력: ");
	scanf("%d", &num);

	while(i<=num)
	{
		printf("%d \n", 3*i);
		i++;
	}
	return 0;
}
