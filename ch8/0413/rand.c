/*
제목: 청소 당번 뽑기
기능: 랜덤 숫자 뽑기
파일 이름: rand.c
수정날짜: 2023.04.15
작성자: 양정주
*/
#include <stdio.h>
#include <stdlib.h>    //rand 함수를 사용하기 위한 헤더선언
#include <time.h>      //time 함수를 사용하기위한 헤더선언


int main(void)
{
	int a, b, c, d;

	srand(time(NULL));       // time이라는 시드를 사용해 매번 다른 패턴의 난수 생성
  
	while(1)
	{
		a=rand() %15+2;     // rand 함수의 기본형태는 rand () %숫자 이며
		b=rand() %15+2;     // 예를 들어 숫자 부분에 16을 입력시 
		c=rand() %15+2;     // 0~15의 숫자중 난수를 생성하며 16+1형식으로
		d=rand() %15+2;     // 입력시 1~16의 숫자중 난수를 생성한다  
			if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)  //중복의 숫자가 없을때까지 돌린다
			{
				break;
			}
	}
		printf("당첨 번호는: %d %d %d %d \n", a, b, c, d);
		return 0;
}
