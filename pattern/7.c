#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - x; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= x; k++)
        {
            printf(" *");
        }
        x++;

        printf("\n");
    }
}