#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            if (i % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
    }
    return 0;
}