#include <stdio.h>
int main(void)
{
	int a;
	printf("a 입력: ");
	scanf("%d", &a);

	if(a%2==0)
		printf("짝수 \n");
	else
		printf("홀수 \n");

	return 0;
}
