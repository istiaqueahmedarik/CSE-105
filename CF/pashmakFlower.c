#include <stdio.h>
#include <limits.h>
long long int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    long long int max = -1;
    long long int min = LONG_MAX;
    for (long long int i = 0; i < n; i++)
    {
        long long int temp;
        scanf("%lld", &temp);
        arr[i] = temp;
        if (temp > max)
        {
            max = temp;
        }
        if (temp < min)
        {
            min = temp;
        }
    }

    long long maxDiff = max - min;

    long long int count1 = 0;
    long long int count2 = 0;
    for (long long int k = 0; k < n; k++)
    {
        if (arr[k] == min)
        {
            count1++;
        }
        else if (arr[k] == max)
            count2++;
        else
            continue;
    }
    if (maxDiff == 0)
    {
        printf("%lld %lld", maxDiff, (n * (n - 1)) / 2);
    }
    else
    {
        printf("%lld %lld", maxDiff, count1 * count2);
    }

    return 0;
}
