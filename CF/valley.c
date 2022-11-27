#include <stdio.h>
long long int tangent(long long int y, long long int x);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        long long int arr[n];
        long long int presentSit = -1;
        for (long long int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        long long int left = 1;
        long long int right = 2;
        long long int prevSit = tangent(arr[1], arr[0]);
        long long int sit;
        int flag = 0;
        while (right < n)
        {
            sit = tangent(arr[right], arr[left]);
            if (prevSit == 1 && sit == -1)
            {
                printf("NO\n");
                break;
            }
            if (prevSit == -1 && sit == 0)
            {
                flag = 1;
            }
            if (prevSit == -1 && sit == 1)
            {
                flag = 1;
            }
            if (flag == 0 && prevSit == 1 && sit == 1)
            {
                flag = 1;
            }

            prevSit = sit;
            left++;
            right++;
        }
        if (flag == 0)
        {
            printf("NO\n");
        }
        else if (right >= n)
        {
            printf("YES\n");
        }
    }
}

long long int tangent(long long int y, long long int x)
{
    int del = y - x;
    if (del < 0)
    {
        return -1;
    }
    else if (del == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}