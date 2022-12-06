#include <stdio.h>

long long int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (long long int i = 0; i < n; i++)
    {
        for (long long int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                long long int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    long long maxDiff = arr[n - 1] - arr[0];

    long long int count1 = 0;
    long long int count2 = 0;
    for (long long int k = 0; k < n; k++)
    {
        if (arr[k] == arr[0])
            count1++;
        else if (arr[k] == arr[n - 1])
            count2++;
    }

    printf("%lld %lld", maxDiff, count1 * count2);
    return 0;
}
