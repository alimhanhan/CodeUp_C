#include <stdio.h>

int main(void) {
    long long a, b;  // int 대신 long long 사용
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", a + b);
    return 0;
}