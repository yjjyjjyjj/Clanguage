#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int i;
    srand ((int)time(NULL));  //현재시간을 이용해서 씨드 설정
    printf("두개의 주사위를 던져보자 \n");
    for(i=0; i<2; i++)
    {
        printf("주사위 %d의 결과 : %d \n", i+1, rand()%6+1);
    }
    return 0;
}