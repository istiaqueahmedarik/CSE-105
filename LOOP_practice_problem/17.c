#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0 && i <= n / i)
        {
            printf("%d x %d = %d\n", i, n / i, n);
        }
    }
    return 0;
}