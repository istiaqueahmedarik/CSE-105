#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int c = 0;
    for (int i = 0; i <= n; i++)
    {
        c += (int)sqrt(n * n - i * i);
    }

    printf("%d\n", 4 * c + 1);
}