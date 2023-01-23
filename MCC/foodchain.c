#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        int ans = 0;
        while (n > 0)
        {
            n = round(n / k);
            ans++;
        }
        printf("%d\n", ans);
    }
}