#include <stdio.h>
int checkPrime(int n, int i)
{
    return (n == i) ? 1 : n % i && checkPrime(n, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x = 2;
        for (int j = 1; j <= i;)
        {
            if (checkPrime(x, 2))
            {
                printf("%d ", x);
                j++;
            }
            x++;
        }
        printf("\n");
    }
}