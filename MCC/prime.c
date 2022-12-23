#include <stdio.h>
int prime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int i = 0;
    int j = 2;
    int n;
    scanf("%d", &n);
    while (i <= n)
    {
        if (j > n)
            break;
        if (prime(j))
        {
            printf("%d ", j);
            i++;
        }
        j++;
    }
    printf("\n");
}