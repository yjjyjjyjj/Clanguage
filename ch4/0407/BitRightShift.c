#include <stdio.h>
int main(void)
{
	int num = -16;
	printf("2칸 오른 쪽 이동의 결과: %d \n", num>>2);
	printf("3칸 오른 쪽 이동의 결과: %d \n", num>>3);
	return 0;
}
