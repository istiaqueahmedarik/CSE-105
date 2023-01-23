#include <stdio.h>
int prime(int n, int i)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;
    return prime(n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", prime(n, 2));
}