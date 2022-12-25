#include <stdio.h>
int f(int n)
{
    if (n == 1)
        return 1;
    else
    {
        return n * n + f(n - 1);
    }
}
int f1(int n)
{
    if (n == 1)
        return 1;
    else
    {
        if (n % 2 == 0)
        {
            return f1(n - 1) - n;
        }
        else
        {
            return n + f1(n - 1);
        }
    }
}
int f2(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;
    return f2(n - 1) + f2(n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    printf("%d\n", f1(n));
    printf("%d\n", f2(n));
}