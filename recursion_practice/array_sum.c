#include <stdio.h>
int sum(int arr[], int n)
{
    if (n == 0)
        return arr[0];
    return arr[n] + sum(arr, n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d\n", sum(arr, n - 1));
}