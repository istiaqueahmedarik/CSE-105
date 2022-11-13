#include <stdio.h>
int main()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    long long int ans = 0;
    long long int p = 1;
    for (long long int i = 0; i < m; i++)
    {
        long long int temp;
        scanf("%lld", &temp);
        /* Calculating the distance between two circular points. */
        ans += (temp - p + n) % n;
        p = temp;
    }

    printf("%lld\n", ans);
}