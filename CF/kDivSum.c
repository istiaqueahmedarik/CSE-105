#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        if (k >= n)
        {
            int x = (k % n) ? (k / n) + 1 : (k / n);
            printf("%d\n", x);
        }
        else
        {
            if (n % k)
            {
                printf("2\n");
            }
            else
            {
                printf("1\n");
            }
        }
    }
}