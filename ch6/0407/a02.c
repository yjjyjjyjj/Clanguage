#include <stdio.h>
int main(void)
{
	int num1;
	int result;

	printf("정수 입력: ");
	scanf("%d", &num1);
	result=(num1%3==0);
	printf("%d \n", result);
	return 0;
}
