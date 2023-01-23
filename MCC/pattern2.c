#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    n++;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j < i; j++)
        {
            printf("%d ", j - 1);
        }
        for (int j = i; j > 0; j--)
        {
            if (j == 1)
            {
                printf("%d", j - 1);
            }
            else
            {
                printf("%d ", j - 1);
            }
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j < n - i; j++)
        {
            printf("%d ", j - 1);
        }
        for (int j = n - i; j > 0; j--)
        {
            if (j == 1)
            {
                printf("%d", j - 1);
            }
            else
            {
                printf("%d ", j - 1);
            }
        }
        printf("\n");
    }
}