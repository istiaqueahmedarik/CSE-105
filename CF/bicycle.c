#include <stdio.h>
int checkRatio(int i, int j);
int main()
{
    int m;
    scanf("%d", &m);
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    int n;
    scanf("%d", &n);
    int arr2[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr2[i] = temp;
        for (int j = 0; j < m; j++)
        {
            if (checkRatio(temp, arr[j]) == 1 && (temp / arr[j]) > max)
            {
                max = temp / arr[j];
            }
            printf("\n");
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (checkRatio(arr2[i], arr[j]) == 1 && max == arr2[i] / arr[j])
            {
                ans++;
            }
        }
    }

    printf("%d\n", ans);
}

int checkRatio(int i, int j)
{
    int temp = i / j;
    if (i == temp * j)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
