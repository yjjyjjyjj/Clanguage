#include <stdio.h>
int main(void)
{
	int num, sum;
	while(num!=0)
	{
		printf("정수 입력: ");
		scanf("%d", &num);

		sum+=num;
	}
	printf("합: %d \n", sum+num);
	return 0;
}

