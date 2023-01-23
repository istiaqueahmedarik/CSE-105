#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            printf("1 3 ");
            for (int i = 2; i < n; i++)
                printf("2 ");
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}