#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int p;
    scanf("%d", &p);
    for (int i = p; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}