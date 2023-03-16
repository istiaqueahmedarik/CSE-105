#include <stdio.h>
long long dp[100000000];
long long fibo(long long n)
{
    if (n == 0)
        return dp[0] = 0;
    if (n == 1)
        return dp[1] = 1;
    if (dp[n] == 0)
        return dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
}
void print(long long n)
{
    if (n == 0)
        return;
    print(n - 1);
    if (dp[n] == 0)
        fibo(n);
    printf("%lld ", dp[n]);
}

int main()
{
    long long n;
    scanf("%lld", &n);
    print(n);
}