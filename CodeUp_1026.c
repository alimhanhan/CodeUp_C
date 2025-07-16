#include <stdio.h>

int main() {
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);  // 콜론(:)을 기준으로 시, 분, 초를 분리해서 입력
    printf("%d\n", m);             // 분만 출력
    return 0;
}