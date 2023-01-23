#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int count = 0;
    for (long long int i = 1; i <= n; i++)
    {
        for (long long int j = i + 1; j <= n; j++)
        {
            count++;
        }
    }
    printf("%lld", count);
}