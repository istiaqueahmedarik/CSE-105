#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int r = n;
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        int num = 1;

        for (int j = 1; j <= r - 1; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= x; k++)
        {
            if (num <= i)
            {
                printf(" %d", num);
            }
            else
            {
                printf(" %d", 2 * i - num);
            }
            num++;
        }
        x += 2;
        r--;
        printf("\n");
    }
}