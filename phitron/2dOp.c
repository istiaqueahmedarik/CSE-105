#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp;
            scanf("%d", &temp);
            if (temp == i + 1 && temp == j + 1)
            {
                arr[i][j] = temp + 3;
            }
            else if (temp == i + 1)
            {
                arr[i][j] = temp + 2;
            }
            else if (temp == j + 1)
            {
                arr[i][j] = temp + 1;
            }
            else
            {
                arr[i][j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}