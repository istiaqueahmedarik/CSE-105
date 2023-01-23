#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x1, x2, x3, y1, y2, y3;
        scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
        int count = 0;
        if (x1 == x2)
        {
            count++;
        }
        else if (x2 == x3)
        {
            count++;
        }
        else if (x1 == x3)
        {
            count++;
        }
        if (y1 == y2)
        {
            count++;
        }
        else if (y2 == y3)
        {
            count++;
        }
        else if (y1 == y3)
        {
            count++;
        }
        if (count > 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}