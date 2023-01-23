#include <stdio.h>
void pr(int n)
{
    if (n < 0)
        return;
    pr(n - 1);
    printf("* ");
}
void pattern(int n)
{
    if (n < 0)
        return;
    pattern(n - 1);
    pr(n);
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);
}