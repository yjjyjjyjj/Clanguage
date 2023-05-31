#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i=0; 
	double j;
	srand(time(NULL));
	while(i<5)
	{

		j=rand() %100+1;
		printf("%.1f \n", j);


		i++;
	}
	return 0;
}
