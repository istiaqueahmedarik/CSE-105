#include <stdio.h>
void number(int n, int i, int x)
{
    if (n == 0)
        return;
    if (i)
    {
    }
}
void star(int n, int x)
{
    if (n == 0)
        return;
    if (n == x / 2)
        number(n, 1, n);
    number(n, 0);
    printf("\n");
    star(n - 1, x);
}
int main()
{
    int n;
    scanf("%d", &n);
    star(n, n);
}