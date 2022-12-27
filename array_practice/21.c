#include <stdio.h>
int main()
{
    int r, c, r1, c1;
    scanf("%d%d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d%d", &r1, &c1);
    int arr1[r1][c1];
    int ans[r][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            int val = 0;
            for (int k = 0; k < r1; k++)
            {
                val += arr[i][k] * arr1[k][j];
            }
            ans[i][j] = val;
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}