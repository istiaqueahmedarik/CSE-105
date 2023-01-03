#include <stdio.h>
int maxm(int arr[], int n, int max)
{
    if (n < 0)
        return max;
    if (arr[n - 1] > max)
        max = arr[n - 1];
    return maxm(arr, n - 1, max);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int ans = maxm(arr, n, arr[0]);
    printf("%d\n", ans);
}