#include <stdio.h>
int primeChecker(int n, int i)
{
    if (n == 1 || n == 0)
        return 0;
    if (n == i)
        return 1;
    return n % i && primeChecker(n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int start = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i;)
        {
            if (primeChecker(start, 2))
            {
                printf("%d ", start);
                start++;
                j++;
            }
            else
            {
                start++;
            }
        }
        printf("\n");
    }
}