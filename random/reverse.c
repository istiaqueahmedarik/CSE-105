#include <stdio.h>
#include <math.h>
int main()
{
    int num, rev = 0;
    int rem;
    scanf("%d", &num);
    int nnn = num;
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        rev = rev * 10 + rem;
    }
    int diff = fabs(num - rev);
    int div9 = diff / 9;
    printf("|%d-%d|=9x%d", nnn, rev, div9);
    return 0;
}