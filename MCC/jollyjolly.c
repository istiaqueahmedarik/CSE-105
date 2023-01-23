#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n;
    while (scanf("%d", &n) == true)
    {
        int unique[n];
        int arr[n];
        for (int i = 1; i <= n - 1; i++)
        {
            unique[i] = i;
        }

        for (int i = 0; i < n; i++)
        {
            int temp;
            scanf("%d", &temp);
            arr[i] = temp;
        }

        for (int i = 0; i < n - 1; i++)
        {
            unique[(int)fabs(arr[i] - arr[i + 1])] = 0;
        }

        int sum = 0;
        for (int i = 1; i <= n - 1; i++)
        {
            sum += unique[i];
        }
        if (sum == 0)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }
}