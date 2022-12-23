#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        long long int arr[n];
        long long int min = LONG_MAX;
        long long int max = LONG_MIN;
        for (long long int i = 0; i < n; i++)
        {
            long long int temp;
            scanf("%lld", &temp);
            if (temp > max)
                max = temp;
            if (temp < min)
                min = temp;
            arr[i] = temp;
        }

        long long int count1 = 0;
        long long int count2 = 0;
        long long int ans;
        for (long long int i = 0; i < n; i++)
        {
            if (arr[i] == min)
                count1++;
            if (arr[i] == max)
                count2++;
        }
        if (max == min)
        {
            ans = (count1 - 1) * count1;
        }
        else
        {
            ans = 2 * count1 * count2;
        }
        printf("%lld\n", ans);
    }
}