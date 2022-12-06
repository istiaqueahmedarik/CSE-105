#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int onlyOne = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
            onlyOne = 1;
        }
        else
        {
            sum++;
            arr[i] = -1;
        }
    }

    int current = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        {
            (arr[i] > (current + arr[i])) ? current = arr[i] : (current = current + arr[i]);
        }
        {
            current > max ? max = current : (max = max);
        }
        if (max < 0)
        {
            max = 0;
        }
    }
    if (onlyOne == 0 && n > 1)
    {

        printf("%d", max + sum - 1);
    }
    else
    {
        printf("%d", max + sum);
    }
}