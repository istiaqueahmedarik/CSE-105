#include <stdio.h>
int sum(int arr[], int length);
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", sum(arr, n));
    return 0;
}
int sum(int arr[], int length)
{

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        if (((i + 1) % 2 == 0 && arr[i] % 2 == 0) || ((i + 1) % 2 != 0 && arr[i] % 2 != 0))
        {
            sum += arr[i] + i + 1;
        }
    }
    return sum;
}