#include <stdio.h>
void print(int i, int j)
{
    if (i == 0)
        return;
    printf("%d ", j % 2);
    print(i - 1, j + 1);
}
void pattern(int n, int i, int j)
{
    if (i > n)
        return;

    j = j + i - 1;
    print(i, j);
    printf("\n");
    pattern(n, i + 1, j);
}
int main()
{
    int n;
    scanf("%d", &n);
    pattern(n, 1, 1);
}