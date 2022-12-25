#include <stdio.h>
int f(int n)
{
    if (n == 1)
    {
        printf("1 ");
        return 1;
    };
    f(n - 1);
    printf("%d ", n);
}

int main()
{
    int r, n;
    scanf("%d", &n);
    r = f(n);
}