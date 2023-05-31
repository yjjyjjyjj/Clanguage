#include <stdio.h>
int main(void)
{
	int num;
	int result;

	printf("정수 입력: ");
	scanf("%d", &num);

	result=(num%2==0);

	printf("짝수이면 1 홀수이면 0: %d \n", result);
	return 0;
}
