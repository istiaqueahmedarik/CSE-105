#include <stdio.h>
int arr[100];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[temp - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
}