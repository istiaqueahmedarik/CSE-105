#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);

    printf("%lld\n", ((n * n) * (n * n + 1) / 4));
}