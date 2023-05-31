#include <stdio.h>
int main(void)
{
	int num1, num2;
	int result1, result2;

	printf("두개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	result1=(num1+num2>0);
	result2=(num2%num1>=1);

	printf("두수의 합이 0이상이면 1 아니면 0: %d \n", result1);
	printf("나머지가 1이상이면 1 아니면 0: %d \n", result2);
	return 0;
}

