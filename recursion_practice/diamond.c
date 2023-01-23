#include <stdio.h>
void space(int n)
{
    if (n == 0)
        return;
    space(n - 1);
    printf(" ");
}
void star(int r)
{
    if (r == 0)
        return;
    star(r - 1);
    printf("*");
}
void print(int n, int r)
{
    if (n == 0)
        return;
    space(n);
    star(2 * r + 1);
    printf("\n");
    print(n - 1, r + 1);
    space(n);
    star(2 * r + 1);
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n, 0);
}