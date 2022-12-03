#include <stdio.h>
void swap(int *x, int *y);
int main()
{
    int length;
    scanf("%d", &length);
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int p, q;
        scanf("%d %d", &p, &q);
        swap(&arr[p - 1], &arr[q - 1]);
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}