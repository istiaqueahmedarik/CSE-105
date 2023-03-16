#include <stdio.h>
// shorter
int power(int x, int n)
{
    return n ? x * power(x, n - 1) : 1;
}
// longer
int power1(int x, int n)
{
    if (n == 0)
        return 1;
    return x * power1(x, n - 1);
}
int main()
{
    int x, n;
    scanf("%d%d", &x, &n);
    printf("%d\n", power(x, n));
    printf("%d", power1(x, n));
}