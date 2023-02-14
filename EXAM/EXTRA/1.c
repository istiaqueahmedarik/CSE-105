#include <stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    float ans = 0;
    ans = 1.0 + 1.0 / n + 1.0 / (n - 1.0) + 1.0 / (n - 2.0) + 1.0 / (n - 3.0);
    printf("%f", ans);
}