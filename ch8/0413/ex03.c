#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("콘솔 창을 지우기 전에 출력됩니다.\n");
    system("clear");    // 콘솔 창 지우기
    printf("콘솔 창이 지워진 후에 출력됩니다.\n");
    return 0;
}

