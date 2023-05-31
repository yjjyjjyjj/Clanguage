#include <stdio.h>
int main(void)
{
	int charge=5000;
	int age;

	printf("age 입력: ");
	scanf("%d", &age);

	if(age<8)
		printf("0 \n");
	else if(age<60)
		printf("%d \n", charge);
	else
		printf("%f \n", (double)charge*0.5);
	return 0;
}
