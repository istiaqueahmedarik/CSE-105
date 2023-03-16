#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        float x = sqrt(n * n - i * i);
        int y = x;
        if (x == y)
        {
            printf("%d %d", i, y);
            break;
        }
    }
}