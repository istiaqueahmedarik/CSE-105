#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ans = 0;
    for (int i = 1; n - i * i >= 0; i++)
    {

        if (i + (n - i * i) * (n - i * i) == m)
        {
            ans++;
        }
    }
    if (n == 1 && m == 1)
        ans++;
    printf("%d\n", ans);
}
