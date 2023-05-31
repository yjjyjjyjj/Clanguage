#include <stdio.h>
#include <unistd.h>
int main(void)
{
	for(int i=0; i<30; i++)
	{
		printf("\033[2J");
		printf("\033[?251");
		printf("hello");
		fflush(stdout);
		usleep(500000);
		printf("\033[?25h");
		fflush(stdout);
		usleep(500000);
	}
	return 0;
}
