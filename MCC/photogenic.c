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
            int temp;
            scanf("%d", &temp);
            arr[i] = temp;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                printf("%d ", arr[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                printf("%d ", arr[i]);
            }
        }
    }
}