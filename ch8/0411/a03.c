#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("a, b, c 입력: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a>b)
		if(a>c)
			printf("가장 큰수: %d \n", a);
		else
			printf("가장 큰수: %d \n", c);
	else if(b>c)
		    printf("가장 큰수: %d \n", b);
	    else
			printf("가장 큰수: %d \n", c);
		return 0;
}
