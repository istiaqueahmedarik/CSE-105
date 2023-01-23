#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        int arr[m];
        int disq[m];
        for (int i = 0; i < m; i++)
        {
            arr[i] = 0;
            disq[i] = 0;
        }
        for (int i = 0; i < m; i++)
        {
            int temp;
            scanf("%d", &temp);
            if (temp == i + 1)
            {
                disq[temp - 1] = 1;
            }
            arr[temp - 1]++;
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            if (arr[i] >= n && disq[i] != 1)
            {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
}