#include <stdio.h>
int checkPrime(int n, int i)
{
    return (n == i) ? 1 : n % i && checkPrime(n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("1 ");
    for (int i = 2; i <= n; i++)
        if (checkPrime(i, 2))
            printf("%d ", i);
}