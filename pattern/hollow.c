#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                printf("*");
            }
            else
            {

                printf(" ");
            }
        }
        for (int j = 2; j <= i; j++)
        {
            if (j == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n - i; j++)
        {
            if (j == 1)
            {
                printf("*");
            }
            else
            {

                printf(" ");
            }
        }
        for (int j = 1; j <= n - i - 1; j++)
        {
            if (j == n - i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}