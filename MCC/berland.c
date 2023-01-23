#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = -99999;
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
        if (temp > max)
        {
            max = temp;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += max - arr[i];
    }
    printf("%d", ans);
}