#include <stdio.h>
int main()
{
    int n, a, b;
    int cs = 0;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0 || n == 1)
        {
            scanf("%d %d", &a, &b);
            if (n == 1)
            {
                cs++;
                printf("case %d\n", cs);
                printf("Sum: %d\n", a + b);
            }
            else if (n == 0)
            {
                cs++;
                printf("case %d\n", cs);
                printf("Sub: %d\n", a - b);
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}