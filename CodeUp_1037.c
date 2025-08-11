#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;   // 입력 실패 시 종료

    /* 입력 조건에 따라 0~255 범위만 들어온다고 가정.
       char가 signed인 플랫폼에서도 안전하게 출력하려면 unsigned char로 캐스트. */
    unsigned char ch = (unsigned char) n;
    printf("%c\n", ch);

    return 0;
}
