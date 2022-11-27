#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int max = INT_MIN;
        int min = INT_MAX;
        int arr[3];
        int ans;
        for (int i = 0; i < 3; i++)
        {
            int temp;
            scanf("%d", &temp);
            arr[i] = temp;
            if (temp < min)
            {
                min = temp;
            }
            if (temp > max)
            {
                max = temp;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            if (arr[i] < max && arr[i] > min)
                ans = arr[i];
        }
        printf("%d\n", ans);
    }
}