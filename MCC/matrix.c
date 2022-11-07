#include <stdio.h>
#include <math.h>
int main()
{
    long long int n, x;
    scanf("%lld %lld", &n, &x);
    long long int count = 0;
    for (long long int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            long long int first = i;
            long long int sec = x / i;
            if (first <= n && sec <= n && first == sec)
            {
                count++;
            }
            else if (first <= n && sec <= n && first != sec)
            {
                count += 2;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}