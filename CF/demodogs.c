#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        long long rate = 3;
        long long sat = 1;
        long long ans = 1;
        while (sat != n * n)
        {
            long long prev = sat;
            sat += rate;
            ans += sat + (prev + sat - 1) / 2;
            rate += 2;
        }
        long long int x = 10e9 + 7;
        printf("%lld\n", (2022 * ans) % x);
    }
}