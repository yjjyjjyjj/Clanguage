#include <stdio.h>

int main() {
    printf("Hello, ");
    fflush(stdout); // 출력 버퍼를 비움
    printf("world!\n");
    return 0;
}

