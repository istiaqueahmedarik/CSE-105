#include <stdio.h>
int power(int x, int n)
{
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}
int series(int n)
{
    if (n == 0)
        return 0;
    return power(n, n) + series(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", series(n));
}