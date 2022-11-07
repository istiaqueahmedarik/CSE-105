#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ans = 0;
    int x[1000];
    int y[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int u = 0, l = 0, r = 0, d = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (x[i] > x[j] && y[i] == y[j])
                    l = 1;
                if (x[i] < x[j] && y[i] == y[j])
                    r = 1;
                if (x[i] == x[j] && y[i] > y[j])
                    d = 1;
                if (x[i] == x[j] && y[i] < y[j])
                    u = 1;
            }
        }
        if (d == 1 && l == 1 && r == 1 && u == 1)
        {

            ans++;
        }
    }
    printf("%d", ans);
}