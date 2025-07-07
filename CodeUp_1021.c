#include <stdio.h>

int main() {
    char data[51] = "";  // 최대 50자 + 널문자('\0')를 위한 배열 크기 51
    scanf("%s", data);   // 한 단어 입력 받기
    printf("%s", data);  // 그대로 출력
    return 0;
}
