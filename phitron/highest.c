#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    scanf("%d", &n);
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
        if (temp > max)
        {
            max = temp;
        }
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d ", max - arr[j]);
    }
}