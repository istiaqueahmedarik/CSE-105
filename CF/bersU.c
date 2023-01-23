#include <stdio.h>
#include <math.h>
void sort(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int b;
    scanf("%d", &b);
    int boy[b];
    for (int i = 0; i < b; i++)
        scanf("%d", &boy[i]);
    sort(boy, b);
    int g;
    scanf("%d", &g);
    int girl[g];
    for (int i = 0; i < g; i++)
        scanf("%d", &girl[i]);
    sort(girl, g);
    int count = 0;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < g; j++)
        {
            if (fabs(boy[i] - girl[j]) <= 1)
            {
                girl[j] = -1;
                count++;
                break;
            }
        }
    }

    printf("%d\n", count);
}