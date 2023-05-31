#include <stdio.h>
int main(void)
{
	int x1, x2;
	int y1, y2;
	int result;

	printf(" 좌상단 x, y 좌표입력: ");
	scanf("%d %d", &x1, &y1);

	printf(" 우 하단 x, y 좌표입력: ");
	scanf("%d %d", &x2, &y2);
    result = (x2-x1)*(y2-y1); 

	printf("넓이는: %d \n", result);
	return 0;
}
