#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        long long int arr[n];
        for (long long int i = 0; i < n; i++)
        {
            long long int temp;
            scanf("%lld", &temp);
            arr[i] = temp;
        }
        long long int max = arr[0];
        long long int max_local = arr[0];

        for (long long int i = 0; i < n; i++)
        {

            if (arr[i] > (max + arr[i]))
            {
                max_local = arr[i];
            }
            else
            {

                max_local += arr[i];
            }
            if (max_local > max)
            {
                max = max_local;
            }
        }
        printf("%lld", max);
    }
}