#include <stdio.h>

int main()
{
    float a;

    scanf("%f", &a);     //실수형 출력과 입력은 f로 한다. scanf에는 printf 와는 다르게 &(엠퍼센드)가 붙어야 한다.
    printf("%f", a);

    return 0;
}