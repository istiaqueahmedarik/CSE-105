#include <stdio.h>
void star_on_line(int n, int i)
{
    if (n == 0)
        return;
    if (n == i || n == 1)
        printf("* ");
    else
        printf("  ");
    star_on_line(n - 1, i);
}
void space(int n)
{
    if (n <= 0)
        return;
    printf(" ");
    space(n - 1);
}
void STAR(int n, int i)
{
    if (n == 0)
        return;
    space(n - 1);
    star_on_line(i, i);
    printf("\n");
    STAR(n - 1, i + 1);
    if (n != 1)
    {
        space(n - 1);
        star_on_line(i, i);
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    STAR(n, 1);
}