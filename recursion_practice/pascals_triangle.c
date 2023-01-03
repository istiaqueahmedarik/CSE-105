#include <stdio.h>
int pascals(int n, int r)
{
    if (n == r || n == 0 || r == 0)
        return 1;
    return pascals(n - 1, r) + pascals(n - 1, r - 1);
}
void space(int s)
{
    if (s == 0)
        return;
    printf(" ");
    space(s - 1);
}
void pattern(int n, int s)
{
    if (n == 0)
    {
        space(s);

        printf("1\n");
        return;
    }

    pattern(n - 1, s + 1);
    space(s);

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", pascals(n, i));
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    pattern(n, 0);
}