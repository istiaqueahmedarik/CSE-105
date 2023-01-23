#include <stdio.h>
void space(int n)
{
    if (n == 0)
        return;
    printf(" ");
    space(n - 1);
}
void star(int n)
{
    if (n == 0)
        return;
    printf("*");
    star(n - 1);
}
void pattern(int n, int r)
{
    if (n == 0)
        return;
    pattern(n - 1, r + 1);
    space(r);
    star(n);
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    pattern(n, 0);
}