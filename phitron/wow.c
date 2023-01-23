#include <stdio.h>
void pattern(int n, int k)
{
    if (n == 1)
    {
        for (int i = 0; i < k; i++)
        {
            printf(" ");
        }
        printf("^\n");
    }
    else
    {
        pattern(n - 1, k + 1);
        for (int i = 0; i < k; i++)
        {
            printf(" ");
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < 2 * n - 1; i++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int i = 0; i < 2 * n - 1; i++)
            {
                printf("^");
            }
            printf("\n");
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    pattern(n, 0);
}