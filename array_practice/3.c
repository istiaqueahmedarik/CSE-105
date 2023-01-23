#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int even[n];
    int odd[n];
    int p = 0, q = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[q] = arr[i];
            q++;
        }
        else
        {
            odd[p] = arr[i];
            p++;
        }
    }
}