#include <stdio.h>
int fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
void series(int n)
{
    if (n == 1)
    {
        printf("1 ");
        return;
    }
    else
    {
        series(n - 1);
        printf("%d ", fibo(n));
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    series(n);
}