#include <stdio.h>
int main(void)
{
	int num1, num2;
	int total;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	for(num1; num1<num2+1; num1++)
		total+=num1;

	printf("합 :%d \n", total);
	return 0;
}
