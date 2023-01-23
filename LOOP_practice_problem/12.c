#include <stdio.h>
int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    int u = 1, d = 1;
    for (int i = n; i > 0; i--)
    {
        u *= i;
    }
    for (int j = (n - r); j > 0; j--)
    {
        d *= j;
    }
    for (int k = r; k > 0; k--)
    {
        d *= k;
    }
    printf("%d\n", u / d);
    return 0;
}