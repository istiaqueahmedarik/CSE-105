#include <stdio.h>
#include <math.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    if (a == 1 && b == 10)
        printf("-1");
    else
    {
        long long int ans = 1;
        for (long long int i = 0; i < a - 1; i++)
        {
            ans *= 10;
            printf("%lld ", ans);
        }
    }
}