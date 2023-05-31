#include <stdio.h>
int main(void); 
{
	int num;
	int result;
	printf("정수 입력: ");
	scanf("%d", &num);
	
	result=(num==num*3);
	printf("참이면 1 거짓이면 0: %d  \n", result);
	return 0;
}
