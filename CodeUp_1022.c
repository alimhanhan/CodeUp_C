#include <stdio.h>

int main() {
    char data[2001];  // 최대 2000자 + NULL 문자

    fgets(data, 2000, stdin);  // 공백 포함 문장 입력
    printf("%s", data);        // 그대로 출력

    return 0;
}
