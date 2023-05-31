#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int i, j;
    int arr[3];  // 사용자
    int crr[3];  // 컴퓨터 세개의 숫자
    int count =0;  //도전횟수

    srand((int)time(NULL));  // 현재시간을 이용해서 씨드 설정

    printf("Start Game! \n");
    for (i = 0; i < 3; i++)  // 컴퓨터가 3개의 랜덤숫자 선택
    {
        crr[i] = rand() % 10;  // 랜덤숫자(0-9)
        for (j = 0; j < i; j++)
        {
            if (crr[i] == crr[j])
            {
                i--;  // 중복이면 다시 선택
                break;
            }
        }
    }

    while (1)
    {
        int strike = 0;  // 스트라이크
        int ball = 0;  // 볼

        printf("3개의 숫자 선택 : ");  // 사용자
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

        // for (i = 0; i < 3; i++)  // 숫자3개 비교
        // {
        //     if (arr[i] == crr[i])  // strike(숫자와 위치가 일치)
        //         strike += 1;
        // }
        for (i = 0; i < 3; i++)
        {

            if (arr[i] == crr[i])  // strike(숫자와 위치가 일치)
                strike += 1;
        
            for (j = 0; j < 3; j++)
            {
                if (arr[i] == crr[j] && i != j)  // ball(숫자만 일치)
                    ball += 1;
            }
        }
        count++;

        printf("%d번째 도전결과 : %d strike, %d ball! \n", count, strike, ball);
        if (strike == 3)
        {
            break;
        }
    }
    printf("GAME OVER! ");
    return 0;
}