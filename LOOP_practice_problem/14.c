#include <stdio.h>
int main()
{
    int m, n, mul = 1;
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= n; i++)
    {
        mul *= m;
    }
    printf("%d\n", mul);
    return 0;
}