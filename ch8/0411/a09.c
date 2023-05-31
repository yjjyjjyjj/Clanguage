#include <stdio.h>
int main(void)
{
	int age;
	printf("age 입력: ");
	scanf("%d", &age);

	if(age<8 || age>=60)
		printf("무료 \n");
	else
		printf("5000원 \n");
	return 0;
}
