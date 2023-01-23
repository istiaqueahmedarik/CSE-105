#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int max = {m > n ? m : n};
    if (m == n)
    {
        if (m % 2 == 0)
        {
            printf("Malvika\n");
        }
        else
        {
            printf("Akshat\n");
        }
    }
    else if (m % 2 == 0 && n % 2 == 0)
    {
        printf("Malvika\n");
    }
    else if (m % 2 != 0 && n % 2 != 0)
    {
        printf("Akshat\n");
    }
    else
    {
        if (max % 2 == 0)
        {
            printf("Akshat\n");
        }
        else
        {
            printf("Malvika\n");
        }
    }
}