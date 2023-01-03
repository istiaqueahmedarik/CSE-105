#include <stdio.h>
int init(int i, int n)
{
    if (n == 0)
        return i;
    return (i + 1, n - 1);
}
void print(int n, int i)
{
    if (n == 0)
        return;
    if (n == 1)
    {
        printf("1");
        return;
    }
    printf("%d ", i);
    print(n - 1, i + 1);
}
void pattern(int n, int start)
{
    if (start > n)
        return;
    printf
        pattern(n, start + 1);
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    pattern(n, 1);
}