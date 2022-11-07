#include <stdio.h>
int checkPrime(long long int number);
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int ans = n;
    int j = 1;
    while (j == 1)
    {
        long long int real = ans;
        long long int num = ans;
        long long int rev = 0;
        while (num != 0)
        {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        if (rev == real && checkPrime(ans) == 1)
        {
            printf("%lld\n", ans);
            break;
        }
        ans++;
    }
    return 0;
}
int checkPrime(long long int number)
{
    long long int i;
    long long int num = number;
    int prime = 0;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {

            break;
        }
    }
    if (i == num / 2 + 1)
    {

        prime = 1;
    }
    return prime;
}