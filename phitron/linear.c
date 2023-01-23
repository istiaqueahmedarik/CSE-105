#include <stdio.h>
int linear(int n, int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (*(arr + i) == n)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        int length;
        scanf("%d", &length);
        int arr[length];
        for (int i = 0; i < length; i++)
            scanf("%d", &arr[i]);
        int x;
        scanf("%d", &x);
        if (linear(x, arr, length) == -1)
        {
            printf("Case %d: Not Found\n", k + 1);
        }
        else
        {
            printf("Case %d: %d\n", k + 1, linear(x, arr, length) + 1);
        }
    }
}