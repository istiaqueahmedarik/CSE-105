#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int ans = 0;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            ans++;
        }
        else
        {
            n += 1;
            ans++;
        }
    }
    printf("%lld", ans);
}