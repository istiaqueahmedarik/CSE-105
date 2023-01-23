#include <stdio.h>
int main()
{
    int n;
    int arr[25];
    int k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
    }
    scanf("%d", &k);
    for (int i = k; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr[i]);
    }
}