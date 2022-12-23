#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int ans = 0;
    while (n != 0)
    {
        ans += n % 2;
        n /= 2;
    }
    printf("%lld", ans);
}