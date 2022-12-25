#include <stdio.h>
int main()
{
    int n, i, j, x, y, z;
    scanf("%d", &n);
    x = n;
    y = n + 1;
    z = n + 1;
    for (i = 1; i <= n; i++)
    {
        if (i > 2)
        {
            x--;
        }
        for (j = 1; j <= x; j++)
        {
            printf("%d", j);
        }
        if (i > 1)
        {
            for (j = 1; j <= i - 1; j++)
            {
                printf(" ");
            }
        }

        for (j = 1; j <= z; j++)
        {
            printf("%d", y);
            y--;
        }
        z--;
        y = z;
        printf("\n");
    }
    for (i = 1; i <= n + 1; i++)
    {
    }
    return 0;
}