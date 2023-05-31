#include <stdio.h>
int main(void)
{
	int a;
	printf("a 입력: ");
	scanf("%d", &a);

	if(a%3==0 && a%5==0)
		printf("3과5의 배수 \n");
	else
		printf("3과5의 배수아님 \n");
	return 0;
}
