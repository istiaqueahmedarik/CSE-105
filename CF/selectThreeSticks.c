#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int l;
        scanf("%lld", &l);
        long long int arr[l];
        for (long long int i = 0; i < l; i++)
        {
            scanf("%lld", &arr[i]);
        }

        for (long long int i = 0; i < l; i++)
        {
            for (long long int j = 0; j < l - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    long long int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        long long int minm = arr[1] - arr[0] + arr[2] - arr[1];
        for (int i = 0; i < l - 2; i++)
        {
            if (arr[i + 1] - arr[i] + arr[i + 2] - arr[i + 1] < minm)
            {
                minm = arr[i + 1] - arr[i] + arr[i + 2] - arr[i + 1];
            }
        }
        printf("%lld\n", minm);
    }
}