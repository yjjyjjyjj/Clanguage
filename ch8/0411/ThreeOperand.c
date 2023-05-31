#include <stdio.h>
int main(void)
{
	int num, ads;
	printf("정수 입력: ");
	scanf("%d", &num);

	ads = num>0 ? num : num+(-1);
	printf("절대값: %d \n", ads);
	return 0;
}
