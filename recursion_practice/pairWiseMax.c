#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
void pairwise(int arr[], int pair[], int n, int l, int r)
{
    if (r > n)
        return;
    pair[l] = max(arr[l], arr[r]);
    pairwise(arr, pair, n, l + 1, r + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int pair[n - 1];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    pairwise(arr, pair, n, 0, 1);
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", pair[i]);
    }
}