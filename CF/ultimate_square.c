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
        long long int last = 0;
        last = ceil(n / 2.0);

        printf("%lld\n", last);
    }
}