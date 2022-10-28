#include <stdio.h>
int main()
{
    int n, mul = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        mul *= 2;
    }
    printf("%d\n", mul);
    return 0;
}