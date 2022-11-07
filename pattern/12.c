#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            int j;
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    break;
                }
            }
            if (j == i / 2 + 1)
            {
                printf("%d ", i);
            }
        }
    }
}