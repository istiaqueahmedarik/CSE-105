#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("%dx%d ", i, i);
            sum += i * i;
        }
        else
        {
            printf("%dx%d + ", i, i);
            sum += i * i;
        }
    }
    printf("= %d\n", sum);
    return 0;
}