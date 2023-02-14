#include <stdio.h>
int ncr(int n, int r)
{
    if (r == 0 || r == n)
        return 1;
    else
        return ncr(n - 1, r - 1) + ncr(n - 1, r);
}
void lines(int n, int r)
{
    if (r < 0)
        return;
    lines(n, r - 1);
    printf("%d ", ncr(n, r));
}
void pascals(int n)
{
    if (n < 0)
        return;
    pascals(n - 1);
    lines(n, n);
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    pascals(n - 1);
}