#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int x, p;
    scanf("%d%d", &x, &p);
    for (int i = n - 1; i >= p; i--)
    {
        arr[i + 1] = arr[i];
    }
    n++;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}