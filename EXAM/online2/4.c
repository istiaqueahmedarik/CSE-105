#include <stdio.h>
int main()
{
    int n, m;
    FILE *ip;
    ip = fopen("input.txt", "r");
    fscanf(ip, "%d %d", &n, &m);
    int arr[n + 1][n + 1];
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        fscanf(ip, "%d %d", &x, &y);
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("Friend list of Person-%d is: ", i);
        for (int j = 1; j <= n; j++)
        {
            if (arr[i][j] == 1)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    fclose(ip);
}