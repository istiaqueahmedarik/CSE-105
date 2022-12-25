#include <stdio.h>
typedef long long ll;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll a, b, n, s;
        scanf("%lld%lld%lld%lld", &a, &b, &n, &s);
        if (s % n > b)
        {
            printf("NO\n");
        }
        else
        {
            if (a * n + b >= s)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}