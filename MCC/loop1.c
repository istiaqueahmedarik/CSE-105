#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);

        long long int ans = 0;

        while (n > 0)
        {
            ans += n / 5;

            n /= 5;
        }
        printf("%lld\n", ans);
    }
    return 0;
}