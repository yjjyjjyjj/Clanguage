#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    while(1) 
	{
            printf("● ● ○ ○ ○ ○ ○ ○ ○ ○\n");
            fflush(stdout);
            usleep(50000);
            printf("● ● ● ● ○ ○ ○ ○ ○ ○\n");
    }
    return 0;
}

