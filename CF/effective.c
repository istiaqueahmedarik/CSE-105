#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int arr[10000000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
    }
    int q;
    int query[1000000];
    scanf("%d", &q);
    int lin1 = 0, lin2 = 0;
    for (int i = 0; i < q; i++)
    {
        int temp;
        scanf("%d", &temp);
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == temp)
            {
                lin1 += j + 1;
                lin2 += fabs(j + 1 - n) + 1;
                break;
            }
        }
    }

    printf("%d %d", lin1, lin2);
    return 0;
}