#include <stdio.h>
#include <limits.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int small = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            int temp;
            scanf("%d", &temp);
            if (temp < small)
            {
                small = temp;
            }
        }
        if (small > ans)
        {
            ans = small;
        }
    }
    printf("%d", ans);
}