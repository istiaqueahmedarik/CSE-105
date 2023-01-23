#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int one = sqrt((a * c) / b);
    int two = sqrt((a * b) / c);
    int three = sqrt((c * b) / a);
    int ans = 4 * (one + two + three);
    printf("%d", ans);
    return 0;
}