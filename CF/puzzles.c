#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int min = 9999;
    int left = 0;
    int right = n - 1;
    while (right <= m)
    {
        if (arr[right] - arr[left] < min)
        {
            min = arr[right] - arr[left];
        }
        left++;
        right++;
    }
    printf("%d", min);
}