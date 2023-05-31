#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int num;                // 사용자 선택
    int random;             // 컴퓨터 선택
    int win = 0;            // 승
    int tiegame = 0;        // 무
    srand((int)time(NULL)); // 현재시간을 이용해서 씨드 설정

    printf("가위바위보 중 하나 선택 \n");
    while (1)
    {
        printf("바위:1, 가위:2, 보:3 \n");
        printf("선택 : ");
        scanf("%d", &num);

        random = rand() % 3 + 1; // 컴퓨터 랜덤값 (1,2,3)

        if (num == 1)
        {
            printf("당신은 바위 선택, ");
            if (random == 1)
            {
                printf("컴퓨터도 바위 선택, 비겼습니다! \n");
                tiegame += 1;
            }
            else if (random == 2)
            {
                printf("컴퓨터는 가위 선택, 이겼습니다! \n");
                win += 1;
            }
            else
            {
                printf("컴퓨터는 보 선택, 졌습니다! \n");
                break;
            }
        }
        if (num == 2)
        {
            printf("당신은 가위 선택, ");
            if (random == 1)
            {
                printf("컴퓨터도 바위 선택, 졌습니다! \n");
                break;
            }
            else if (random == 2)
            {
                printf("컴퓨터는 가위 선택, 비겼습니다! \n");
                tiegame += 1;
            }
            else
            {
                printf("컴퓨터는 보 선택, 이겼습니다! \n");
                win += 1;
            }
        }
        if (num == 3)
        {
            printf("당신은 보 선택, ");
            if (random == 1)
            {
                printf("컴퓨터도 바위 선택, 이겼습니다! \n");
                win += 1;
            }
            else if (random == 2)
            {
                printf("컴퓨터는 가위 선택, 졌습니다! \n");
                break;
            }
            else
            {
                printf("컴퓨터는 보 선택, 비겼습니다! \n");
                tiegame += 1;
            }
        }
    }
    printf("\n\n게임의 결과 : %d승 %d무 \n", win, tiegame);
    return 0;
}