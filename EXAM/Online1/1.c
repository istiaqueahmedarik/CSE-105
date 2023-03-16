#include <stdio.h>

int main(void)
{
    float x, y;
    scanf("%f %f", &x, &y);
    float four_digits = x * 10000;
    float four_digits2 = y * 10000;
    int int_part1 = (int)four_digits;
    int int_part2 = (int)four_digits2;
    int extra1 = 0, extra2 = 0;
    if (int_part1 % 10 >= 5)
        extra1 = 1;
    if (int_part2 % 10 >= 5)
        extra2 = 1;
    int_part1 = int_part1 / 10;
    int_part2 = int_part2 / 10;
    int_part1 = int_part1 + extra1;
    int_part2 = int_part2 + extra2;
    float result = (float)int_part1 / 1000;
    float result2 = (float)int_part2 / 1000;
    printf("%.3f", result + result2);
    return 0;
}
