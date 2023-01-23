#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[100000];
        for (int i = 0; i < n; i++)
        {
            int temp;
            scanf("%d", &temp);
            arr[i] = temp;
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                ans += 2;
                if (arr[i] != arr[i - 1] && i != 0)
                {
                    ans--;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}