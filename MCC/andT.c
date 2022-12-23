#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        long long int n1 = n;

        long long int count = 0;
        long long int x = 1;
        while (n1 != 0)
        {
            count++;
            n1 /= 2;
        }
        count--;
        while (count--)
        {
            x *= 2;
        }
        printf("%lld\n", n - (n % x + 1));
    }
}