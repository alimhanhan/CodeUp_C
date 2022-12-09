#include <stdio.h>

int main()
{
    int year;
    int month;
    int day;

    scanf_s("%d.%d.%d", &year, &month, &day);
    printf("%04d.%02d.%02d", year, month, day);

    return 0;
}