#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int pos = 1;
        int val = 0;
        while (pos != n + 1)
        {
            val++;
            if (val % 3 == 0 || val % 10 == 3)
            {
            }
            else
            {
                pos++;
            }
        }
        printf("%d\n", val);
    }
}