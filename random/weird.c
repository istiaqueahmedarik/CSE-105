#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i <= n; i)
    {
        if (i == 1)
        {
            printf("%d", i);
            break;
        }
        else
        {
            printf("%d, ", i);
            if (i % 2 == 0)
            {
                i = i / 2;
            }
            else
            {
                i--;
            }
        }
    }
    return 0;
}