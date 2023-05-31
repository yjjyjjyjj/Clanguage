#include <stdio.h>
int main(void)
{
	char ch1, ch2;
	printf(" 문자 두개 입력: ");
	scanf("%c %c", &ch1, &ch2);


    printf("아스키 코드 값의 차 : %d \n", ch1-ch2);
	return 0;
}

