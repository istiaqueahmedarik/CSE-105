#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int rows[n];
    int cols[n];
    int safe = n;

    for (int j = 0; j < n; j++)
    {
        int row, col;
        scanf("%d %d", &row, &col);
        rows[j] = row;
        cols[j] = col;
    }

    for (int i = 0; i < n; i++)
    {
        if (rows[i] == -1)
            continue;
        else
        {
            for (int j = i + 1; j < n; j++)
            {
                if (rows[i] == rows[j] || cols[i] == cols[j])
                {
                    rows[i] = -1;
                    rows[j] = -1;
                    cols[j] = -1;
                    cols[i] = -1;
                    safe -= 2;
                }
            }
        }
    }
    printf("Safe rooks - %d\n", safe);
    for (int i = 0; i < n; i++)
    {
        if (rows[i] == -1)
            continue;
        else
        {
            printf("%d %d\n", rows[i], cols[i]);
        }
    }
}
