#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i != n / 2 + 1)
    {
        printf("NOT PRIME");
    }
    else
    {
        printf("PRIME");
    }
}