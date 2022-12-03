#include <stdio.h>

int main()
{
    long long int n, m, l;
    scanf("%lld %lld %lld", &n, &m, &l);
    long long int mat1[n][m];
    long long int mat2[m][l];
    for (long long int i = 0; i < n; i++)
    {
        for (long long int j = 0; j < m; j++)
        {
            scanf("%lld", &mat1[i][j]);
        }
    }
    for (long long int i = 0; i < m; i++)
    {
        for (long long int j = 0; j < l; j++)
        {
            scanf("%lld", &mat2[i][j]);
        }
    }
    long long int ans[n][l];
    for (long long int i = 0; i < n; i++)
    {
        for (long long int j = 0; j < l; j++)
        {
            long long int temp = 0;
            for (long long int k = 0; k < m; k++)
            {
                temp += mat1[i][k] * mat2[k][j];
            }
            ans[i][j] = temp;
        }
    }

    for (long long int i = 0; i < n; i++)
    {
        long long int j;
        for (j = 0; j < l; j++)
        {
            if (j == l - 1)
            {
                printf("%lld", ans[i][j]);
            }
            else
            {
                printf("%lld ", ans[i][j]);
            }
        }
        printf("\n");
    }
}