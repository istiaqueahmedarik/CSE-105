#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int max(int a, int b)
{
    return a > b ? a : b;
}
int inside(int arr[], int x, int i, int n, int mx)
{
    if (i == n)
        return mx;
    return inside(arr, x, i + 1, n, max(mx, gcd(arr[i], x)));
}
int max_gcd_pair(int arr[], int n, int i, int mx)
{
    if (i == n)
        return mx;
    return max_gcd_pair(arr, n, i + 1, max(mx, inside(arr, arr[i], i + 1, n, 0)));
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = max_gcd_pair(arr, n, 0, 0);
    printf("%d", ans);
}