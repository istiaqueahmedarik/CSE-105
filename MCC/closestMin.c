#include <stdio.h>
#include <limits.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int min = LONG_MAX;
    long long int firstIndex;
    long long int distance = n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        long long int temp;
        scanf("%lld", &temp);
        arr[i] = temp;
        if (temp < min)
        {
            min = temp;
            firstIndex = i;
        }
    }

    for (long long int i = firstIndex + 1; i < n; i++)
    {
        if (arr[i] == min)
        {
            if ((i - firstIndex) < distance)
            {
                distance = i - firstIndex;
            }
            firstIndex = i;
        }
    }
    printf("%lld\n", distance);
}