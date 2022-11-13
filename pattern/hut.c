#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 2; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= n / 2; i++)
    {
        for (int j = 1; j <= 2 * n / 3; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= 2 * n / 3; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * n / 3; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}