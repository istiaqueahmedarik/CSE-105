#include <stdio.h>
int checkPrime(int n, int i)
{
    return (n == i) ? 1 : n % i && checkPrime(n, i + 1);
}
void printPrimeDivisor(int n, int i)
{

    if (!(n % i) && checkPrime(i, 2))
        printf("%d ", i);

    (i == n) ?: printPrimeDivisor(n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printPrimeDivisor(n, 2);
}