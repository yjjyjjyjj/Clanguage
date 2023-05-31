#include <stdio.h>
int main(void)
{
	int dan=1, i=1;

	while(1)
	{
		dan++;
		if(dan%2==1)
			continue;
		if(dan==10)
			break;
		i=1;
		while(i<10)
		{
			if(dan==2 && i>2)
				break;
			if(dan==4 && i>4)
				break;
			if(dan==6 && i>6)
				break;
			if(dan==8 && i>8)
				break;
			printf("%dX%d=%d \n", dan, i, dan*i);
			i++;
		}
	}
	return 0;
}
