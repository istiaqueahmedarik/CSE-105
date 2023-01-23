#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l1, r1, l2, r2;
        scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
        int max1;
        int min1;
        if (l1 >= l2)
        {
            max1 = l1;
        }
        else
        {
            max1 = l2;
        }

        if (r1 <= r2)
        {
            min1 = r1;
        }
        else
        {
            min1 = r2;
        }

        if (max1 <= min1)
        {
            printf("%d\n", max1);
        }
        else
        {
            printf("%d\n", l1 + l2);
        }
    }
}