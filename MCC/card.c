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
        long long int sum = 0;
        for (long long int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        long long int j;
        scanf("%lld", &j);

        for (long long int i = 0; i < j; i++)
        {
            long long int temp;
            scanf("%lld", &temp);
            sum += temp;
        }
        printf("%lld\n", arr[sum % n]);
    }
}