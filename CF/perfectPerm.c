#include <stdio.h>
#include <string.h>
int main()
{
    int arr[1000];
    int n;
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        printf("-1");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            arr[i - 1] = i + 1;
            arr[i] = i;
            i++;
        }
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[j]);
        }
    }
}