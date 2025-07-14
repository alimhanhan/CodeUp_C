#include <stdio.h>

int main() {
    char d[21];  // 최대 20자 + 널문자('\0')를 위한 공간
    int i;

    scanf("%s", d);  // 단어 입력받기

    for(i = 0; d[i] != '\0'; i++) {
        printf("'%c'\n", d[i]);
    }

    return 0;
}