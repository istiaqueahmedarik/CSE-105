#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int sum_5 = 0;
    int arr[n];
    int zero[n];
    int z = 0;
    int j = 0, k;
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);

        if (temp == 0)
        {
            z = 1;

            arr[i] = temp;
            zero[j] = temp;
            j++;
        }
        else
        {
            arr[i] = temp;
            p++;
        }
        sum += temp;
    }
    while (sum % 9 != 0)
    {
        p--;
        sum = sum - 5;
    }
    if (z != 1)
    {
        printf("-1");
    }
    else
    {
        for (int j = 0; j < p; j++)
        {
            printf("5");
        }
        if (p != 0)
        {
            for (k = 0; k < j; k++)
            {
                printf("%d", zero[k]);
            }
        }
        else
        {
            printf("0");
        }
    }
}