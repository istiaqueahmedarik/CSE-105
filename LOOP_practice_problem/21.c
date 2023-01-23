#include <stdio.h>
int main()
{
    int n, max = -9999;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp > max)
        {
            max = temp;
        }
    }
    printf("%d", max);
}