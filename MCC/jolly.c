#include <stdio.h>
int reverse(int arr[], int length);
int swap(int arr[], int x, int y);
int sum(int arr[], int x, int length);
int mul(int arr[], int x, int length);
int divide(int arr[], int x, int length);
int main()
{
    int t;
    scanf("%d", &t);
    int c = t;
    while (t--)
    {
        int m, n;
        scanf("%d %d", &m, &n);
        int arr[m + 5];
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            char c;
            getchar();

            scanf("%c", &c);

            if (c == 'S')
            {
                int x;
                scanf("%d", &x);
                sum(arr, x, m);
            }
            else if (c == 'M')
            {
                int x;
                scanf("%d", &x);
                mul(arr, x, m);
            }
            else if (c == 'D')
            {
                int x;
                scanf("%d", &x);
                divide(arr, x, m);
            }
            else if (c == 'P')
            {
                int x, y;
                scanf("%d %d", &x, &y);
                swap(arr, x, y);
            }
            else if (c == 'R')
            {
                reverse(arr, m);
            }
        }

        printf("Case %d:\n", c - t);
        for (int i = 0; i < m; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int reverse(int arr[], int length)
{
    int i = 0;
    int j = length - 1;

    for (i = 0; i < j; i++)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
}

int swap(int arr[], int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int sum(int arr[], int x, int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] += x;
    }
}

int mul(int arr[], int x, int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] *= x;
    }
}

int divide(int arr[], int x, int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] /= x;
    }
}