#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int small = abs(arr[0] - arr[1]);
    int first = 0;
    int sec = 1;
    for (int i = 0; i < n; i++)
    {
        int j = (i + 1) % n;
        if (small > abs(arr[i] - arr[j]))
        {
            small = abs(arr[i] - arr[j]);
            first = i;
            sec = j;
        }
    }
    printf("%d %d", first + 1, sec + 1);
}