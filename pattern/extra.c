#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        int num;

        for (int j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        num = x;
        for (int k = 1; k <= i; k++)
        {

            printf("  %d", num);

            num++;
        }
        for (int p = i; p > 1; p--)
        {

            printf("  %d", 4 * x - num - 2);

            num++;
        }
        x++;
        printf("\n");
    }
}