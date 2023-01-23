#include <stdio.h>
#include <math.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ans = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (m > 0 && arr[i] < 0)
        {
            ans += fabs(arr[i]);
            m--;
        }
    }
    printf("%d", ans);
}