#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int len, x;
        scanf("%d %d", &len, &x);
        int arr[len];
        arr[0] = x;
        arr[len - 1] = 1;
        int check = x;
        int flag = len % x;
        int noSoln = 0;
        for (int i = 1; i < len - 1; i++)
        {
            if (i + 1 == check)
            {
                if (flag == 0)
                {
                    arr[i] = len;
                    check = len;
                    flag = -1;
                }
                else if (flag == -1)
                {
                    arr[i] = i;
                    check = i;
                }
                else
                {
                    if ((2 * i + 2) >= len)
                    {
                        printf("%d", i);
                        noSoln = 1;
                        i = len;
                    }
                    else
                    {
                        arr[i] = 2 * (i + 1);
                        check = 2 * (i + 1);
                    }
                }
            }
            else
            {
                arr[i] = i + 1;
            }
        }
        if (noSoln == 1)
        {
            printf("-1\n");
        }
        else
        {
            for (int i = 0; i < len; i++)
            {
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
    }
}