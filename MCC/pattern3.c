#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x = 1;
    int y = n * n + 1;
    int z = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= n + 1 - i; j++)
        {

            printf("%d*", x);
            x++;
        }
        for (int j = 1; j <= n + 1 - i; j++)
        {

            if (j == n + 1 - i)
            {
                printf("%d", y);
            }
            else
            {
                printf("%d*", y);
            }
            y++;
        }
        printf("\n");
        y = y - z * 2 - 1;
        z--;
    }
}