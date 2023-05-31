#include <stdio.h>
int main(void)
{
	int num1;

	printf("입력: ");
	scanf("%d", &num1);

	num1=~num1;
	num1=num1+1;

	printf("연산결과: %d \n", num1);
	return 0;
}


