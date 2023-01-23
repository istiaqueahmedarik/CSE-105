#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        int x = (k - 1) / (n - 1);
        printf("%d\n", k + x);
    }
}