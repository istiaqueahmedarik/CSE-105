#include <stdio.h>
int checkPrime(int n, int i)
{
    return (n == i) ? 1 : n % i && checkPrime(n, i + 1);
}
int sumDigits(int n)
{
    return (n) ? n % 10 + sumDigits(n / 10) : 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (checkPrime(sumDigits(n), 2))
        printf("Yes");
    else
        printf("No");
}