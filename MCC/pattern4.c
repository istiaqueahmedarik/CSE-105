#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - j == 0)
            {
                printf("%d ", n - i);
            }
            else if (j - i > 0)
            {
                printf("%d ", n - i);
            }
            else
            {
                printf("%d ", n - j);
            }
        }
        for (int j = n - 2; j >= 0; j--)
        {
            if (i - j == 0)
            {
                printf("%d ", n - i);
            }
            else if (j - i > 0)
            {
                printf("%d ", n - i);
            }
            else
            {
                printf("%d ", n - j);
            }
        }

        printf("\n");
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - j == 0)
            {
                printf("%d ", n - i);
            }
            else if (j - i > 0)
            {
                printf("%d ", n - i);
            }
            else
            {
                printf("%d ", n - j);
            }
        }

        for (int j = n - 2; j >= 0; j--)
        {
            if (i - j == 0)
            {
                printf("%d ", n - i);
            }
            else if (j - i > 0)
            {
                printf("%d ", n - i);
            }
            else
            {
                printf("%d ", n - j);
            }
        }

        printf("\n");
    }
}