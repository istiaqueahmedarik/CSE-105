#include <stdio.h>
int prime(int n)
{
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r;
        scanf("%d%d", &l, &r);
        for (int i = l; i <= r; i++)
        {
            if (prime(i))
                printf("%d ", i);
        }
        printf("\n");
    }
}