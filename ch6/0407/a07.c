#include <stdio.h>
int main(void)
{
	char ch;
	printf("소문자 이력: ");
	scanf("%c", &ch);

	printf("%c \n", ch-32);
	return 0;
}

