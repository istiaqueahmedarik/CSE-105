#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[12];
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
        sum += temp;
    }
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12 - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int ans = 0;
    int k = 0;
    if (sum < n)
    {
        printf("-1");
        return 0;
    }
    while (n > 0)
    {
        ans++;
        n -= arr[k];
        k++;
    }
    printf("%d\n", ans);
}