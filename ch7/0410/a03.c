#include <stdio.h>
int main(void)
{
	int num=1;
	int count=0;

	while(num<51)
	{
		count=0;
		while(count<5 && num<51)
		{
			printf("%d", num);
			num++;
			count++;
		}
		printf("\n");
	}
	return 0;
}

