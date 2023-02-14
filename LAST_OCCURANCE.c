#include <stdio.h>
int last_occurance(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] > x)
        return last_occurance(arr, low, mid - 1, x);
    else if (arr[mid] < x)
        return last_occurance(arr, mid + 1, high, x);
    else
    {
        if (mid == high || arr[mid + 1] != arr[mid])
            return mid;
        else
            return last_occurance(arr, mid + 1, high, x);
    }
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
    int x;
    scanf("%d", &x);
    printf("%d", last_occurance(arr, 0, n - 1, x));
}