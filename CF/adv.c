#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int max = 0;
        int max2 = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int temp;
            scanf("%d", &temp);
            arr[i] = temp;
            if (max <= temp)
            {
                int temp1 = max;
                max = temp;
                max2 = temp1;
            }
            else if (temp > max2)
            {
                max2 = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == max)
            {
                printf("%d ", arr[i] - max2);
            }
            else
            {
                printf("%d ", arr[i] - max);
            }
        }
        // printf("%d %d", max, max2);
        printf("\n");
    }
}