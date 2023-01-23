#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int x = (n + 1) / 2;
    for (int i = x; i <= n; i++)
    {
        if (i % m == 0)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n");
}