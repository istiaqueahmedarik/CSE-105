#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int arr[11] = {0};
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            if (x < 9)
            {
                if (arr[x - 1] < y)
                {
                    arr[x - 1] = y;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < 11; i++)
        {
            sum += arr[i];
        }
        printf("%d\n", sum);
    }
}