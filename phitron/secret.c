#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        long long int i;
        if (n == 1)
        {
            printf("No\n");
        }
        else
        {
            for (i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    printf("No\n");
                    break;
                }
            }

            if (i == n / 2 + 1)
            {
                printf("Yes\n");
            }
        }
    }
}