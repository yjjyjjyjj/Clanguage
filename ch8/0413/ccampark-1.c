#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_LEN 20  // 출력물의 최대 길이

int main() {
    char msg[] = "Hello, World!";  // 출력물
    int len = strlen(msg);  // 출력물의 길이
    int i, j;
    while(1) {
        printf("\033[2J");  // 화면을 지움
        printf("\033[?25l");  // 커서를 숨김
        for(i = 0; i < len; i += MAX_LEN) {
            for(j = 0; j < MAX_LEN && i+j < len; j++) {
                putchar(msg[i+j]);  // 출력물의 일부를 출력
            }
            putchar('\n');  // 줄바꿈
        }
        fflush(stdout);  // 출력 버퍼를 비움
        usleep(500000);  // 500ms(0.5초) 대기
    }
    return 0;
}

