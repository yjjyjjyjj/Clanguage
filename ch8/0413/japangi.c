/*
제목:음료자판기 만들기
기능:그냥 자판기
파일이름:japangi.c
수정날짜:2023.04.15
작성자:양정주
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
	int M=0, a=900, b=1100, c=1200, d=1600, e=1700, f=1800, g=1900, h=2100;   //음료 가격을 변수에 저장
	int sum=0, sum1=0;                                                          //음료 금액을 합산
	char opt1=0, opt2=0;                                                          //메뉴  선택 버튼

    printf("자판기에 돈을 넣어주세요 ");                                       //투입금액을 입력 받음
    scanf("%d", &M);
    while(1)
	{
		system("clear");                                                      //clear로 계속 자판기 메뉴가 보일수 있게 함
		printf("-----------------------------자판기 메뉴----------------------------- \n");
		printf("|                                                                   | \n");
		printf("|   1)콜라       2)우주맛콜라         3)제로콜라       4)스프라이트 | \n");
		printf("|   1200원          1900원              1200원            1100원    | \n");
	    printf("|                                                                   | \n");
	    printf("|   5)환타        6)닥터페퍼          7)몬스터        8)파워에이드  | \n");
        printf("|    900원          1100원              1800원            1900원    | \n");
     	printf("|                                                                   | \n");
        printf("|  9)네스티   10)글라소비타민워터   11)미닛메이드     12)조지아커피 | \n");
	    printf("|   1600원          2100원              1700원             900원    | \n");
        printf("|                                                                   | \n");
	    printf("|  13)암바사       14)마테차          s)계산하기           x)종료   | \n");
        printf("|    900원          1700원                  원                원    | \n");
        printf("|                                                                   | \n");
		printf("|     투입금액  %7d                         선택금액  %7d   | \n", M, sum);
		printf("|                                                                   | \n");
        printf("--------------------------------------------------------------------- \n");

	    printf("원하는 메뉴를 선택해 주세요 \n");             //clear를 사용하여 계속적으로 입력받을수 있음
		scanf(" %c%c", &opt1, &opt2);                         //문자를 입력받기 위해 %c를 사용 하였음
		if((opt1==49&&opt2==10) || (opt1==10&&opt2==49))      //콜라  //문자를 입력받았기 떄문에 아스키코드를 사용하여 조건을 달성함 이하 동
		{
			sum1=c;
		}
		else if((opt1==50&&opt2==10) || (opt1==10&&opt2==50))   //우주맛콜라
		{
			sum1=g;
		}
		else if((opt1==51&&opt2==10) || (opt1==10&&opt2==51))   //제로콜라
		{
			sum1=c;
		}
		else if((opt1==52&&opt2==10) || (opt1==10&&opt2==52))   //스프라이트
		{
			sum1=b;
		}
		else if((opt1==53&&opt2==10) || (opt1==10&&opt2==53))  //환타
		{
			sum1=a;
		}
		else if((opt1==54&&opt2==10) || (opt1==10&&opt2==54))  //닥터페터
		{
			sum1=b;
		}
		else if((opt1==55&&opt2==10) || (opt1==10&&opt2==55))  //몬스터
		{
			sum1=f;
		}
		else if((opt1==56&&opt2==10) || (opt1==10&&opt2==56))   //파워에이드
		{
			sum1=g;
		}
		else if((opt1==57&&opt2==10) || (opt1==10&&opt2==57))   //네스티
		{
			sum1=d;
		}
		else if((opt1==49&&opt2==48) || (opt1==48&&opt2==49))   //글라소비타민워터
		{
            sum1=h;
		}
        else if((opt1==49&&opt2==49) || (opt1==49&&opt2==49))   //미닛메이드
		{
            sum1=e;
		}
        else if((opt1==49&&opt2==50) || (opt1==50&&opt2==49))   //조지아커피
		{
            sum1=a;
		}
        else if((opt1==49&&opt2==51) || (opt1==51&&opt2==49))   //암바사
		{
            sum1=a;
		}
        else if((opt1==49&&opt2==52) || (opt1==52&&opt2==49))  //마테차
		{
            sum1=e;
		}                   
		if((opt1==115&&opt2==10) || (opt1==10&&opt2==115))   //계산하기
		{
			for(int i=0; i<=2; i++)                         //계산중인 모션을 위해만듦
			{
				printf("\r● ● ○ ○ ○ ○ ○ ○ ○ ○ ");             //\r은 캐리지 리턴 학습일지 참고
				fflush(stdout);                               //필수
				usleep(50000);                                //필
				printf("\r● ● ● ● ○ ○ ○ ○ ○ ○ ");
				fflush(stdout);
				usleep(50000);         
				printf("\r○ ○ ● ● ● ● ○ ○ ○ ○ ");
				fflush(stdout);
				usleep(50000);			           
				printf("\r○ ○ ○ ○ ● ● ● ● ○ ○ ");
				fflush(stdout);
				usleep(50000);
				printf("\r○ ○ ○ ○ ○ ○ ● ● ● ● ");
				fflush(stdout);
				usleep(50000);    
				printf("\r○ ○ ○ ○ ○ ○ ○ ○ ● ● ");
				fflush(stdout);
				usleep(50000);
			}
			printf("\n거스름 돈은 %d원 입니다 \n", M-sum);
			break;
		}
		sum+=sum1;                  //선택받은 금액의 합계를 위해
		if((opt1==120&&opt2==10) || (opt1==10&&opt2==120))   //종료
		{
			printf("종료합니다 \n");
			printf("반환 금액은 %d원 입니다 \n", M);
			break;
		}	
		if(M<sum)   //금액초과 반환
		{
			printf("잔액이 부족합니다 \n");
			printf("반환 금액은 %d원 입니다 \n", M);
			break;
		}
	}
	return 0;
}
