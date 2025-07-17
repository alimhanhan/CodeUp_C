#include <stdio.h>

int main() {
    int y, m, d;

    // 입력 형식: yyyy.mm.dd
    scanf("%d.%d.%d", &y, &m, &d);

    // 출력 형식: dd-mm-yyyy
    printf("%02d-%02d-%04d", d, m, y);

    return 0;
}
