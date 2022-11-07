#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int box, a, b, n, s, x;
        scanf("%lld %lld %lld", &n, &x, &s);
        box = x;

        for (long long int i = 0; i < s; i++)
        {
            scanf("%lld %lld", &a, &b);
            if (a == box)
            {
                box = b;
            }
            else if (b == box)
            {
                box = a;
            }
        }
        printf("%lld\n", box);
    }
}