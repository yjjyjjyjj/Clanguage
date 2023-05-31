#include <stdio.h>
int main(void)
{
	int to=0, i=0;
	int num, in;

	printf("몇 개의 정수: ");
	scanf("%d", &num);

	while(i++<num)
	{
		printf("정수: ");
		scanf("%d", &in);
		to+=in;
	}
	printf("평균: %f \n", (double)to/num);
	return 0;
}
