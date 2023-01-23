#include <stdio.h>
int main()
{

    while (1)
    {
        int n, i;
        scanf("%d", &n);
        if (n == 0)
            break;
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                printf("NOT PRIME\n");
                break;
            }
        }
        if (i == n / 2 + 1)
        {
            printf("PRIME\n");
        }
    }
}