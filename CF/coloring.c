#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, k;
        scanf("%d%d%d", &n, &m, &k);
        int arr[n];
        int max = -1;
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        if ((max)-ceil(max / k) > k)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}