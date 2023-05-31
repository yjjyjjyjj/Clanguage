#include <stdio.h>
int main(void)
{
	int a, b;
	printf("a,d 입력: ");
	scanf("%d %d", &a, &b);

	if(a>b)
		printf("큰 수: %d \n", a);
	else
		printf("큰 수: %d \n", b);

	return 0;
}

