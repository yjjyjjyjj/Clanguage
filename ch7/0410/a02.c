#include <stdio.h>
int main(void)
{
	int num=1;
	int result=0;
	while(num<11)
	{
		result=(num%2==0);
		printf("%d %d \n", num, result);
		result=0;
		num++;
	}
	return 0;
}
