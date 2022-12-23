#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int x, y;
        scanf("%lld %lld", &x, &y);
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        if (x == 0 && y == 0)
        {
            printf("0\n");
        }
        else
        {
            long long int max = {x >= y ? x : y};
            long long int min = {x <= y ? x : y};
            if (a + a <= b)
            {
                printf("%lld\n", (x + y) * a);
            }
            else if (a + a > b)
            {
                printf("%lld\n", min * b + (max - min) * a);
            }
        }
    }
}