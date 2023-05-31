#include <stdio.h>
double CelToFah(double C)
{
    return 1.8 * C + 32;
}

double FahToCel(double F)
{
    return (F - 32) / 1.8;
}

int main(void)
{
    int sel;
    double num;

    printf("1.섭씨를 화씨로 바꿀지 2.화씨를 섭씨로 바꿀지 선택");
    scanf("%d", &sel);

    if (sel == 1)
    {
        printf("섭씨온도 입력: ");
        scanf("%lf", &num);
        printf("화씨온도: %f \n", CelToFah(num));
    }
    else if (sel == 2)
    {
        printf("화씨 온도 입력: ");
        scanf("%lf", &num);
        printf("섭씨온도: %f \n", FahToCel(num));
    }
    else 
    printf("잘못 선택하였습니다 \n");
    return 0;
}