#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 0, j = 0, k = 0;
    for (n; n > 0; n--)
    {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        i += x;
        j += y;
        k += z;
    }
    if (i == 0 && j == 0 && k == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}