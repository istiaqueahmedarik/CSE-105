#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            scanf("%d", &temp);
            sum += temp;

            if (temp == 0)
            {
                ans++;
                sum = 0;
            }
            else if (sum == 0)
            {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
}