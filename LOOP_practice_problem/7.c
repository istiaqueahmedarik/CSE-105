#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        if (i == n)
        {
            printf("%d ", i);
        }
        else
        {
            printf("%d + ", i);
        }
    }
    printf("= %d", sum);
    return 0;
}