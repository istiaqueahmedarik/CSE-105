#include <stdio.h>
int main()
{
    int arr[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        for (int k = 0; k < 11; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}