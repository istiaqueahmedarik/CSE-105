#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
        arr1[i] = arr[i];
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);
}