#include <stdio.h>

int main() {
    double d;

    // 실수 입력 (double형)
    scanf("%lf", &d);

    // 소수점 이하 11자리까지 출력
    printf("%.11lf", d);

    return 0;
}
