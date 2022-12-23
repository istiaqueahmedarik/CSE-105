#include <stdio.h>
int check(int arr[], int arr1[], int n)
{
    for (int j = 0; j < n; j++)
    {
        printf("arr--->%d %d\n", arr[j], arr1[j]);
        if (arr[j] != arr1[j])
        {
            return 0;
        }
    }
    return 1;
}
int rightShift(int arr[], int n)
{
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    int freq[n];
    for (int i = 0; i < n; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        freq[arr1[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (freq[i] > n)
        {
            printf("No\n");
            return 0;
        }
    }
    while (1)
    {
        rightShift(arr1, n);
        int j;
        for (j = 0; j < n; j++)
        {
            if (arr[j] == arr1[j])
            {
                break;
            }
        }
        if (j == n)
        {
            printf("Yes\n");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", arr1[i]);
            }
            break;
        }
    }
}