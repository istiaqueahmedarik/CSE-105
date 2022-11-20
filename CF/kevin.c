#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a, b;
        if (n % 2 == 0)
        {
            a = n / 2;
            b = n;
            for (int i = 1; i <= n / 2; i++)
            {
                printf("%d %d ", a, b);
                a--;
                b--;
            }
            printf("\n");
        }
        else
        {
            a = n / 2 + 1;
            b = n;
            for (int i = 1; i <= n / 2; i++)
            {
                printf("%d %d ", a, b);
                a--;
                b--;
            }
            printf("1");
            printf("\n");
        }
    }
}