#include <stdio.h>
long long prime(long long n)
{
    for (long long i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return -1;
    }
    return 1;
}

int main()
{
    long long t;
    scanf("%lld", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        if (n == 1)
            printf("-1\n");
        else
        {
            printf("2");
            for (long long i = 0; i < n - 1; i++)
            {
                printf("3");
            }
            printf("\n");
        }
    }
}