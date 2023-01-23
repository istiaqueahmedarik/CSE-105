#include <stdio.h>

void sorting(int a[], int length, int type);

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        int ans[n];
        int odd[n];
        int even[n];
        int odd_index = 0, even_index = 0;
        int odd_curr = 0, even_curr = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            scanf("%d", &temp);
            arr[i] = temp;
            if (temp % 2 == 0)
            {
                even[even_index] = temp;
                even_index++;
            }
            else
            {
                odd[odd_index] = temp;
                odd_index++;
            }
        }

        // sort ascending odd array;
        sorting(odd, odd_index, 0);

        // sort desceding even array
        sorting(even, even_index, 1);

        // put values into main answer
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % 2 == 0)
            {
                ans[j] = even[even_curr];
                even_curr++;
            }
            else
            {
                ans[j] = odd[odd_curr];
                odd_curr++;
            }
        }
        printf("Case #%d: ", t);
        for (int k = 0; k < n; k++)
        {
            printf("%d ", ans[k]);
        }
        printf("\n");
    }
}

void sorting(int a[], int length, int type)
{
    for (int index = 0; index < length; index++)
    {
        if (type == 0)
        {
            int target = a[index];
            int temp_index = index - 1;
            while (temp_index >= 0 && a[temp_index] > target)
            {
                a[temp_index + 1] = a[temp_index];
                temp_index--;
            }
            a[temp_index + 1] = target;
        }
        else if (type == 1)
        {
            int target = a[index];
            int temp_index = index - 1;
            while (temp_index >= 0 && a[temp_index] < target)
            {
                a[temp_index + 1] = a[temp_index];
                temp_index--;
            }
            a[temp_index + 1] = target;
        }
    }
}
