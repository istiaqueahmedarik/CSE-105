#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int mainVal = arr[k - 1];
    for (int i = k - 1; i < n; i++)
    {
        if (arr[i] != mainVal)
        {
            printf("-1");
            return 0;
        }
    }
    int lastIndex = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] != mainVal)
        {
            lastIndex = i + 1;
        }
    }
    printf("%d", lastIndex);
}