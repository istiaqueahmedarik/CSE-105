#include <stdio.h>
int min(int arr[], int n, int m)
{
    if (n == 0)
    {
        if (arr[0] < m)
            m = arr[0];
        return m;
    }
    if (arr[n] < m)
        m = arr[n];
    return maximum(arr, n - 1, m);
}
int main()
{
    int n;
    printf("Enter the number of element in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int minm = min(arr, n - 1, arr[0]);
    printf("%d ", minm);
}