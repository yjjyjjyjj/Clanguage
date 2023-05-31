#include <stdio.h>
int main(void)
{
	int num=0, i=0, sum=0;
	
	while(num<5)
	{
		while(i<=0)
		{
			printf("1이상 정수 입력(%d번째): ", num+1);
		    scanf("%d", &i);
		}
		sum+=i;
		i=0;
	    num++;
	}
	printf("정수의 합: %d \n", sum);
	return 0;
}
