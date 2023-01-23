#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arr[100] = {0};
        int n;
        scanf("%d", &n);
        int arr1[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            int temp;
            scanf("%d", &temp);
            arr1[i] = temp;
        }

        for (int i = 0; i < 2 * n; i++)
        {
            if (arr[arr1[i]] == 0)
            {
                printf("%d ", arr1[i]);
                arr[arr1[i]]++;
            }
        }
        printf("\n");
    }
}