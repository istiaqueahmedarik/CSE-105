#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        long long a[n];
        long long int ans = 1;
        for (long long int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            ans *= a[i];
        }
        printf("%lld\n", 2022 * (ans + n - 1));
    }
}