#include <stdio.h>
int max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    int r, c;
    scanf("%d%d", &r, &c);
    int mat[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);
    int maxSum = 0;
    for (int i = 0; i < r; i++)
    {
        int mx = -99999;
        for (int j = 0; j < c; j++)
        {
            mx = max(mx, mat[i][j]);
        }
        maxSum += mx;
    }
    printf("%d", maxSum);
}