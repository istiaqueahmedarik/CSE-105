#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int l, k;
        scanf("%lld %lld", &l, &k);
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
        long long int ans[l];

        int start = 0;
        for (long long int i = 0; i < l; i++)
        {
            long long int j;
            for (j = i + 1; j < l; j++)
            {
                if (fabs(arr[j] - arr[i]) <= k)
                {
                    long long int temp = arr[i + 1];
                    arr[i + 1] = arr[j];
                    arr[j] = temp;
                    break;
                }
                if (j == l - 1 && fabs(arr[j] - arr[i]) > k)
                {
                    printf("No Solution\n");
                    start = 1;
                    i = l + 1;
                    break;
                }
            }
        }

        if (start != 1)
        {
            for (long long int i = 0; i < l; i++)
            {
                if (i == l - 1)
                {
                    printf("%lld", arr[i]);
                }
                else
                {
                    printf("%lld ", arr[i]);
                }
            }
            printf("\n");
        }
    }
}