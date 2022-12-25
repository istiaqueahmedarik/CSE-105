#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long sum = 0;
    for (long long int i = 1; i < n; i++)
    {
        sum += (n - i) * i;
    }
    printf("%lld", sum + n);
}