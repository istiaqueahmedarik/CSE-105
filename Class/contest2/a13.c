#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int ans = 0;
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (y - x >= 2)
            ans++;
    }
    printf("%d\n", ans);
}