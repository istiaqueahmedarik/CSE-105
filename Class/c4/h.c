#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[1005] = {0};
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            scanf("%d", &temp);
            arr[temp]++;
        }
        for (int i = 0; i < n + 5; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        int count = 0;
        for (int i = 0; i < n + 5; i++)
        {
            if (arr[i] == max)
            {
                count++;
            }
        }
        if (count == 1 && n != 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}