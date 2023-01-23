#include <stdio.h>
int main()
{
    int n;
    int max = 0;
    int prev = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        prev = prev + (-a + b);
        if (prev > max)
        {
            max = prev;
        }
    }
    printf("%d", max);
    return 0;
}