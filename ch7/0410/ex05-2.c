#include <stdio.h>
int main(void)
{
	int to=0, num, i=0, a;

	printf("정수 몇개: ");
	scanf("%d", &num);

	while(i++<num)
	{
		printf("정수 입력: ");
		scanf("%d", &a);
		to+=a;
	}
	printf("평균: %f \n", (double)to/num);
	return 0;
}
