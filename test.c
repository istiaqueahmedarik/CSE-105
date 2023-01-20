#include <stdio.h>
int main()
{
    int n, r, n1 = 1, r1 = 1, NR = 1;
    scanf("%d %d", &n, &r);

    int res = (n - r);

    for (int i = n; i >= 1; i--) // n!
    {
        n1 *= i;
    }
    for (int i = r; i >= 1; i--) // r!
    {
        r1 *= i;
    }
    for (int i = res; i >= 1; i--) //(n-r)!
    {
        NR *= i;
    }
    printf("%d %d %d %d", n1, r1, NR, (n1 / (r1 * NR)));
}