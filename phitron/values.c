
#include <stdio.h>
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int ideal_sum = 0;
    for (int k = 0; k < 3; k++)
    {
        ideal_sum += arr[0][k];
    }
    for (int p = 0; p < 3; p++)
    {
        int row_sum = 0;
        int col_sum = 0;
        for (int t = 0; t < 3; t++)
        {
            row_sum += arr[p][t];
            col_sum += arr[p][t];
        }
        if (row_sum != ideal_sum || col_sum != ideal_sum)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}