#include <stdio.h>
int main()
{
    long long int t;
    scanf("%lld", &t);
    while (t--)
    {
        long long int n, q;
        scanf("%lld %lld", &n, &q);
        long long int arr[n];
        long long int max = 0;
        long long int count = 0;
        long long int freq[100000] = {0};
        for (long long int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (freq[arr[i]] == 0)
                count++;
            freq[arr[i]]++;
        }

        while (q--)
        {
            long long int a;
            scanf("%lld", &a);
            if (a == 1)
            {
                long long int c, d;
                scanf("%lld %lld", &c, &d);
                freq[arr[c - 1]]--;
                if (freq[arr[c - 1]] == 0)
                    count--;
                arr[c - 1] = d;
                freq[d]++;
                if (freq[d] == 1)
                    count++;
            }
            else
            {
                printf("%lld\n", count);
            }
        }
    }
}
