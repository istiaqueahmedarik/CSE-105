#include <stdio.h>
#include <limits.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    long long int min = LONG_MAX;
    for (long long int i = 0; i < n; i++)
    {
        long long int temp;
        scanf("%lld", &temp);
        arr[i] = temp;
        if (temp < min)
        {
            min = temp;
        }
    }
    for (long long int i = 0; i < n; i++)
    {
        if (arr[i] % min == 0)

        {
            continue;
        }
        else
        {
            printf("-1");
            return 0;
        }
    }
    printf("%lld", min);
}