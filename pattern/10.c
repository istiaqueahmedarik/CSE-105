#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        int num = 1;
        int val = 0;
        for (int j = 0; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k <= i; k++)
        {

            if (i == 0 || k == 0)
            {
                val = 1;
            }
            else
            {
                val = val * (i - k + 1) / k;
            }
            printf("%5d", val);
        }

        printf("\n");
    }
}
