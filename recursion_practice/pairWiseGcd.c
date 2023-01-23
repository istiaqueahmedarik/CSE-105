#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void pairwise(int arr[], int pair[], int n, int l, int r)
{
    if (r > n)
        return;
    pair[l] = gcd(arr[l], arr[r]);
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