#include <stdio.h>
void print(int n, int i)
{
    if (n == 0)
        return;
    printf("%d ", i);
    print(n - 1, i + 2);
}
void pattern(int n)
{
    if (n == 0)
        return;
    pattern(n - 1);
    print(n, 1);
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    pattern(n);
}