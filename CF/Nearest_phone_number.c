#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int prime;
    for (int i = m + 1; i <= n; i++)
    {
        int j;
        for (j = 2; j <= i / 2 + 1; j++)
        {
            if (i % j == 0)
            {
                j = 2;
                i++;
            }

            if (j == i / 2 + 1 && i % j != 0)
            {
                prime = i;
                if (i == n)
                {
                    printf("YES");
                }
                else
                {
                    printf("NO");
                }
                i = n;
                break;
            }
        }
    }
}