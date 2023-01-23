#include <stdio.h>
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
    }
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("%d", count);
    return 0;
}