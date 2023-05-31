#include <stdio.h>
int main(void)
{
	int n, i;
	int total=1;

	printf("n 입력 : ");
	scanf("%d", &n);

	for(i=1; i<=n; i++)
		total=i*total;
	
	printf("n 계승 값: %d \n", total);
	return 0;
}
