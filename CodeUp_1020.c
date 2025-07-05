#include <stdio.h>

int main() {
    char jumin[15];  // 주민번호는 14글자 (6자리 + '-' + 7자리) + 널문자
    scanf("%s", jumin);

    // 하이픈을 제외하고 출력
    for (int i = 0; jumin[i] != '\0'; i++) {
        if (jumin[i] != '-') {
            printf("%c", jumin[i]);
        }
    }

    printf("\n");
    return 0;
}