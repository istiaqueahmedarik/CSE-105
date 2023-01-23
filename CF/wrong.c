#include <stdio.h>
int main()
{
    long long int n;
    int k;
    scanf("%lld %d", &n, &k);
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n = n - 1;
        }
    }
    printf("%lld", n);

    return 0;
}