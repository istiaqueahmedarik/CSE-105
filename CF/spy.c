#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int new[101];
        for (int i = 0; i < 101; i++)
        {
            new[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            new[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (new[arr[i]] == 1)
            {
                printf("%d\n", i + 1);
                break;
            }
        }
    }
}