#include <stdio.h>
#include <math.h>
int main()
{
    int n, rev = 0;
    scanf("%d", &n);
    int main = n;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    int diff = fabs(main - rev);
    printf("|%d - reverse of %d| = 9 x %d", main, rev, (diff) / 9);
    return 0;
}