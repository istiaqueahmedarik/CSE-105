#include <stdio.h>
#include <math.h>

int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        long long int n;
        scanf("%lld", &n);
        double ans = 0.0;
        if (n > 100000)
        {
            for (int i = 1, j = (n / 2) + 1; i <= n / 2; i++, j++)
            {
                ans += 1.0 / i;
                ans += 1.0 / j;
            }
            if (n % 2 != 0)
            {
                ans += 1.0 / n;
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                ans += 1.0 / i;
            }
        }
        printf("Case %d: %0.10lf\n", i, ans);
    }
    return 0;
}