#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int x = 6;

    int left = 0;
    int right = n - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            printf("%d\n", mid);
            return 0;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("not found\n");
    return 0;
}
