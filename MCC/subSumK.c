#include <stdio.h>
int main()
{
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int current = arr[0];
    long long int max = arr[0];
    int count = 0;
    for (long long int i = 1; i < n; i++)
    {
        if (k > (current + arr[i]))
        {
            current = arr[i];
            count++;
        }
        else
        {
            current = current + arr[i];
        }

        // {
        //     current > max ? max = current : (max = max);
        // }
        if (current > k)
        {
            count++;
            current = arr[i];
        }
        if (max < 0)
        {
            max = 0;
        }
    }
    printf("%d", count);
}