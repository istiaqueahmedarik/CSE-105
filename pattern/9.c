#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        int num = 1;

        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k < i; k++)
        {

            printf(" %d", num);

            num++;
        }
        for (int p = i; p > 0; p--)
        {

            printf(" %d", 2 * i - num);

            num++;
        }
        printf("\n");
    }
}