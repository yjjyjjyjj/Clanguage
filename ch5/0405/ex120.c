#include <stdio.h>             //헤더파일 선언
int main(void)                 // main 함수의 시작
{
	int x1, x2, x3, x4;        //변수 x1, x2, x3, x4의 선언
	int y1, y2, y3, y4;        //변수 선언
	int z1, z2, z3, z4;        //변수 선언
	int a1, a2, a3, a4;        //변수 선언
	int b1, b2, b3, b4;        //변수 선언
	double result1;               // 변수 선언  (송혜진 평균)
	double result2;               // 변수 선언  (김가영 평균)
	double result3;               // 변수 선언  (유미유 평균)
	double result4;               // 변수 선언 (박영진 평균)
	double result5;               // 변수 선언 (한설 평균)
	double result6;               // 변수 선언 (수학 평균)
	double result7;               // 변수 선언 (C언어 평균)
	double result8;               // 변수 선언 (수학 평균)
	double result9;               // 변수 선언 (C언어 평균)

	printf("송혜진의 국어, 영어, 수학, C언어 점수입력: ");    //정수 입력
	scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
	printf("김가영의 국어, 영어, 수학, C언어 점수입력: ");    //정수 입력
	scanf("%d %d %d %d", &y1, &y2, &y3, &y4);
	printf("유미유의 국어, 영어, 수학, C언어 점수입력: ");    //정수 입력
	scanf("%d %d %d %d", &z1, &z2, &z3, &z4);
	printf("박영진의의 국어, 영어, 수학, C언어 점수입력: ");    //정수 입력
	scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
	printf("한설의 국어, 영어, 수학, C언어 점수입력: ");    //정수 입력
	scanf("%d %d %d %d", &b1, &b2, &b3, &b4);

	result1=(double)(x1+x2+x3+x4)/4;     //변수 초기화
	result2=(double)(y1+y2+y3+y4)/4;     //변수 초기화
	result3=(double)(z1+z2+z3+z4)/4;     //변수 초기화
	result4=(double)(a1+a2+a3+a4)/4;     //변수 초기화
	result5=(double)(b1+b2+b3+b4)/4;     //변수 초기화
	result6=(double)(x1+y1+z1+a1+b1)/5;        //변수 초기화
	result7=(double)(x2+y2+z2+a2+b2)/5;        //변수 초기화
	result8=(double)(x3+y3+z3+a3+b3)/5;        //변수 초기화
	result9=(double)(x4+y4+z4+a4+b4)/5;        //변수 초기화

	printf("            성       적      표            \n");
	printf("------------------------------------------ \n");
	printf("         국어   영어   수학   C언어   평균 \n");
	printf("송혜진    %d     %d     %d     %d      %.2f  \n", x1, x2, x3, x4, result1);
	printf("김가영    %d     %d     %d     %d      %.2f  \n", y1, y2, y3, y4, result2);
	printf("유미유    %d     %d     %d     %d      %.2f  \n", z1, z2, z3, z4, result3);
	printf("박영진    %d     %d     %d     %d      %.2f  \n", a1, a2, a3, a4, result4);
	printf("한  설    %d     %d     %d     %d      %.2f  \n", b1, b2, b3, b4, result5);
	printf(" 평균     %.2f   %.2f   %.2f   %.2f          \n", result6, result7, result8, result9);
	printf("------------------------------------------ \n");
	return 0;
}

