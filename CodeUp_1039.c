#include <stdio.h>

int main() {
    long long int a, b;   // int로는 범위를 담을 수 없으므로 long long int 사용
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", a + b);
    return 0;
}