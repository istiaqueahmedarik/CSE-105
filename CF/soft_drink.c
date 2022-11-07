#include <stdio.h>
int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int sum = (k * l) / nl;
    if (p / np < sum)
    {
        sum = p / np;
    }
    if (c * d < sum)
    {
        sum = c * d;
    }

    printf("%d\n", sum / n);
    return 0;
}