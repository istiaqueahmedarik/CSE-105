#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    n /= 2;
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
        for (int j = 1; j <= i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n - i; j++)
        {
            printf("*");
        }
        for (int j = 1; j < n - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}