#include <stdio.h>
int pascals(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    return pascals(n - 1, r - 1) + pascals(n - 1, r);
}
void space(int n)
{
    if (n <= 0)
        return;
    printf(" ");
    space(n - 1);
}
void number(int n, int r)
{
    if (r < 0)
        return;
    number(n, r - 1);
    printf("%d ", pascals(n, r));
}
void print(int n, int i)
{
    if (n == 0)
        return;
    space(n - 1);
    number(i - 1, i - 1);
    printf("\n");
    print(n - 1, i + 1);
    if (n != 1)
    {
        space(n - 1);
        number(i - 1, i - 1);
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n, 1);
}