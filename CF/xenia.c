#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x = n / 3;
    int arr[n];
    int arr1[8] = {0};
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
        arr1[temp]++;
    }
    if (arr1[1] == x && arr1[2] + arr1[3] == arr1[4] + arr1[6] && arr1[5] == 0 && arr1[7] == 0 && arr1[2] >= arr1[4] && arr1[6] >= arr1[3])
    {
        for (int i = 0; i < arr1[4]; i++)
            printf("1 2 4\n");
        for (int i = 0; i < arr1[2] - arr1[4]; i++)
            printf("1 2 6\n");
        for (int i = 0; i < arr1[3]; i++)
        {
            printf("1 3 6\n");
        }
    }
    else
        printf("-1");
}