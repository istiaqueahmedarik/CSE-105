#include <stdio.h>

#define N 200010

int main()
{
    int n, a[N], b[N], c[N], d[N];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n + 1; i++)
    {
        c[i] = 0;
        d[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        c[a[i]]++;
        d[b[i]]++;
    }

    for (int i = 0; i < n + 1; i++)
    {
        if (c[i] + d[i] > n)
        {
            printf("No\n");
            return 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        c[i] += c[i - 1];
        d[i] += d[i - 1];
    }

    int x = 0;
    for (int i = 1; i <= n; i++)
    {
        x = (c[i] - d[i - 1] > x) ? c[i] - d[i - 1] : x;
    }

    printf("Yes\n");
    for (int i = 0; i < n; i++)
    {
        if (i)
        {
            printf(" ");
        }
        printf("%d", b[(i + n - x) % n]);
    }
    printf("\n");

    return 0;
}
