#include <stdio.h>
int prime(int n);
int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        long long N;
        scanf("%lld", &N);
        for (int i = 2; i > 0; i++)
        {
            if (prime(i) == 1)
            {
                if (prime(N + i) == 0)
                {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }
}

int prime(int n)
{
    int p = 0;
    if (n == 2)
    {
        p = 1;
    }
    else
    {
        for (int j = 2; j <= n / 2; j++)
        {

            if (j == n / 2 && n % j != 0)
            {
                p = 1;
            }
        }
    }
    return p;
}