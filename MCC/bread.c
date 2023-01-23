#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        float n, m, k;
        scanf("%f%f%f", &n, &m, &k);
        float x = n / k;
        if (x <= m)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}