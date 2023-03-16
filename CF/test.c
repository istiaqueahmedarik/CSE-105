#include <stdio.h>
int main()
{
    int s, n;
    scanf("%d %d", &s, &n);
    int arrX[n];
    int arrY[n];
    int lost = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arrX[i], &arrY[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arrX[j] > arrX[j + 1])
            {
                int temp1 = arrY[j];
                int temp2 = arrX[j];
                arrY[j] = arrY[j + 1];
                arrX[j] = arrX[j + 1];
                arrX[j + 1] = temp2;
                arrY[j + 1] = temp1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s > arrX[i])
        {
            s += arrY[i];
        }
        else
        {
            lost = 1;
        }
    }

    if (lost == 0)
        printf("YES\n");
    else
        printf("NO\n");
}