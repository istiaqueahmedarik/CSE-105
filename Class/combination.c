#include <stdio.h>
int main()
{
    int arr[3] = {4, 4, 5};
    int phase = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= phase; j++)
        {
            printf("%d %d ", arr[i - 1], arr[j - 1]);
        }
        phase++;
        printf("\n");
    }
}