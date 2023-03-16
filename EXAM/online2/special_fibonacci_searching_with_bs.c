#include <stdio.h>
int freq[30];
void initialize(int n, int i, int j)
{
    freq[j] = n;
    if (n > 1000)
        return;
    initialize(n + i, n, j + 1);
}
int binary_search(int arr[], int x, int l, int r)
{
    if (l > r)
        return 0;
    int mid = (l + r) / 2;
    if (arr[mid] == x)
        return 1;
    else if (arr[mid] > x)
        return binary_search(arr, x, l, mid - 1);
    return binary_search(arr, x, mid + 1, r);
}
int main()
{
    initialize(1, 0, 0);
    int n;
    scanf("%d", &n);
    int arr[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (binary_search(freq, arr[i], 0, 29))
            c++;
    }
    printf("%d", c);
}