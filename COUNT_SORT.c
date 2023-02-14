#include <stdio.h>
int max(int a, int b)
{
    return a > b ? a : b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int FABS(int a)
{
    return a < 0 ? a * -1 : a;
}
void sort(int arr[], int n, int mx, int mn)
{
    int freq[mx];
    int freq1[mn];
    for (int i = 0; i < mx; i++)
        freq[i] = 0;
    for (int i = 0; i < mn; i++)
        freq1[i] = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] < 0)
            freq1[arr[i] * -1]++;
        else
            freq[arr[i]]++;
    int j = 0;
    for (int i = mn - 1; i > 0; i--)
        while (freq1[i]--)
            arr[j++] = -i;
    for (int i = 0; i < mx; i++)
        while (freq[i]--)
            arr[j++] = i;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int mx = -99999, mn = 99999;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }
    sort(arr, n, mx + 1, FABS(mn) + 1);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}