#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        long long int sum = 0;
        for (long long int i = 0; i < n; i++)
        {
            long long int temp;
            scanf("%lld", &temp);
            sum += temp;
        }

        printf("%lld\n", llabs(sum));
    }
}