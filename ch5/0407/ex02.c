#include <stdio.h>
int main(void)
{
	double num1, num2;
    double result;

	printf("두개의 실수 입력: ");
	scanf("%lf %lf", &num1, &num2);
    result=num1+num2; 
    
	printf("합: %f \n", result);
	return 0;
}
