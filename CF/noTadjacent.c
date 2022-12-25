#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int start = 1;
        if (n == 1)
            printf("1\n");
        else if (n == 2)
            printf("-1\n");
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%d ", start);
                    if (start + 2 > n * n)
                    {
                        start = 2;
                    }
                    else
                    {
                        start += 2;
                    }
                }
                printf("\n");
            }
        }
    }
}