#include <stdio.h>
int main(void)
{
	int chk=1, n;
	printf("n 입력: ");
	scanf("%d", &n);

	for(int i=2; i<=n-1; i++)
	{
		if(n%i==0)
			chk=0;
	}
		if(chk==1)
			printf("소수임 \n");
		else
			printf("소수아님 \n");
	return 0;
}
