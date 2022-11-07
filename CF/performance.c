#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[1000];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            ans++;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}