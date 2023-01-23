#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int x;
    scanf("%d", &x);
    arr[n] = x;
    n++;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}