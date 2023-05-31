#include <stdio.h>
int main(void)
{
	int i=0, f=0;
	int num, a;

	printf("몇개의 정수를 입력하시겠습니까? ");
	scanf("%d", &num);

	while(i++<num);
	{
		printf("점수 입력: ");
		scanf("%d", &a);
		f+=a;
	}
	printf("평균: %f \n", (double)f/num);
	return 0;
}

