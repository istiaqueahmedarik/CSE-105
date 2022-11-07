#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x = 1;
    for (int i = 0; i <= n; i++)
    {
        int num = 1;

        for (int j = 0; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k <= i; k++)
        {

            int nFac = 1, rFac = 1, NRfac = 1;
            for (int j = i; j > 0; j--)
            {
                nFac *= j;
            }
            for (int j = k; j > 0; j--)
            {
                rFac *= j;
            }
            for (int j = i - k; j > 0; j--)
            {
                NRfac *= j;
            }
            int ans = nFac / (rFac * NRfac);
            printf("%5.d", ans);
        }

        printf("\n");
    }
}
