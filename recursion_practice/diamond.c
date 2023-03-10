#include <stdio.h>
void star_on_line(int n)
{
    if (n == 0)
        return;
    printf("* ");
    star_on_line(n - 1);
}
void space(int n)
{
    if (n <= 0)
        return;
    printf(" ");
    space(n - 1);
}
void star(int n, int i)
{
    if (n == 0)
        return;
    space(n - 1);
    star_on_line(i);
    printf("\n");
    star(n - 1, i + 1);
    if (n != 1)
    {
        space(n - 1);
        star_on_line(i);
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    star(n, 1);
}