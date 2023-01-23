#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long int a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        printf("%lld\n", a - (b + c + d));
    }
}