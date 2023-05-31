#include <stdio.h>
int main(void)
{
	int a;
	printf("a 입력: ");
	scanf("%d", &a);

	if(a%3==0)
		printf("3의배수 \n");
	else
		printf("3의배수아님 \n");
	return 0;
}
