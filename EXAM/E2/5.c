#include <stdio.h>
int sumDigits(int n)
{
    return n ? n % 10 + sumDigits(n / 10) : 0;
}
int minSum(int n)
{
    return n < 10 ? n : minSum(sumDigits(n));
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", minSum(n));
}
