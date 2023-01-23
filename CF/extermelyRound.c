#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int x;
        scanf("%lld", &x);
        long long temp = 1;
        long long int digit = 0;
        long long int temp1;
        long long int y = x;
        while (y != 0)
        {
            temp1 = y % 10;
            y /= 10;
            digit++;
        }

        printf("%lld\n", (digit - 1) * 9 + temp1);
    }
}