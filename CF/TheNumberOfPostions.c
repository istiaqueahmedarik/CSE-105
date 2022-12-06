#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int max;
    {
        (a + 1) > (n - b) ? max = a + 1 : (max = n - b);
    }
    printf("%d", (n + 1) - max);
}