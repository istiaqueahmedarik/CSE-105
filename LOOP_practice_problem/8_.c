#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("+%d", i);
            sum += i;
        }
        else
        {
            printf("-%d", i);
            sum -= i;
        }
    }
    printf("=%d", sum);
    return 0;
}