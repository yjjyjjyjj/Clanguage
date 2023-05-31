#include <stdio.h>
int main(void)
{
	int num1, num2;
	int result;
	printf("정수 두개 입력: ");
	scanf("%d %d", &num1, &num2);

	result=(num1>num2);
	printf("처음 이력한 수가 두번째로 입력한 수보다 크면 1 아니면 0: %d \n", result);
	return 0;
}

