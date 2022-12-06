#include <stdio.h>
void sort(int arr[], int length, int type);

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[m];
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
        arr1[i] = temp;
    }

    int min = 0;
    int max = 0;
    sort(arr1, m, 0);
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[pos] == 0)
        {
            pos++;
        }
        min += arr1[pos];
        arr1[pos]--;

        sort(arr, m, 1);
        max += arr[0];

        arr[0]--;
    }

    printf("%d %d", max, min);
}

void sort(int arr[], int length, int type)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (type == 1)
            {
                if (arr[j] < arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            else
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}